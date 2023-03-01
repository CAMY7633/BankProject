#include "Account.h"
#include <iostream>



using namespace std;
void Account::ShowAccountDetails()
{
	system("CLS");
	cout << "MONEY: " << Money << endl;
	cout << "BITCOIN: " << Bitcoin << endl;
}

void Account::AddMoney()
{
	system("CLS");
	cout << "ENTER AMOUNT: "; cin >> AddingMoney; Money = (Money + AddingMoney); 
	system("CLS");
	cout << "MONEY ADDED: " << AddingMoney << endl; AddingMoney = 0;
	
}
