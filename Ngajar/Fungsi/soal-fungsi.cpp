#include <iostream>
using namespace std;

int vol_balok (int p, int l, int t)
{
	return p * l * t;
}

int main()
{
	int pjg, lbr, tng;
	cout << "Masukkan Tinggi	: "; cin >> pjg;
	cout << "Masukkan Lebar	: "; cin >> lbr;
	cout << "Masukkan Panjang: "; cin >> tng;
	cout << "--------------------------------\n";
	cout << "Volume Balok: " << vol_balok(pjg, lbr, tng);
}


