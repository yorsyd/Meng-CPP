#include <iostream>
using namespace std;

//Fungsi yang pemanggilannya memakai argument
//Dan memiliki dua parameter atau lebih
void namamu (string nama, int usia)
{
	cout << "Uchiha " << nama << " Berusia " << usia << endl;
}

int main()
{
	namamu("Radeon", 24);
	namamu("Ryzen", 17);
}

