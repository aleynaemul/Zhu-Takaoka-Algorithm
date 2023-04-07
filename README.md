# Zhu-Takaoka-Algorithm

Zhu-Takaoka algoritması; Boyer-Moore algoritmasının
bir türevi, Levenshtein mesafesi hesaplama probleminin dinamik programlama tabanlı bir çözümüdür. 

Bu algoritma DNA dizilimlerinde benzerlik arama işlemleri için tasarlanmış bir algoritmadır, 
iki string arasındaki en az değişiklik sayısını bulur. Bu değişiklik sayısı, iki string arasındaki en küçük mesafedir.

Algoritma, iki adım halinde çalışır. İlk adım, bir önbellek matrisi oluşturulmasıdır.
Bu matris, her i ve j pozisyonu için, ilk i karakteri ikinci j karakterine dönüştürmek için en az kaç değişiklik gerektiğini gösterir. 
Bu matris dinamik programlama yöntemi ile hesaplanır.

İkinci adım, en az değişiklik sayısını bulmaktır.
Bu adımda, iki string karşılaştırılır ve her pozisyondaki karakterler arasındaki fark sayısı hesaplanır. 
Bu fark sayısı, önbellek matrisindeki i ve j pozisyonundaki değerdir. 
Algoritma, her i ve j pozisyonu için en az fark sayısını hesaplar ve bu sayı, iki string arasındaki en küçük mesafe olarak adlandırılır.


m ve n string uzunluğu olmak üzere; algoritmanın zaman karmaşıklığı O(mn)' dir. Bu durumda algoritmanın performansı, işlenen stringlerin uzunluğuna bağlıdır.
Yani uzun stringler algoritmanın maliyetini arttırır. En kötü durum da m ve n' nin toplam uzunluğuna bağlıdır. 

Ancak, diğer dinamik programlama tabanlı algoritmalara kıyasla (karşılaştırma tablolarına buradan ulaşabilirsiniz https://www.emo.org.tr/ekler/113fa9dacd22490_ek.pdf)
Zhu-Takaoka algoritması daha hızlı çalışır ve günümüzde daha yaygın kullanılır.
