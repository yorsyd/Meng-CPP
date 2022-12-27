#include <iostream>
using namespace std;

struct barang
{
	string nama;
	int harga;
	char kode[10];
} mkn; //deklarasi dengan objek didalam struct


int main(){
	cout << "Nama Makanan: "; cin >> mkn.nama;
	cout << "Harga Makanan: "; cin >> mkn.harga;
	cout << "Masukkan Kode Makanan: "; cin >> mkn.kode;
	
	cout << "\n\t--- Data Makanan ---\n";
	cout << "Nama Makanan: " << mkn.nama << endl;
	cout << "Harga Makanan: " << mkn.harga << endl;
	cout << "Kode Makanan: " << mkn.kode << endl;
	
}

