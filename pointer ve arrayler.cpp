#include<iostream>
using namespace std;
int main()
{
	int array[]={1,2,3,4};
	int *ptr=array;
    int	a;
	for(int a=0;a<4;a++)
	{
	cout<<a+1<<".indexin degeri: "<<ptr[a]<<endl;
	cout<<a+1<<".indexin bellekteki adresi: "<< &ptr[a]<<endl;
	}	
}