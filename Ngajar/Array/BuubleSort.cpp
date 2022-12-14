#include <iostream>
using namespace std;

int main(){ 
 	int tampung;
	int a[5] ={12, 4, 7, 9, 15};
	
	//Menampilkan nilai array sebelum diurutkan
	cout << "Sebelum diurutkan: ";
	for (int i=0; i<5 ; i++){
		cout << a[ i ] <<"\t";
	}
	cout << endl;
	
	//Proses Bubble Sort
	for (int i=0; i < 5-1; i++){
		for (int j=0; j < 5-i-1; j++){
			if (a[ j ] > a[ j+1 ] ){ 
				tampung = a[ j ];
				a[ j ] = a[ j+1 ];
				a[ j+1 ] = tampung;
			}
		}
	}

	//Menampilkan nilai array sesudah diurutkan	
	cout <<"Setelah diurutkan: ";
	for (int i=0; i<5; i++){
		cout << a[ i ] <<"\t";
	}
}
