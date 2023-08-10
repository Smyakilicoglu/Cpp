// sayilarin ekokunu hesaplama
#include<iostream>
using namespace std;
int ekok(int a,int b)
{
	int buyuk,kucuk;
	if (a<b)
	{
		kucuk=a;
		buyuk=b;
	}
	else
	{
		kucuk=b;
		buyuk=a;
	}
	int kat=kucuk;
	while (kat%kucuk !=0 || kat%buyuk !=0)
	{
		kat=kat+kucuk;
	}
	return kat;
}
int main()
{
	int sonuc=ekok(17,5);
	cout<<"ekok: "<<sonuc;
	
}