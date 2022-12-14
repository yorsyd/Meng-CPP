#include <iostream>
using namespace std;

int main(){
	int x[5] = {11,3,6,21,12};
	cout << "Sebelum: ";
	
	//Tampilin data sebelum urut
	for (int i = 0; i<5; i++){
		cout << x[i] << "\t";
	}
	cout << endl;
	
	//Proses Insertion Sort
	for (int i=1; i<5; i++){
		int acuan = x[i];
		int j=i-1;
		
		while(acuan < x [ j ] && j >= 0 ){
			x [ j+1 ] = x [ j ];
			j--;
		}
		
		x [ j+1 ] = acuan;
	}
	
	//Tampilin data sesudah urut
	cout << "Sesudah: ";
	for (int i = 0; i<5; i++){
		cout << x[i] << "\t";
	}
}
