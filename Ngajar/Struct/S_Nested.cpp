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
	siswa siswi;
	
	//Input Value
	cout << "----- Input Data Siswa -----" << endl;
	cout << "Masukkan Nama\t\t: "; cin >> siswi.nama;
	cout << "Masukkan No Induk\t: "; cin >> siswi.noInduk;
	cout << "Masukkan Nilai Logika\t: "; cin >> siswi.nil_mu.logika;
	cout << "Masukkan Nilai DDP\t: "; cin >> siswi.nil_mu.ddp;
	cout << "Masukkan Nilai DSK\t: "; cin >> siswi.nil_mu.dsk;
	
	//Output Value
	cout << "\n----- Data Siswa -----" << endl;
	cout << "Nama\t\t: " << siswi.nama << endl;
	cout << "No Induk\t: " << siswi.noInduk << endl;
	cout << "Nilai Logika\t: " << siswi.nil_mu.logika << endl;
	cout << "Nilai DDP\t: " << siswi.nil_mu.ddp << endl;
	cout << "Nilai DSK\t: " << siswi.nil_mu.dsk << endl;
}
