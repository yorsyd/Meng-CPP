#include <iostream>
using namespace std;

//Fungsi untuk menukar nilai parameter a dan b
//Dengan cara passing by reference
void tukar (int &a, int &b)
{
	int c = a;
	a = b;
	b = c;
}

int main()
{
	int x = 3, y = 8; //Deklarasi variabel sebagai argumen parameter
	
	cout << "Nilai x awal: " << x << endl;
	cout << "Nilai y awal: " << y << endl;
	
	tukar(x,y); 
	
	cout << "------------------\n";
	cout << "Nilai x akhir: " << x << endl;
	cout << "Nilai y akhir: " << y << endl;
}

