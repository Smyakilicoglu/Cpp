#include<iostream>
using namespace std;
int main()
{
	int dizi[5];
	for (int i=0;i<5;i++)
	{
		cout<<"Bir sayi giriniz(1-9 arasi bir sayi): ";
		cin>>dizi[i];
	}
	cout<<endl;
	char a;
	cout<<"herhangi bir karakter giriniz: ";
	cin>>a;
	for (int i=0;i<5;i++)
	{
		cout<<i<<"\t"<<dizi[i]<<"\t";
		for (int j=0;j<dizi[i];j++)
		{
			cout<<a;
		}
	cout<<endl;
	}
}