#include <iostream>
using namespace std;

struct data{
	string nama, no_plat, tipe;
	int waktu, harga;
};

int main(){
	data sewa[100];
	int n=0;
	int pilih;
	
	while(true){
		cout << "Menu Sewa Sepeda Motor: " << endl;
		cout << "1. Input Sewa" << endl;
		cout << "2. Daftar Sewa" << endl;
		cout << "3. Exit" << endl;
		cout << "Pilih (1/2/3) : "; cin >> pilih;
	
	if (pilih == 1){
		cin.ignore();
		cout << "\n=== Input Sewa ===" << endl;
		cout << "Nama\t\t: "; getline(cin,sewa[n].nama);
		cout << "No Plat\t\t: "; getline(cin,sewa[n].no_plat);
		cout << "Tipe\t\t: "; getline(cin,sewa[n].tipe);
		cout << "Waktu (jam)\t: "; cin >> sewa[n].waktu;
		cout << "Harga (per jam)\t: "; cin >> sewa[n].harga;
		n++;
		
	} else if (pilih == 2){
		if (n == 0){
			cout << "\nBelum ada sewa!";
		} else {
			for (int i=0; i < n; i++){
				cout << "\nSepeda Motor ke-" << i+1 << endl;
				cout << "Nama\t: " << sewa[i].nama << endl;
				cout << "No Plat\t: " << sewa[i].no_plat << endl;
				cout << "Tipe\t: " << sewa[i].tipe << endl;		
				cout << "Waktu\t: " << sewa[i].waktu << " Jam" << endl;
				cout << "Harga\t: " << "Rp " << sewa[i].harga * sewa[i].waktu<< endl;
			}
		}
		
	} else if (pilih == 3){
		break;
	} else if (pilih >= 3 || pilih <= 0){
		cout << "Pilihan Salah!"; 
	}
	
	cout << "\n\n\n" << endl;
	system("pause");
	system("cls");	
	}
}
