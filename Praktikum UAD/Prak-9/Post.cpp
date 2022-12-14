#include <iostream>
using namespace std;

int main(){
	int baris, kolom, pil;
	cout << "Masukkan Baris: "; cin >> baris;
	cout << "Masukkan Kolom: "; cin >> kolom;
	
	int ar1[baris][kolom];
	int ar2[baris][kolom];
	
	cout << "\nMasukkan Matriks-1 " << baris << "x" << kolom << endl;
	for (int i=0; i<baris; i++){
		for (int j=0; j<kolom; j++){
			cout << "Nilai Array [" << i << "][" << j << "] = "; cin >> ar1[i][j];
		}
	}
	
	cout << "\nMasukkan Matriks-2 " << baris << "x" << kolom << endl;
	for (int i=0; i<baris; i++){
		for (int j=0; j<kolom; j++){
			cout << "Nilai Array [" << i << "][" << j << "] = "; cin >> ar2[i][j];
		}
	}
	
	system("cls");
	
	cout << "Menu: " << endl;
	cout << "1. Penjumlahan" << endl;
	cout << "2. Pengurangan" << endl;
	cout << "3. Exit" << endl;
	cout << "Pilih: "; cin >> pil;
	
	cout << "\nMatriks-1 " << baris << "x" << kolom << endl;
	for (int i=0; i<baris; i++){
		for (int j=0; j<kolom; j++){
			cout << ar1[i][j] << " ";
		}
		cout << endl;
	}
	
	cout << "\nMatriks-2 " << baris << "x" << kolom << endl;
	for (int i=0; i<baris; i++){
		for (int j=0; j<kolom; j++){
			cout << ar2[i][j] << " ";
		}
		cout << endl;
	}
	
	if(pil == 1){
		cout << "\nPenjumlahan" << endl;
			for (int i=0; i<baris; i++){
				for (int j=0; j<kolom; j++){
					cout << ar1[i][j] + ar2[i][j] << " ";
			}
			cout << endl;
		}
	} else if(pil == 2){
		cout << "\nPengurangan" << endl;
			for (int i=0; i<baris; i++){
				for (int j=0; j<kolom; j++){
					cout << ar1[i][j] - ar2[i][j] << " ";
			}
			cout << endl;
		}
	} else {
		cout << "Pilih yang benar!!!";
	}
}
