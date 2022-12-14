#include <iostream>
using namespace std;

int main(){
	int angka[2][1][3];	//Deklarasi array 3 dimensi
	
	//Contoh pengisian array 3D
	char huruf [2][3][4] = {
	{
		{'A','B','C','D'},
		{'E','F','G','H'},
		{'I','J','K','L'}
	},
	{
		{'M','N','O','P'},
		{'P','Q','R','S'},
		{'T','U','V','W'}
	}
	};
	
	//Pemanggilan Array 3D
	cout << "Nilai huruf [0][1][0]: " << huruf [0][1][0] << endl; 
	cout << "Nilai huruf [1][0][3]: " << huruf [1][0][3] << endl; 
	cout << "Nilai huruf [1][2][2]: " << huruf [1][2][2] << endl << endl; 
	
	//Pengisian array angka secara loop
	for (int i = 0; i<2; i++){
		for (int j = 0; j<1; j++){
			for (int k = 0; k<3; k++){
				cout << "Input angka[" << i << "][" << j << "][" << k << "] : ";
				cin >> angka[i][j][k];
			}
		}
	}
	
	cout << endl;
	
	//Pemanggilan array angka secara loop
	for (int i = 0; i<2; i++){
		for (int j = 0; j<1; j++){
			for (int k = 0; k<3; k++){
				cout << "Output angka[" << i << "][" << j << "][" << k << "] : " << angka[i][j][k] << endl;
			}
		}
	}
}
