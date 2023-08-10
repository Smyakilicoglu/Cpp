#include<iostream>
using namespace std;
int fibonacci (int N)
{
	if (N>2 )
	    return N=fibonacci(N-1)+fibonacci(N-2);
	else 
	    return 0;
}
int main()
{
	int N;
	cout<<"bir sira sayisi giriniz: ";
	cin>>N;
	cout<<fibonacci(N);
}