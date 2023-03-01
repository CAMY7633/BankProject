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
	cout << "ENTER AMOUNT: "; cin >> MoneyALT; Money = (Money + MoneyALT); 
	system("CLS");
	cout << "MONEY ADDED: " << MoneyALT << endl; MoneyALT = 0;
	
}

void Account::RemoveMoney()
{
	system("CLS");
	cout << "ENTER AMOUNT: "; cin >> MoneyALT; Money = (Money - MoneyALT);
	system("CLS");
	cout << "MONEY REMOVED: " << MoneyALT << endl; MoneyALT = 0;
}
