#include<iostream>
using namespace std;
int main()
{
	float yukseklik;
	cout<<"Bir deger giriniz: ";
	cin>>yukseklik;
	int row=0;
	while ( row < yukseklik)
	{
		int count=0;
		while ( count < yukseklik - row)
		{
			cout<<" ";
			count++;
		}
		count=0;
		while (count < 2*row +1)
		{
			cout<<"*";
			count++;
		}
		cout<<'\n';
		row++;
	}
}