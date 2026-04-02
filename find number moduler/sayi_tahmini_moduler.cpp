#include <iostream>
#include <random>

using namespace std;

int main()
{
   // değişkenler
   int kalan_hak, random_sayi, tahmin;
   bool degerlendirme;
   string basari = "basari sonucunuz : ";

   // sayı oluşturma kodları
   random_device rd;
   mt19937 gen(rd());
   uniform_int_distribution<> numb(0, 100);

   // program girişi
   degerlendirme = false;
   random_sayi = numb(gen);
   kalan_hak = 10;
   cout << "Sayi Bulma Oyununa Hos Geldiniz" << endl
        << "Tahminde Bulunmaya Baslayiniz" << endl
        << "Kural: 10 tahmin hakkiniz var" << endl
        << "tahmininizi giriniz: ";
   cin >> tahmin;
   if (tahmin == random_sayi)
   {
      degerlendirme = true;
      cout << "Sayiyi dogru tahmin ettiniz :)" << endl;
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
   }
   // 2. hak
   if (degerlendirme == false)
   {
      cout << "Tahmininizi giriniz: ";
      cin >> tahmin;
      if (tahmin == random_sayi)
      {
         degerlendirme = true;
         cout << "Sayiyi dogru tahmin ettiniz :)" << endl;
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
      }
   }
   // 3. hak
   if (degerlendirme == false)
   {
      cout << "Tahmininizi giriniz: ";
      cin >> tahmin;
      if (tahmin == random_sayi)
      {
         degerlendirme = true;
         cout << "Sayiyi dogru tahmin ettiniz :)" << endl;
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
      }
   }
   // 4.hak
   if (degerlendirme == false)
   {
      cout << "Tahmininizi giriniz: ";
      cin >> tahmin;
      if (tahmin == random_sayi)
      {
         degerlendirme = true;
         cout << "Sayiyi dogru tahmin ettiniz :)" << endl;
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
      }
   }
   // 5. hak
   if (degerlendirme == false)
   {
      cout << "Tahmininizi giriniz: ";
      cin >> tahmin;
      if (tahmin == random_sayi)
      {
         degerlendirme = true;
         cout << "Sayiyi dogru tahmin ettiniz :)" << endl;
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
      }
   }
   // 6.hak
   if (degerlendirme == false)
   {
      cout << "Tahmininizi giriniz: ";
      cin >> tahmin;
      if (tahmin == random_sayi)
      {
         degerlendirme = true;
         cout << "Sayiyi dogru tahmin ettiniz :)" << endl;
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
      }
   }
   // 7. hak
   if (degerlendirme == false)
   {
      cout << "Tahmininizi giriniz: ";
      cin >> tahmin;
      if (tahmin == random_sayi)
      {
         degerlendirme = true;
         cout << "Sayiyi dogru tahmin ettiniz :)" << endl;
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
      }
   }
   // 8. hak
   if (degerlendirme == false)
   {
      cout << "Tahmininizi giriniz: ";
      cin >> tahmin;
      if (tahmin == random_sayi)
      {
         degerlendirme = true;
         cout << "Sayiyi dogru tahmin ettiniz :)" << endl;
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
      }
   }
   // 9.hak
   if (degerlendirme == false)
   {
      cout << "Tahmininizi giriniz: ";
      cin >> tahmin;
      if (tahmin == random_sayi)
      {
         degerlendirme = true;
         cout << "Sayiyi dogru tahmin ettiniz :)" << endl;
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
      }
   }
   // 10.hak
   if (degerlendirme == false)
   {
      cout << "Tahmininizi giriniz: ";
      cin >> tahmin;
      if (tahmin == random_sayi)
      {
         degerlendirme = true;
         cout << "Sayiyi dogru tahmin ettiniz :)" << endl;
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
      }
   }

   if (degerlendirme == true)
   {
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
         cout << "tahmin edilmeye calisilan sayi : " << random_sayi << endl;
      }
   }

   if (kalan_hak == 0 && degerlendirme == false)
   {
      cout << basari << "Lutfen Kendinizi Gelistiriniz" << endl;
      cout << "tahmin edilmeye calisilan sayi : " << random_sayi << endl;
   }

   system("pause");
   return 0;
}
