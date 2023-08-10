#include<iostream>
using namespace std;
int main()
{
	string isim="sumeyra_kilicoglu";
	string parola="123456";
	string a;
	string b;

	do
	{	
	cout<<"Ismi giriniz: ";
	cin>>a;
	cout<<"Parolayi giriniz: ";
	cin>>b;
		if (isim!=a && parola==b)
		{
			cout<<"Isminizi yanlis girdiniz.";
		}
		else if (isim==a && parola!=b)
		{
			cout<<"Parolayi yanlis girdiniz.";
		}
		else
		{
			cout<<"ISLEM HATALI";
		}
	} while (isim==a && parola==b);
	cout<<"Hosgeldiniz.";
}