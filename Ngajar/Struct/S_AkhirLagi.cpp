#include <iostream>
using namespace std;

struct nilai{
	int logika, ddp, dsk;
};

struct siswa{
	string nama;
	int noInduk;
	struct nilai nil_mu; //Nested struct
};

int main(){
	siswa siswi[100];
	int n;
	cout << "Banyak Siswa: "; cin >> n;
	
	//Input Value
	cout << "----- Input Data Siswa -----" << endl;
	for (int i=0; i < n; i++){
		cout << "Masukkan Nama\t\t: "; cin >> siswi[i].nama;
		cout << "Masukkan No Induk\t: "; cin >> siswi[i].noInduk;
		cout << "Masukkan Nilai Logika\t: "; cin >> siswi[i].nil_mu.logika;
		cout << "Masukkan Nilai DDP\t: "; cin >> siswi[i].nil_mu.ddp;
		cout << "Masukkan Nilai DSK\t: "; cin >> siswi[i].nil_mu.dsk;
		cout << endl;
	}
	
	system("cls");
	
	//Output Value
	cout << "----- Data Siswa -----" << endl;
	for (int i = 0; i < n; i++){
		cout << "Nama\t\t: " << siswi[i].nama << endl;
		cout << "No Induk\t: " << siswi[i].noInduk << endl;
		cout << "Nilai Logika\t: " << siswi[i].nil_mu.logika << endl;
		cout << "Nilai DDP\t: " << siswi[i].nil_mu.ddp << endl;
		cout << "Nilai DSK\t: " << siswi[i].nil_mu.dsk << endl;
		cout << "Nilai Akhir\t: " << (siswi[i].nil_mu.dsk + siswi[i].nil_mu.ddp + siswi[i].nil_mu.logika) / 3 << endl << endl;
	}
}
