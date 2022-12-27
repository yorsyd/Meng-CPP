#include <iostream>
using namespace std;

struct barang
{
	string nama, kode;
	int harga;
} mkn; //deklarasi dengan objek didalam struct


int main(){
	mkn.nama = "Roti";
	mkn.harga = 5000;
	mkn.kode = "w1b0";
	
	cout << "\t--- Data Makanan ---\n";
	cout << "Nama Makanan: " << mkn.nama << endl;
	cout << "Harga Makanan: " << mkn.harga << endl;
	cout << "Kode Makanan: " << mkn.kode << endl;
	
}

