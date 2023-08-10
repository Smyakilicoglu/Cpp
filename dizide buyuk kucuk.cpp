#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
int main()
{
	int dizi[10],t;
	int en_buyuk,en_kucuk;
	srand(time(0));
	for (int i=0;i<10;i++)
	{
		dizi[i]=rand()%101;
		t+=dizi[i];
		cout<<dizi[i]<<" ";	
    }
    cout<<endl;
    for (int i=0;i<10;i++)
    {
    	en_buyuk=dizi[0];
    	if (en_buyuk<dizi[i])
    	en_buyuk=dizi[i];
	}
		cout<<"rasgele sayilarin en buyugu: "<<en_buyuk<<endl;
	for (int i=0;i<10;i++)
	{
	    en_kucuk=dizi[0];
		if (en_kucuk>dizi[i])
		en_kucuk=dizi[i];
	}
		cout<<"rasgele sayilarin en kucugu: "<<en_kucuk;
}