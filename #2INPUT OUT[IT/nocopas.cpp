#include<iostream>

 using namespace std;
 int main()
 {
 	string listmenu [5]={"hallo","apa","kabar","saya","wardana"};
 	string menuitem [2]={"indonesia comic"};
 	 menuitem [0]={"apa","apa"};
 	 menuitem [2]={""};
 	//string menuitem [2]={""};
 	
 	
 	int selectMenu;
	 for(int i= 0;i<5;i++)
	 {
	 	cout<<"please select menu item"<<endl;
	 	cin>>selectMenu;
	 	cout<<listmenu[selectMenu-1];
	
	 	
	 }
 }
