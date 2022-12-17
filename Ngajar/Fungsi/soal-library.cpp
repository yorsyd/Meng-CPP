#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int nilai, nilai1,nilai2=3;
	
	cout << "Masukkan nilai pertama	: "; cin >> nilai;
	cout << "Masukkan nilai kedua	: "; cin >> nilai1;
	cout << "-------------------------\n";
	//fmod: fungsi dari math.h untuk menghitung sisa bagi
	cout << "Nilai sisa bagi	: " << fmod(nilai,nilai1) << endl;
	cout << "-------------------------\n";
	//fdim: fungsi dari math.h untuk menghitung selisih
	cout << "Nilai selisih	: " << fdim(nilai,nilai1) << endl;
	cout << "-------------------------\n";
	//fdim: fungsi dari math.h untuk mencari nilai maksimum
	cout << "Nilai maksimum	: " << fmax(nilai,nilai1) << endl;
	cout << "-------------------------\n";
	//fdim: fungsi dari math.h untuk mencari nilai minimum
	cout << "Nilai minimum	: " << fmin(nilai,nilai1);
}


