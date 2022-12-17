#include <iostream>
using namespace std;

//Fungsi dengan pemanggilan memakai argument
void namamu (string nama)
{
	cout << "Uchiha " << nama << endl;
}

int main()
{
	string a = "Matane";
	
	namamu("Udin");
	namamu("Ryzen");
	namamu(a);
}

