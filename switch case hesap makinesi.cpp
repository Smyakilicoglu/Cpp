#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"Hesap makinesi programina hosgeldiniz."<<endl;
    char islem; 
	cout<<"1.islem: toplama islemi"<<endl;
	cout<<"2.islem: cikartma islemi"<<endl;
	cout<<"3.islem: carpma islemi"<<endl;
	cout<<"4.islem: bolme islemi"<<endl;
	cout<<"Islemi giriniz: ";
	cin>>islem;
	cout<<"1. sayiyi giriniz: ";
	cin>>a;
	cout<<"2. sayiyi giriniz: ";
	cin>>b;
	switch (islem) //secim yapabilmeni saglayan alan.
	{
		case '1': //secim yaptıgımız 
			cout<<"toplamlari: "<<a+b;
			break;
		case '2':
			cout<<"farklari: "<<a-b;
			break;
		case '3':
			cout<<"carpimlari: "<<a*b;
			break;
		case '4':
			cout<<"bolumleri: "<<a/b;
			break;
		default:
		    cout<<"gecersiz islem. ";
		    break;
	}
}