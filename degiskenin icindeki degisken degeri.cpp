#include <iostream>
using namespace std;
int main ()
{
	int x=5,*p1,**p2;
	p1=&x;
	p2=&p1;
	cout<<"x degiskeni: "<<x<<endl;
	cout<<"x degiskeninin bellekteki degeri: "<<p1<<endl;
	cout<<"x degiskeninin belleginin belleginin degeri: "<<p2<<endl;
	cout<<"x degiskeninin degeri: "<<*p1<<endl;
	cout<<"x degiskeninin bellekteki degeri: "<<*p2<<endl;
	cout<<"x degiskeninin degeri: "<<**p2<<endl;   //p2'nin içindekinin içindeki. Yani 5...
}