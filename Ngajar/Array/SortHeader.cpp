#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	//Jika tidak tau akan berapa banyak elemen pada array
	int a[] = {3,2,6,8,4,5};
	
	cout << sizeof(a) << " " << sizeof(a[0]) << endl; //kalo penasaran apa itu sizeof()
	int n = sizeof(a) / sizeof(a[0]);
	//Sebelum
	for (int i = 0; i < n; ++i){
        cout << a[i] << " ";
	} cout << endl;
	
	cout << "--------------------\n";
	
	//Proses urut dan sesudah
	sort(a, a+n);
	for (int i = 0; i < n; ++i){
        cout << a[i] << " ";
	} cout << endl;
	
	
//    //Jika tau berapa banyak elemen pada array
//    int b[6] = {3,2,6,8,4,9};
//	sort(b, b+6);
//	for (int i = 0; i < n; ++i){
//	        cout << a[i] << " ";
//	}
}
