#include<iostream>
using namespace std;
int main()
{
	int sayi;
	cout<<"bir sayi degeri giriniz: ";
	cin>>sayi;
	cout<<endl;
	for (int i=1;i<=sayi;i++)
	{
		for (int j=1;j<=sayi;j++)
		cout<<"* ";
		cout<<endl;
	}
	cout<<endl;
}
