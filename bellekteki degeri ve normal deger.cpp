#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	int *x,*y,*z;
	x=&a;
	y=&b;
	z=&c;
	
	cout<<"a degiskenini giriniz: ";
	cin>>a;
	cout<<"a degiskeninin degeri: "<<*x<<endl;
	cout<<"a degiskeninin bellekteki degeri: "<<&a<<endl<<endl;
	cout<<"b degiskenini giriniz: ";
	cin>>b;
	cout<<"b degiskenininin degeri: "<<*y<<endl;
	cout<<"b degiskeninin bellekteki degeri: "<<&b<<"\n\n";
	cout<<"c degiskenini giriniz: ";
	cin>>c;
	cout<<"c degiskeninin degeri: "<<*z<<endl;
	cout<<"c degiskeninin bellekteki degeri: "<<&c;
}