#include <iostream>
using namespace std;

void operasi (int &a, int &b)
{
	int c = a;
	a *= b;
	b /= c;
}

int main()
{
	int x = 2, y = 4; //Deklarasi variabel sebagai argumen parameter
	
	cout << "Nilai x awal: " << x << endl;
	cout << "Nilai y awal: " << y << endl;
	
	operasi(x,y); 
	
	cout << "------------------\n";
	cout << "Nilai x akhir: " << x << endl;
	cout << "Nilai y akhir: " << y << endl;
}


