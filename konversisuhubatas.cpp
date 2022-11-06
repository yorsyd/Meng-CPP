#include <iostream>
using namespace std;

int main(){
	float bawah,atas,konver;
	char pil,ulang;
	
	while(true){
	cout << "\n----- PILIH KONVERSI -----" << endl;
	cout << "1) C to K" << endl;
	cout << "2) C to F" << endl;
	cout << "3) K to C" << endl;
	cout << "4) K to F" << endl;
	cout << "5) F to C" << endl;
	cout << "6) F to K" << endl;
	cout << "0) EXIT" << endl;
	cout << "1/2/3/4/5/6/0: "; cin >> pil;
	cout << "---------------------------------" << endl;
	
	if (pil == '1'){
		cout << "Batas bawah	: "; cin >> bawah;
		cout << "Batas atas	: "; cin >> atas;
		cout << "\n----- HASIL KONVERSI -----" << endl;
		while(bawah <= atas){
			konver = bawah + 273;
			cout << bawah << " C = " << konver << " K" << endl;
			bawah++;
		}
	} else if (pil == '2'){
		cout << "Batas bawah	: "; cin >> bawah;
		cout << "Batas atas	: "; cin >> atas;
		cout << "\n----- HASIL KONVERSI -----" << endl;
		while(bawah <= atas){
			konver = 1.8 * bawah +32;
			cout << bawah << " C = " << konver << " F" << endl;
			bawah++;
		}
	} else if (pil == '3'){
		cout << "Batas bawah	: "; cin >> bawah;
		cout << "Batas atas	: "; cin >> atas;
		cout << "\n----- HASIL KONVERSI -----" << endl;
		while(bawah <= atas){
			konver = bawah - 273;
			cout << bawah << " K = " << konver << " C" << endl;
			bawah++;
		}
	} else if (pil == '4'){
		cout << "Batas bawah	: "; cin >> bawah;
		cout << "Batas atas	: "; cin >> atas;
		cout << "\n----- HASIL KONVERSI -----" << endl;
		while(bawah <= atas){
			konver = 1.8 * (bawah + 273) + 32;
			cout << bawah << " K = " << konver << " F" << endl;
			bawah++;
			}
	} else if (pil == '5'){
		cout << "Batas bawah	: "; cin >> bawah;
		cout << "Batas atas	: "; cin >> atas;
		cout << "\n----- HASIL KONVERSI -----" << endl;
		while(bawah <= atas){
			konver = (5/9) * (bawah - 32);
			cout << bawah << " F = " << konver << " C" << endl;
			bawah++;
			}
	} else if (pil == '6'){
		cout << "Batas bawah	: "; cin >> bawah;
		cout << "Batas atas	: "; cin >> atas;
		cout << "\n----- HASIL KONVERSI -----" << endl;
		while(bawah <= atas){
			konver = (5/9) * (bawah - 32) +273;
			cout << bawah << " F = " << konver << " K" << endl;
			bawah++;
			}
	} else{
		break;
		return 0;
	}
	
		cout << "Ulang? (y/n): "; cin >> ulang;
	
	if (ulang == 'Y' || ulang == 'y'){
		system("cls");
		continue;
	} else{
		break;
	}
	}	
}

