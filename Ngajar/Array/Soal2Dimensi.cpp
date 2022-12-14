#include<iostream>
using namespace std;
int main(){
	string mahasiswa[100][100];
	int batas,j;
	string korban;
	
	cout<<"Maximal 100 siswa\n";
	cout<<"Masukan Jumlah Mahasiswa : ";cin>>batas;
	cout<<endl;
	
	//Proses Penginputan Array
	for(int i=0;i<batas;i++){
		j=0;
		getline(cin, korban);
		cout<<"NIM : "; getline(cin,mahasiswa[i][j]);
		j++;
		cout<<"Nama : ";getline(cin,mahasiswa[i][j]);
		}
	system("cls");
	
	//Pemanggilan Array
	cout<<"------- Daftar Mahasiswa -------"<<endl;
	for(int i=0;i<batas;i++){
		j=0;
		cout<<mahasiswa[i][j]<<"\t";
		j++;
		cout<<mahasiswa[i][j]<<endl;
	}
}
