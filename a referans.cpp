#include<iostream>
using namespace std;
int main()
{
    int a=10;
    int &ref=a;
    cout<<"a'nin degeri: "<<a<<endl;
    cout<<"a'nin bellekteki adresi: "<<&ref<<endl;
    ref++;
    cout<<"a'nin yeni degeri: "<<a<<endl;
    cout<<"a'nin yeni degerinin bellekteki adresi: "<<&ref;
}