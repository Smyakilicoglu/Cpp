#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main ()
{
	string veri;
	fstream file;
	int i=0;
	file.open("dosya.txt",ios::out|ios::app);
	if(file.is_open())
	{
		while (i<5)
		{
			file<<"super";
			i++;
		
		}
	}
	file.close();
}
file.open("dosya.txt",ios::in);
    if(file.is_open())
    {
    	while(!file.eof())
    	{
    		file>>veri;
    		cout<<veri;
		}
	}
	file.close();
}