#include<iostream>
using namespace std;
int main()
{
	int a,b;
	char islem;
	cout<<"1.Islem: Toplama islemi."<<endl;
	cout<<"2.Islem: Cikarma islemi."<<endl;
	cout<<"3.Islem: Carpma islemi."<<endl;
	cout<<"4.Islem: Bolme islemi."<<endl;
	while (true)
	{

	cout<<"\n\nIslem sayisi giriniz: ";
	cin>>islem;
	cout<<"1. sayiyi giriniz: ";
	cin>>a;
	cout<<"2. sayiyi giriniz: ";
	cin>>b;
	switch (islem)
	{
	    case '1':
	        cout<<"Toplama islemi: "<<a+b;
	        break;
	    case '2':
	    	cout<<"Cikarma islemi: "<<a-b;
	    	break;
	    case '3':
	    	cout<<"Carpma islemi: "<<a*b;
	    	break;
	    case '4':
	    	cout<<"Bolme islemi: "<<a/b;
	    	break;
	    default:
	    	cout<<"\nYanlis islem sayisi girdiniz tekrar deneyiniz...";	
	    	break;	
	}	}
}
  
