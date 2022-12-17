#include <iostream> //File header/library iostream
#include <math.h> //File header/library math.h
using namespace std;

int main()
{	
	float a=2, b=7, c=4.8, d=64;
	int hasil;
	
	//Beberapa fungsi yang ada di file header/library math.h
	hasil = sqrt(d); //Fungsi untuk menghitung akar kuadrat
	cout << "Hasil fungsi sqrt(d)	: " << hasil << endl;
	
	hasil = pow(b,a); //Fungsi untuk menghitung perpangkatan
	cout << "Hasil fungsi pow(b,a)	: " << hasil << endl;
	
	hasil = floor(c); //Fungsi untuk menghitung pembulatan ke bawah
	cout << "Hasil fungsi floor(c)	: " << hasil << endl;
	
	hasil = ceil(c); //Fungsi untuk menghitung pembulatan ke atas
	cout << "Hasil fungsi ceil(c)	: " << hasil << endl;
}

