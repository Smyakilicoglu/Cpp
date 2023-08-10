#include <iostream>
#include <string>
using namespace std;
int main() {
string line;
cout << "Lutfen bir metin giriniz: ";
getline(cin,line); //cunmlenin butun kelimelerini yazdırır
cout << "girilen metin: \"" << line << "\"" << '\n';
}