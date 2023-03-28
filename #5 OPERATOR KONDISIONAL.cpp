#include<iostream>
using namespace std;
int main()
{
	//OPERATOR KONDISIONAL
	
	bool hasil;
	int a=5;
	const int b=2.25;
	cout<<"masukan ip\t:";
	cin>>a;
	
	hasil = a>b;
	string output = hasil ==1 ?"KAMU LULUS":"KAMU TIDAK LULUS";
	cout<<output;
	
	return 0;
}
