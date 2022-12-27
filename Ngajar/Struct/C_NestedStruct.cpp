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
	siswi.nama = "Djojo";
	siswi.noInduk = 007;
	siswi.nil_mu.ddp = 89;
	siswi.nil_mu.logika = 78;
	siswi.nil_mu.dsk = 90;
	
	//Output Value
	cout << "----- Data Siswa -----" << endl;
	cout << "Nama\t\t: " << siswi.nama << endl;
	cout << "No Induk\t: " << siswi.noInduk << endl;
	cout << "Nilai Logika\t: " << siswi.nil_mu.logika << endl;
	cout << "Nilai DDP\t: " << siswi.nil_mu.ddp << endl;
	cout << "Nilai DSK\t: " << siswi.nil_mu.dsk << endl;
}
