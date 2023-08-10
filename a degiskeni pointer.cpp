#include<iostream>
using namespace std;
int main()
{
	int a,*ptr=&a;
	cout<<"Bir a degiskeni giriniz: ";
	cin>>a;
	cout<<"a degiskeninin adresi: "<<ptr<<endl;
	cout<<"a degiskeninin degeri: "<<*ptr; 
}