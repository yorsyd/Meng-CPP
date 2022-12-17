#include <iostream>
using namespace std;

//Prosedur dengan nama l_segitiga
void l_segitiga()
{
	int tinggi, lebar;
	
	cout << "Masukkan Tinggi: "; cin >> tinggi;
	cout << "Masukkan lebar : "; cin >> lebar;
	cout << "Luas Segitiga = " << 0.5 * tinggi * lebar;
}

int main()
{
	l_segitiga(); //pendeklarasian prosedur l_segitiga
}

