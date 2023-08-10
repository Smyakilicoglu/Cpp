#include<fstream>
#include<iostream>
#include<string>
using namespace std;
int main()
{
	fstream dosya("adres.txt"); //dosya nesne tipi
	string s;
	dosya<<s;
	while (!dosya.eof())  //dosyanın sonu
	{
		cout<<s<<endl;
		dosya>>s;
	}
	dosya.close();
}