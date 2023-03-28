#include<iostream>
using namespace std;
int main (){
//	switch case
	
	int pil;
	string jkl;
	
	cout<<"pilih salah satu"<<endl;
	cout<<"1.laki laki / 2.perempuan"<<endl;
	cout<<"pilihan : ";
	cin>>pil;
	
	switch(pil){
		case 1 :
			jkl = " laki laki";
			break; //break berfungsi untuk menghentikan run , karena switch akan run semua case tanpa break
		case 2 :
			jkl = " perempuan";
			break;
		default :
			jkl = " anda menginput nomor yang salah";
			break; //break berfungsi seperti case yang akan di running ketika case yang di input user tidak ada dalam case switch
	}
	
	cout<<" jenis kelamin saya adalah "<<jkl<<endl;
	
	
	return 0;
}
