# 🎯 C++ Sayı Bulma Oyunu (Number Guessing Game) 🎯

Bu proje, C++ ile geliştirilmiş, kullanıcı etkileşimli ve hata toleranslı (error-handling) bir konsol tabanlı sayı tahmin oyunudur. Oyuncudan 0 ile 100 arasında rastgele belirlenen bir sayıyı 10 hak içerisinde bulması istenir.
(modüler dosya döngü ve goto kullanmadan yazılmış if-else barındıran ham bir cpp dosyasıdır öğrenim sürecinde goto veya döngüler olmadan kodun ne kadar uzayabileceği ve karmaşıklaşabileceği ama bir şekilde işin içinden çıkılabileceğini gösterir :)  )

## ✨ Özellikler

* **Modern Rastgele Sayı Üretimi:** Eski `rand()` fonksiyonu yerine, istatistiksel olarak çok daha güvenilir olan `<random>` kütüphanesi ve `Mersenne Twister (mt19937)` motoru kullanılmıştır.
* **Hata Yakalama (Input Validation):** Kullanıcının sayı yerine yanlışlıkla harf veya özel karakter girmesi durumunda programın sonsuz döngüye girmesi engellenmiş, `cin.fail()` ile güvenli bir şekilde uyarı verilmesi sağlanmıştır.(modüler dosyada bu özellik yoktur)
* **Dinamik Puanlama Sistemi:** Kalan tahmin hakkına göre oyuncuya çeşitli unvanlar ("Akıl Okuyucu", "Ortalama Zeka" vb.) verilir.
* **Tekrar Oynanabilirlik:** Oyun bittikten sonra programı kapatmadan defalarca baştan oynama imkanı sunar. Rastgele sayı motoru performansı korumak adına yalnızca ilk açılışta bir kez çalıştırılır.

## 🛠️ Kullanılan Teknolojiler ve Araçlar
* **Dil:** C++
* **Geliştirme Ortamı:** Visual Studio Code (VS Code)
* **Kütüphaneler:** `<iostream>`, `<random>`

## 🚀 Kurulum ve Çalıştırma

Projeyi kendi bilgisayarınızda derlemek ve çalıştırmak için aşağıdaki adımları izleyebilirsiniz:

1. Depoyu klonlayın veya `seçtiğiniz dosyadaki cpp` dosyasını indirin.
2. Terminali açın ve dosyanın bulunduğu dizine gidin.
3. C++ derleyiciniz (örneğin MinGW/g++) ile kodu derleyin:
    g++ number1.cpp -o number1

4. Oluşan çalıştırılabilir dosyayı başlatın:
    .\number1

## 🎮 Nasıl Oynanır?
1. Program başladığında arka planda 0-100 arası gizli bir sayı tutulur.
2. Terminal üzerinden tahmininizi girin ve Enter'a basın.
3. Program sizi "Tahmininiz sayıdan büyük" veya "Tahmininiz sayıdan küçük" şeklinde yönlendirecektir.
4. Toplam 10 hakkınız bulunmaktadır. Hakkınız bitmeden sayıyı bulmaya çalışın!

---
**Geliştirici:** Kemal Günsür