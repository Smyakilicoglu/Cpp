#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int a,b;
	string islem;
	cout<<"Hesap makinesi programina hosgeldiniz...";
	cout<<"\n1.islem:Toplama islemi.";
	cout<<"\n1.islem:cikarma islemi.";
	cout<<"\n1.islem:carpma islemi.";
	cout<<"\n1.islem:bolme islemi.";
	cout<<"\nIslemi giriniz: ";
	cin>>islem;
	if (islem == "1")
	{
		cout<<"1.sayiyi giriniz: ";
		cin>>a;
		cout<<"2.sayiyi giriniz: ";
		cin>>b;
		cout<<"Toplamlari: "<<a+b;
	}
	else if (islem == "2")
	{
		cout<<"1.sayiyi giriniz: ";
		cin>>a;
		cout<<"2.sayiyi giriniz: ";
		cin>>b;
		cout<<"Farklari: "<<a-b;
	}
	else if (islem == "3")
	{
		cout<<"1.sayiyi giriniz: ";
		cin>>a;
		cout<<"2.sayiyi giriniz: ";
		cin>>b;
		cout<<"Carpma: "<<a*b;
	}
	else if (islem == "4")
	{
		cout<<"1.sayiyi giriniz: ";
		cin>>a;
		cout<<"2.sayiyi giriniz: ";
		cin>>b;
		cout<<"Bolme: "<<a/b;
	}
	else 
	{
		cout<<"hatali islem sayisi girdiniz.";
	}
getch();
}