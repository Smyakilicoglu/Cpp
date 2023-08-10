#include<iostream>
using namespace std;
int main()
{
	int array[]={21,34,62};
	int a;
	int &ref=array[a];

	for (int a=0;a<3;a++)
	{
		cout<<a+1<<".arrayin degeri: "<<array[a]<<endl;
		cout<<a+1<<".arrayin bellekteki adresi: "<<&ref+a<<endl;
	}
}