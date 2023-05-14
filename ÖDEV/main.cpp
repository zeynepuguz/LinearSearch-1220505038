#include <iostream>
using namespace std;

int linearSearch(int sayidizisi[],int boyut,int aranandeger) // Arama algoritmasý fonksiyonu
{
    for(int i=0;i<boyut;i++)// Bu döngü sayesinde aranandeger tüm dizi elemanlarýyla karþýlaþtýrýlacak ve eþleþene kadar arama devam edecektir.
    {
        if(sayidizisi[i]==aranandeger)// Eðer sayidizisi[i]==aranandeger olursa
        return i; // Elemanýn dizide bulunduðu indeksi döndür.
    }
        return -1; //Eleman dizide bulunamazsa -1 döndür.

}

int main()
{
    int x; // Dizi boyutu
    cout<<"Olusturdugunuz dizinin eleman sayisini giriniz : ";
    cin>>x; // Dizi boyutunu kullanýcýdan alýr.
    int dizi[x];

     cout<<"Dizi elemanlarini giriniz "<<endl;
    for(int i=0;i<x;i++) // Dizi elemanlarýný kullanýcý belirler.
    {
       cout<<"dizi["<< i <<"] = ";
       cin>>dizi[i];
    }

    int arananeleman;
    cout<<"Dizi icerisinde aradiginiz degeri giriniz : ";
    cin>>arananeleman;

    cout<<linearSearch(dizi,x,arananeleman); //dizi isimli dizi sayidizisine atanýr, x dizinin boyutunu belirtir, arananeleman aranandeger yerine geçerek fonksiyon içerisinde karþýlaþtýrma yapar.
    return 0;
}
