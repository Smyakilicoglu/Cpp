#include<iostream>
using namespace std;
void DegerDegistir (int &ref)
{
	int a=20;
	cout<<"a'nin yeni degeri: "<<a;
}
int main()
{
	int a=10;
	int &ref=a;
	cout<<"a'nin degeri: "<<a<<endl;
	DegerDegistir(a);
}