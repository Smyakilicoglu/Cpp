#include<iostream>
using namespace std;

void faktoriyel (int sayi)
	{
		double faktoriyel=1;
		for (int i=1;i<=sayi;i++)
		{
			faktoriyel*=i;
		}
		cout<<"faktoriyel: "<<faktoriyel<<endl;
	}
int main()
    {
	int sayi;
	cout<<"sayiyi giriniz: ";
	cin>>sayi;
	faktoriyel(sayi);
	
    }