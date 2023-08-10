#include<iostream>
using namespace std;
int main()
{
	int giris;
	cout<<"Yukseklik degeri giriniz: ";
	cin>>giris;
	for (int i=1;i<=giris/2;i++)
	{
		for (int j=1;j<=giris;j++)
		{
			if (j<=i || giris+1<=i+j)
			cout<<"* ";
			else 
			cout<<"  ";
		}
		cout<<endl;
	}
	for (int i=(giris/2)+1;i<=giris;i++)
	{
		for (int j=1;j<=giris;j++)
		{
			if (j>=i || giris+1>=i+j)
			cout<<"* ";
			else
			cout<<"  ";
		}
		cout<<endl;
	}
}