# insertion_sort2
data structure insertion sort code2
Insertion Sort, diziyi birer birer eleman ekleyerek sıralayan, mantığı iskambil kâğıdı dizerken yapılan işleme benzeyen bir sıralama algoritmasıdır.

Temel Mantık

Dizinin ilk elemanı sıralı kabul edilir
Sonraki eleman alınır
Sıralı kısım içinde doğru yerine kaydırılarak eklenir
Her adımda sıralı bölüm büyür

Zaman Karmaşıklığı (Big-O)
Durum	Karmaşıklık
En iyi (sıralı)	O(n)
Ortalama	O(n²)
En kötü (ters sıralı)	O(n²)

Avantajları

✔ Küçük dizilerde çok etkilidir
✔ Zaten sıralı dizilerde çok hızlıdır
✔ Stable (eşit elemanların sırası bozulmaz)
✔ In-place (ekstra bellek kullanmaz)

Dezavantajları

✖ Büyük dizilerde yavaştır
✖ Çok fazla kaydırma yapılır
