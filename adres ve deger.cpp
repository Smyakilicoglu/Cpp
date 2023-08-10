#include<iostream>
using namespace std;
int main()
{
		int x,s1,s2,*p1,*p2,*t;
	t=&x;
	p1=&s1;
	p2=&s2;
	*p1=5;
	*p2=10;
	*t=*p1+*p2;
	
	
		cout<<"------------------------------------------------"<<endl;

	cout<<*t<<endl;   // t'nin içindeki x'in değeri.
	cout<<t<<endl;    // x'in adresi.
	cout<<"------------------------------------------------"<<endl;
	cout<<x<<endl;    //x'in değeri.
	cout<<&x<<endl;   //x'in adresi.
		cout<<"------------------------------------------------"<<endl;

	cout<<s1<<endl;   //s1'in değeri.
	cout<<s2<<endl;   //s2'nin değeri.
		cout<<"------------------------------------------------"<<endl;

	cout<<&s1<<endl;  //s1'in adresi.
	cout<<&s2<<endl;  //s2'nin adresi.
		cout<<"------------------------------------------------"<<endl;
}