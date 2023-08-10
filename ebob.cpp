//iki sayinin ebobunu bulan program
#include<iostream>
using namespace std;
int ebob(int a, int b)
{
	int buyuk,kucuk;
	buyuk=a;
	kucuk=b;
	if (a<b)
	{
		buyuk=b;
		kucuk=a;
	}
	int bolen=kucuk;
	while (a%bolen !=0 || b%bolen !=0) /*a ve b sayisini kucuk sayiya boldurme 
	eger sonuc 0 cıkarsa donguden cıkacak. a=5 b=2 olsun
	5/2 kalan 1 (dongu devam ediyo) 5/1 kalan 5 (dongu devam ediyo) ??? */
	{
		bolen--;
	}
	return bolen;
}
int main()
{
	int a,b;
    int sonuc=ebob(5,2);
    cout<<"sayilarin ebobu: "<<sonuc;
	
	
}