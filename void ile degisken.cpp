#include<iostream>
using namespace std;
void degisken(int *ptr)
{
	*ptr=20;
    cout<<"fonksiyonda a degiskeninin degeri: "<<*ptr<<endl;
}
int main()
{
	int a;
	cout<<"Bir a degiskeni giriniz: ";
	cin>>a;
	cout<<"a degiskeninin degeri: "<<a<<endl;
	cout<<"a degiskeninin bellekteki adresi: "<<&a<<endl;
	degisken(&a);
	cout<<"fonksiyonda yeni a degiskeninin degeri: "<<a<<endl;

	
	
}