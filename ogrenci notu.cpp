#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
	int sayi[5][3][2];
	for (int i=0;i<5;i++)
	{
    for (int j=0;j<3;j++)
    {
    for (int k=0;k<2;k++)
	{
		cout<<i+1<<" "<<".ogrencinin"<<" "<<j+1<<".dersinin"<<" "<<k+1<<".notu: ";
		cin>>sayi[i][j][k];
	}	
	}
	}
	int i,j,k;
	cout<<i+1<<" "<<".ogrencinin"<<" "<<j+1<<".dersinin"<<k+1<<".notu: "<<sayi[i][j][k];
}