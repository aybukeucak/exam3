ft_printf
Bu kod, basit bir printf fonksiyonu yerine kendi ft_printf fonksiyonunu uygulamayı amaçlayan bir C programıdır.

İşlevlerinizi inceleyelim:

ft_putstr: Bu işlev, bir karakter dizisini (string) alır ve bu diziyi ekrana yazdırır. Eğer gelen string NULL ise, "(null)" yazdırır. Yazılan karakter sayısını takip etmek için bir int işaretçisi kullanılır.
ft_putnbr: Bu işlev, bir tam sayıyı belirli bir tabanda ekrana yazdırır. Eğer sayı negatif ise başına "-" işareti ekler. Sayı belirtilen tabandan büyük veya eşitse, tabana bölünerek rekürsif olarak işlem yapılır. Yazılan karakter sayısını takip etmek için bir int işaretçisi kullanılır.
ft_printf: Bu işlev, değişken sayıda argüman alan bir printf benzeri işlevdir. İlk argüman olarak bir format stringi alır ve bu stringi ekrana yazdırır. Format stringindeki % karakterlerini tespit eder ve bu karakterlerin hemen sonrasındaki format belirleyicilere göre ilgili işlevleri çağırır (ft_putstr, ft_putnbr). Bu işlev yazılan toplam karakter sayısını döndürür.
Ana main fonksiyonunda, ft_printf fonksiyonu kullanılarak çeşitli formatlardaki çıktılar oluşturulur. ft_printf ile standart printf fonksiyonunun sonuçları karşılaştırılarak doğruluğu kontrol edilir.

Bu program, printf işlevinin temel işlevselliğini yeniden oluşturmayı hedefler ve %s, %d, %x gibi basit format belirleyicilerini destekler.
-----------------------------------------
get_next_line
ft_strlen: Bir karakter dizisinin uzunluğunu hesaplar.
ft_strjoin: İki karakter dizisini birleştirir.
check: Verilen karakter dizisinde bir satır sonu karakteri (\n) bulunup bulunmadığını kontrol eder.
ft_substr: Bir karakter dizisinin belirli bir bölümünü kopyalar.
ft_strchr: Bir karakter dizisinde belirli bir karakterin varlığını kontrol eder.
next_line fonksiyonu, bir dosyadan bir sonraki satırı okur. Okuma işlemi, dosya sonuna ulaşılana veya bir satır sonu karakteri bulunana kadar devam eder.

get_next_line fonksiyonu, bir dosya tanımlayıcısı (fd) alır ve next_line fonksiyonunu kullanarak dosyadan bir sonraki satırı elde eder. Ardından, elde edilen satırın sonunu (satır sonu karakteri) bulur ve satırın geri kalanını yeni bir karakter dizisine kopyalar. Bu işlem sonucunda kalan satır, bir sonraki get_next_line çağrısında kullanılmak üzere saklanır.