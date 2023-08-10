#include<iostream>
using namespace std;
int main()
{
	int age,dogsAge,bosluk;
	cout<<"age degeri giriniz: ";
	cin>>age;
	cout<<"dogsage degeri giriniz: ";
	cin>>dogsAge;
	
    cout << "Integer age = " << age << endl;
    cout << "Integer dogsAge = " << dogsAge << endl;

    int* pointsToInt = &age;
    pointsToInt = &dogsAge;

    bosluk=age;
    age=dogsAge;
    dogsAge=bosluk;
    
    cout << "Integer age = " << age << endl;
    cout << "Integer dogsAge = " << dogsAge << endl;






}