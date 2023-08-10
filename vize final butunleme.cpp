#include<iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Turkish");
	int vize,final,ort,butunleme;
	cout<<"Vize notunuzu giriniz: ";
	cin>>vize;
	cout<<"final notunuzu giriniz: ";
	cin>>final;	
	ort=(vize*0.4)+(final*0.6);
	cout<<"not ortalamasi: "<<ort;
	if (ort >= 60)
	{
		cout<<"\nGECTINIZ.";
	}
	else
	{
		cout<<"\nBUTUNLEMEYE KALDINIZ.";
		cout<<"\nButunleme notunu giriniz: ";
		cin>>butunleme;
		ort=(vize*0.4)+(butunleme*0.6);
		cout<<"not ortalamasi: "<<ort;
		if ( ort >= 60)
		{
			cout<<"\nGECTINIZ.";
		}
		else
		{
			cout<<"\nKALDINIZ.";
		}
	}
}