#include <iostream>
using namespace std;

int main(){
	while(true){
		int nil_1,nil_2;
		float hasil = 1;
		char pilih,lanjut;
		
		cout << "===== Kalkulator Sederhana =====" << endl;
		cout << "1) Jumlah" << endl;
		cout << "2) Kurang" << endl;
		cout << "3) Kali" << endl;
		cout << "4) Bagi" << endl;
		cout << "5) Modulus" << endl;
		cout << "6) Pangkat" << endl;
		cout << "0) Exit" << endl;
		
		cout << "1/2/3/4/5/6/0: "; cin >> pilih;
		
		if (pilih == '1'){
			cout << "\nNilai-1: "; cin >> nil_1;
			cout << "Nilai-2: "; cin >> nil_2;
			
			hasil = nil_1 + nil_2;
			cout << "\nHasil: " << hasil << endl;
			
		} else if (pilih == '2'){
			cout << "\nNilai-1: "; cin >> nil_1;
			cout << "Nilai-2: "; cin >> nil_2;
			
			hasil = nil_1 - nil_2;
			cout << "\nHasil: " << hasil << endl;
			
		} else if (pilih == '3'){
			cout << "\nNilai-1: "; cin >> nil_1;
			cout << "Nilai-2: "; cin >> nil_2;
			
			hasil = nil_1 * nil_2;
			cout << "\nHasil: " << hasil << endl;
			
		} else if (pilih == '4'){
			cout << "Nilai-1: "; cin >> nil_1;
			cout << "Nilai-2: "; cin >> nil_2;
			
			hasil = (float)nil_1 / nil_2;
			cout << "\nHasil: " << hasil << endl;
			
		} else if (pilih == '5'){
			cout << "\nNilai-1: "; cin >> nil_1;
			cout << "Nilai-2: "; cin >> nil_2;
			
			hasil = nil_1 % nil_2;
			cout << "\nHasil: " << hasil << endl;
			
		} else if (pilih == '6'){
			cout << "\nNilai: "; cin >> nil_1;
			cout << "Pangkat: "; cin >> nil_2;
			
			for(int i = 0; i < nil_2; i++){
				hasil *= nil_1;
			}
			cout << "\nHasil: " << hasil << endl;
			
		}  else if (pilih == '0'){
			cout << "\nProgram selesai!";
			break;
					
		} else{
			cout << "Pilih 0-6 saja!!!";
			continue;
		}
		
		cout << "\nLanjut? Y/N : "; cin >> lanjut;
		if (lanjut == 'Y' || lanjut == 'y'){
			system("cls");
			continue;
		} else{
			cout << "\nProgram selesai!";
			break;
		}
	}
}
