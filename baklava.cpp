#include<iostream>
using namespace std;
int main()
{
	int giris,bosluk,yildiz;
	cout<<"bir yukseklik degeri giriniz: ";
	cin>>giris;
	yildiz=1;
	bosluk=giris-1;
	for (int i=0;i<giris;i++)
	{
		for (int i=0;i<bosluk;i++) cout<<" ";
		for (int i=0;i<yildiz;i++) cout<<"*";
				
			cout<<endl;
			yildiz+=2;
			bosluk--;
	}
		yildiz-=4;
		bosluk=1;
		for (int i=0;i<giris;i++)
			{
				for (int i=0;i<bosluk;i++) cout<<" ";
				for (int i=0;i<yildiz;i++) cout<<"*";
				
				cout<<endl;
				yildiz-=2;
				bosluk++;
			}
}