#include <iostream>
using namespace std;

void vol_balok ()
{
	int p, l, t;
	
	cout << "Masukkan Tinggi	: "; cin >> p;
	cout << "Masukkan Lebar	: "; cin >> l;
	cout << "Masukkan Panjang: "; cin >> t;
	cout << "--------------------------------\n";
	cout << "Volume Balok: " << p*l*t;
}

int main()
{
	vol_balok();
}


