#include <iostream>
using namespace std;

int linearSearch(int sayidizisi[],int boyut,int aranandeger) // Arama algoritmas� fonksiyonu
{
    for(int i=0;i<boyut;i++)// Bu d�ng� sayesinde aranandeger t�m dizi elemanlar�yla kar��la�t�r�lacak ve e�le�ene kadar arama devam edecektir.
    {
        if(sayidizisi[i]==aranandeger)// E�er sayidizisi[i]==aranandeger olursa
        return i; // Eleman�n dizide bulundu�u indeksi d�nd�r.
    }
        return -1; //Eleman dizide bulunamazsa -1 d�nd�r.

}

int main()
{
    int x; // Dizi boyutu
    cout<<"Olusturdugunuz dizinin eleman sayisini giriniz : ";
    cin>>x; // Dizi boyutunu kullan�c�dan al�r.
    int dizi[x];

     cout<<"Dizi elemanlarini giriniz "<<endl;
    for(int i=0;i<x;i++) // Dizi elemanlar�n� kullan�c� belirler.
    {
       cout<<"dizi["<< i <<"] = ";
       cin>>dizi[i];
    }

    int arananeleman;
    cout<<"Dizi icerisinde aradiginiz degeri giriniz : ";
    cin>>arananeleman;

    cout<<linearSearch(dizi,x,arananeleman); //dizi isimli dizi sayidizisine atan�r, x dizinin boyutunu belirtir, arananeleman aranandeger yerine ge�erek fonksiyon i�erisinde kar��la�t�rma yapar.
    return 0;
}
