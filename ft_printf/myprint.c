#include <stdarg.h>
#include <unistd.h>
void ft_putstr(char *str, int *i)
{
    if(!str)
        str = "(null)";
    while(*str)
        *i += write(1, str++, 1);
}
void ft_putnbr(long long int nb, int base, int *i)
{
    if(nb < 0)
    {
        nb *= -1;
        *i += write(1, "-", 1);
    }
    if(nb >= base)
        ft_putnbr((nb / base), base, i);
    *i += write(1, &"0123456789abcdef"[nb % base], 1);

}
int ft_printf(const char *str, ... )
{
    int i = 0;
    va_list arg;
    va_start(arg, str);
    while(*str)
    {
        if(*str == '%' && *(str + 1))
        {
            str++;
            if(*str == 's')
                ft_putstr(va_arg(arg, char *), &i);
            else if(*str == 'd')
                ft_putnbr((long long int)va_arg(arg, int), 10, &i);
            else if(*str == 'x')
                ft_putnbr((long long int)va_arg(arg, unsigned int), 16, &i);
        }
        else
            i += write(1, str, 1);
        str++;
    }
    va_end(arg);
    return(i);
}