#include<iostream>
using namespace std;
int main()
{
    int bosluk,yildiz,giris;
    cout<<"bir yukseklik degeri giriniz: ";
    cin>>giris;
    yildiz=1;
    bosluk=giris-1;
    for (int i=0;i<giris;i++)
    {
    	for (int j=0;j<bosluk;j++)
    	{
    		cout<<" ";
		}
		for (int j=0;j<yildiz;j++)
		{
			cout<<"*";
		}
		
	    cout<<endl;
	    yildiz+=2;
	    bosluk--;
	}
    
}