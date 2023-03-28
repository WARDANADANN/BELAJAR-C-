#include<iostream>
#include<cstdlib>
#include<time.h>
using namespace std;
int main (){
//	rand() % batas
	int kodePesan[6];
	

	srand(time(0));
	for(int i = 0; i<= 5 ;i++){
		kodePesan[i]=rand()%9;
	}
	for(int i=0 ; i<=5 ; i++){
		cout<<kodePesan[i];
	}
	
	cout<<"kode pemesanan kamu adalah "<<;
	return 0;
}
