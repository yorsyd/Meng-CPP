#include <iostream>
using namespace std;

void biodata(string nama, int nim, char kelas = 'D')
{
	cout << "Nama	: " << nama << endl;
	cout << "NIM	: " << nim << endl;
	cout << "Kelas	: " << kelas;
}

int main()
{
	int num = 220001800;
	
	biodata("Human", num);
}


