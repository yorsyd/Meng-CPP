#include <iostream>
using namespace std;

struct barang
{
	string nama, kode;
	int harga;
}; 

int main(){
	int banyak;
	cout << "Banyak Data: "; cin >> banyak;
	barang mkn[banyak]; //deklarasi dengan objek diluar struct
	
	//Input Data
	cout << "\n----- Input Data Makanan -----" << endl;
	for (int i = 0; i < banyak; i++){
		cout << "Input Nama Makanan " << i+1 << "\t: "; cin >> mkn[i].nama;
		cout << "Input Harga Makanan " << i+1 << "\t: "; cin >> mkn[i].harga;
		cout << "Input Kode Makanan " << i+1 << "\t: "; cin >> mkn[i].kode;
		cout << endl;
	}
	
	//Output Data
	cout << "---- Daftar Data Makanan ----" << endl;
	for (int i = 0; i < banyak; i++){
		cout << "Nama Makanan " << i+1 << "\t: " << mkn[i].nama << endl;
		cout << "Harga Makanan " << i+1 << "\t: " << mkn[i].harga << endl;
		cout << "Kode Makanan " << i+1 << "\t: " << mkn[i].kode << endl << endl;
	}
}
