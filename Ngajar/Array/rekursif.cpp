#include <iostream>
using namespace std;

//Fungsi rekrusif untuk menghitung jumlah dari suatu nilai sampai 1
int deret(int a)
{
	if (a==0){
		return a;
	} else{
		return a + deret (a-1);
	}
}

int main(){
	int nilai;
	
	cout << "Masukkan Nilai: "; cin >> nilai;
	cout << "Jumlah Nilai samapi 1: " << deret(nilai);
}


