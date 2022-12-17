#include <iostream>
using namespace std;

int main(){
	int arr[5] = {11,3,6,40,21};
	
	//Tampilin data sebelum urut
	cout << "Sebelum: ";
	for (int i=0; i<5; i++){
		cout << arr[i] <<"\t";
	}
	cout << endl;
	
	//Proses Selection Sort
	for (int i=0; i<5; i++){
		for(int j=i+1; j<5; j++){
			if (arr[ i ] > arr[j]){
				int tampung = arr[i];
				arr[i] = arr[j];
				arr[j] = tampung;
			}
		}
	}
	
	//Tampilin data sesudah urut
	cout << "Sesudah: ";
	for (int i=0; i<5; i++){
		cout << arr[i] <<"\t";
	}
}
