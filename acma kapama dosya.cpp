//dosya acıp kapatma
#include<fstream>
#include<iostream>
using namespace std;
int main()
{
	fstream file;
	file.open("dosya.txt");
	file.close();
	return 0;
}