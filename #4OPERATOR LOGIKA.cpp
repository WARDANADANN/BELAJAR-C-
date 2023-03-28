#include<iostream>
using namespace std;
int main()
{
	bool output;
	//opertor logika
	// not = not atau !
	output= 1==2;
	output= !(1==2);\
	
	//and = and
	output= (1>2) and (3<2);
	output= (2>1) and (3>2);
	//or = or
	output= (2==1) or (2>1);
	output = (10==1) or (10<1);
	
	
	//hasil
	cout<<output;
	return 0;
}
