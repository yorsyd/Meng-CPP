#include <iostream>
using namespace std;

int jumlah (int a, int b)
{
	return a+b;
}

double jumlah (double a, double b)
{
	return a+b;
}

int main()
{
	int hasil = jumlah(4, 3);
	double result = jumlah(2.3, 7.58);
	
	cout << "int	: " << hasil << endl;
	cout << "double	: " << result;
}

