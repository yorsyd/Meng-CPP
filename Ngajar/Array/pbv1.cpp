#include <iostream>
using namespace std;

/*Fungsi yang pemanggilannya bisa dengan
parameter yang mempunyai nilai bawaan*/
void asalmu (string negara = "Indonesia")
{
	cout << "Asalku dari " << negara << endl;
}

int main()
{
	asalmu("Argentina");
	asalmu();
	asalmu("Jepang");
}

