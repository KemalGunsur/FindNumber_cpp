#include <iostream>
#include <random>

using namespace std;

int main()
{
   // değişkenler
   char replay;
   int kalan_hak, random_sayi, tahmin;
   string basari = "basari sonucunuz : ";

tekraroyna:
   // sayı oluşturma kodları
   random_device rd;
   mt19937 gen(rd());
   uniform_int_distribution<> numb(0, 100);

   // program girişi
   random_sayi = numb(gen);
   kalan_hak = 10;
   cout << "Sayi Bulma Oyununa Hos Geldiniz" << endl
        << "Tahminde Bulunmaya Baslayiniz" << endl
        << "Kural: 10 tahmin hakkiniz var" << endl;

islemegiris:
   cout << "tahmininizi giriniz: ";
   cin >> tahmin;

   //bu if komutunu öğren bu komut yapay zekadan alındı terminalde yanlış bilgilerin girilmesini engellemek için
if (cin.fail()) {
       cin.clear();
       cin.ignore(10000, '\n');
       
       cout << "Hata! Lutfen harf degil, sadece SAYI giriniz.\n" << endl;
       goto islemegiris; 
   }




   if (tahmin == random_sayi)
   {
      cout << "Sayiyi dogru tahmin ettiniz :)"<<endl;
      goto degerlendirme;
   }
   else
   {
      if (random_sayi < tahmin)
      {
         cout << "tahmininiz sayidan buyuk" << endl;
      }
      else if (random_sayi > tahmin)
      {
         cout << "tahmininiz sayidan kucuk" << endl;
      }

      kalan_hak--;
      cout << "Kalan hakkiniz : " << kalan_hak << endl;
      if (kalan_hak > 0)
      {
         goto islemegiris;
      }
      else
      {
         cout << "Hakkiniz bitti"<<endl;
      }
   }
   degerlendirme:
   // 0-3 tahmin akıl okuyucu 4-7 tahmin ortalama zeka 8-10 kendini geliştirmen gerekli ve bulamaz ise bulamadınız lütfen kendinizi geliştiriniz yazıdırılacak
   // bunun için tahmin hakkının 10 üzerinden değerlendirilmesini tersten okumam lazım yani 7 hak kaldıysa akıl okuyucu olması gerekir
   if (kalan_hak >= 7)
   {
      cout << basari << "Akil Okuyucu" << endl;
   }
   else if (kalan_hak >= 3)
   {
      cout << basari << "Ortalama zeka" << endl;
   }
   else if (kalan_hak < 3 && kalan_hak > 0)
   {
      cout << basari << "Kendini gelistirmen gerekli" << endl;
   }
   else
   {
      cout << basari << "Lutfen Kendinizi Gelistiriniz" << endl;
      cout<<"tahmin edilmeye calisilan sayi : "<<random_sayi<<endl;
   }
   // kullanıcı tekrar oynamak ister ise goto kullanıp işlem başlangıcına gönderebilirim burda da swtich case kullanıcam
   cout << "Tekrar oynamak istermisiniz(E/H) : ";
   cin >> replay;
   switch (replay)
   {
   case 'E':
   case 'e':
      goto tekraroyna;
      break;
   case 'H':
   case 'h':
      cout << "Oyun bitti, iyi gunler :)"<<endl;
      break;
   default:
      cout << "Gecersiz secim, oyun bitti."<<endl;
   }
   system("pause");

   return (0);
}