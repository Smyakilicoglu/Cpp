#include<iostream>
using namespace std;
void printarray(const int *ptr1,const int *ptr2)
{
	for(;ptr1 !=ptr2;ptr1++)
	{
		cout<<"eleman: "<<*ptr1<<endl;
	}
}
int main()
{
	int array[]={10,20,30,40,50};
	printarray(array,array+5);
}