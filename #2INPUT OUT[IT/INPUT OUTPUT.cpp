#include<iostream>
using namespace std;
int main()
{
	string aktivitas;
	string dimana; 
	
	//(|t)menandakan tab
	
	/*cout<<"saya sedang apa? \t:"<<endl;
	cin>>aktivitas;
	cout<<"dimana saya "<<aktivitas<<" \t: "<<endl;
	cin>>dimana;
	cout<<"saya sedang "<<aktivitas<<" di "<<dimana<<endl;*/
	
	// MASALAH KALAU INPUTNYA ADALAH DUA KATA!!!
	
	//SOLUSI NYA PAKAI SYNTAX getline(cin,aktivitas) pengganti (cin>>aktivitas)
	cout<<"saya sedang apa? \t:";
	getline(cin,aktivitas);
	
	cout<<"dimana saya "<<aktivitas<<" \t: ";
	getline(cin,dimana);
	
	cout<<"saya sedang "<<aktivitas<<" di "<<dimana<<endl;	
	
	
	return 0;
}
