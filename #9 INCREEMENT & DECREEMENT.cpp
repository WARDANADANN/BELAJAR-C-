#include<iostream>
using namespace std;
int main(){
	
	int x, y ;
	
//	increment
//	post increment
	x=1;
	y=1;
	
	
//	cara yang sama untuk menambahkan variabel
//	x = x + 1; 
//	x + = 1;
	x++;
	cout<<"x = "<<x<<endl;


//	pre increment
//	y = y + 1;
//	y+ = 1;
	++ y;
	cout<<"y = "<< y << endl;	
cout<<"\t PERBEDAAN POST DAN PRE"<<endl;
	// PERBEDAAN POST DAN PRE
	//POST akan menampilakan x terlebih dahulu kemudian dijumlahkan.
	x = 1;
	cout<<"x = "<<x++<<endl;
	cout<<"x = "<<x++<<endl;


	// PRE akan menjumlahkan y terlebih dahulu kemudian dijumlahkan.
	y = 1;
	cout<<"y = "<<++y<< endl;
	cout<<"y = "<<++y<< endl;
	
return 0;	
}
