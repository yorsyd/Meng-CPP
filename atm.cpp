#include <iostream>
using namespace std;

int main(){
	int saldo,kurang;
	char pilih,lnjt;
	cout << "Berapa saldo anda? "; cin >> saldo;
	
	while(true){
		cout << endl << "PILIHAN MENU" << endl;
		cout << "1. Transfer" << endl;
		cout << "2. Tarik uang" << endl;
		cout << "3. Periksa Saldo" << endl;
		cout << "Pilih 1/2/3: "; cin >> pilih;
		
		switch(pilih){
			case '1':
				cout << "\nNominal transfer: "; cin >> kurang;
				if (saldo < kurang){
					cout << "Saldo tidak mencukupi!";
					break;
				}
				saldo -= kurang;
				break;
			case '2':
				cout << "\nNominal Penarikan: "; cin >> kurang;
				if (saldo < kurang){
					cout << "Saldo tidak mencukupi!" << endl;
					break;
				}
				saldo -= kurang;
				break;
			case '3':
				cout << "\nSaldo: " << saldo << endl;
				break;
			default:
				cout << "\nPilih yang benar" << endl;
		}
				
		for (int i=1; i <=20; i++){
			cout << "-";
		}
		
		cout << "\nLanjut Transaksi? (y/n): "; cin >> lnjt;
		
		if (lnjt == 'n' || lnjt == 'N'){
			break;
		} else{
			system("cls");
			continue;
		}
	}
}

