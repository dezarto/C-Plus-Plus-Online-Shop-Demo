# Flare Online Mağaza: C++ Projesi

Bu C++ projesi, ürün yönetimi, müşteri etkileşimi ve yönetim özellikleriyle basit bir "Flare" online mağazasını simüle eder.

## Özellikler

- **Ürün Kataloğu:** Uygulama, her biri ayrıntılı bilgi ve envanter yönetimine sahip kitap, film ve müzik ürünlerinden oluşan bir katalog içerir.
- **Müşteri Sepeti:** Müşteriler kataloğu inceleyebilir, ürünlerini sepetlerine ekleyebilir, sepet içeriklerini görüntüleyebilir, ürünleri kaldırabilir ve indirimler uygulanmış toplam fiyatı hesaplayabilir.
- **Yönetici Arayüzü:** Yöneticiler, her kategori için ürün fiyatını ve stok bilgilerini güncelleyebilir.
- **Nesne Yönelimli Tasarım:** Proje, veri ve işlevselliği düzenlemek için Product, Book, Movie, Music ve Cart gibi sınıfları kullanarak nesne yönelimli prensipleri kullanır.

## Çalışma Şekli

Uygulama, müşteri ve yönetici giriş seçenekleri sunan bir ana menü etrafında yapılandırılmıştır.

- **Müşteri Arayüzü:** Müşteriler ürün kategorilerini gezinebilir, ürün ayrıntılarını görüntüleyebilir, ürünlerini sepetlerine ekleyebilir ve sepetlerini yönetebilir.
- **Yönetici Arayüzü:** Yöneticiler, ürün fiyatını ve stok bilgilerini güncellemek için ayrı bir menüye erişebilirler.

## Ana Bileşenler

- **Product Sınıfı:** Tüm ürünler (kitap, film ve müzik) için temel sınıf. Ortak öznitelikleri ve yöntemleri tanımlar.
- **Book, Movie, Music Sınıfları:** Kendi indirim hesaplama yöntemlerini uygulayarak Product sınıfından türetilmiş sınıflardır ve özel öznitelikler eklerler.
- **Cart Sınıfı:** Ürün ekleme, kaldırma ve görüntüleme dahil olmak üzere müşterinin sepetini yönetir.
- **Ana Menü:** Müşteri ve yönetici etkileşimleri için birincil arayüz sağlar.

## Kod Yapısı

Proje aşağıdaki dosyalardan oluşur:

- `Book.cpp`, `Book.h`: Book sınıfını uygular.
- `Cart.cpp`, `Cart.h`: Cart sınıfını uygular.
- `Movie.cpp`, `Movie.h`: Movie sınıfını uygular.
- `Music.cpp`, `Music.h`: Music sınıfını uygular.
- `Product.cpp`, `Product.h`: Product sınıfını uygular.
- `main.cpp`: Uygulamayı çalıştıran ana fonksiyonu içerir.
