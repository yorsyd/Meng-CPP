#include <iostream>
using namespace std;

//Membuat fungsi l_segitiga dengan pengembalian nilai
float l_segitiga (int t, int l)
{
	float luas;
	luas = 0.5*t*l;
	return luas;
}

int main()
{
	int a, b; //delekrasi variabel untuk digunakan parameter fungsi
	
	cout << "Input Tinggi: "; cin >> a; //input nilai var a untuk mengisi parameter t
	cout << "Input Lebar: "; cin >> b; //input nilai var b untuk mengisi parameter l
	cout << "--------------------------------" << endl;
	cout << "Luas Segitiga: " << l_segitiga(a,b); //memanggil fungsi l_segitiga dengan nilai a dan b sebagai pengisi parameter
}

