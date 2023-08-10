#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
	srand (time(0));
	int dizi[10];
	for (int i=0;i<10;i++)
	{
		dizi[i]=rand()%101;
		cout<<dizi[i]<<" ";
	}
	cout<<'\n';
}