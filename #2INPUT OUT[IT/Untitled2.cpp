#include <iostream>

using namespace std;
int main()
{
	
	string listMenu [] = {"Overview","Guest Star", "Brands", "Ticket", "Note"};
	string menuItem [0] = "Indonesia Comic Con is a platform to celebrate your love for comics & pop culture art forms by creating experiences that are original, exciting, and memorable, to #UnleashTheTrueYou.";
	 menuItem [1] = {"1. Moona Hoshinova \n 2. Kobo Kanaeru \n 3. Mythia Batford "};
	 menuItem [2] = {"1. Soumeki \n 2. Oramon.id 3. MICE","hall"};
	 menuItem [3] = {,"Regular = 125.000 \n Cosplayer Ticket = 100.000 \n VIP Cosplayer Ticket = 300.000 \n Super VIP Ticket = 1.000.000"};
	
	int selectMenu;
	
	for (int i = 0; i < 5; i++){
		cout << i + 1 << ". " << listMenu[i] << endl;
	}
	
	cout << "Please Select Menu item"<< endl;	
	cin >> selectMenu;
	cout << menuItem [selectMenu - 1] << endl;
		
	 
	return 0;
}

