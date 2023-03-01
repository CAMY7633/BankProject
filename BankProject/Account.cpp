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

void Account::AddBitcoin()
{
	system("CLS");
	cout << "ENTER BITCOIN AMOUNT: "; cin >> BitcoinMOD;
	if (Money >= (BitcoinMOD * 1000)) {
		Bitcoin = (Bitcoin + BitcoinMOD); Money = (Money - (BitcoinMOD * 1000));
		BitcoinMOD = 0;
		system("CLS");
		cout << "BITCOIN SUCCESSFULLY ADDED!" << endl;
	}
	else {
		BitcoinMOD = 0;
		system("CLS");
		cout << "YOUR TOO POOR!" << endl;
	}

}

void Account::RemBitcoin()
{
	system("CLS");
	cout << "ENTER BITCOIN AMOUNT: "; cin >> BitcoinMOD;
	if (BitcoinMOD <= Bitcoin) {
		Bitcoin = (Bitcoin - BitcoinMOD); Money = (Money + (BitcoinMOD * 1000));
		BitcoinMOD = 0;
		system("CLS");
		cout << "BITCOIN REMOVED SUCCESSFULLY!" << endl;
	}
	else {
		BitcoinMOD = 0;
		system("CLS");
		cout << "YOU DONT OWN THAT MUCH BITCOIN LOSER!" << endl;
	}
}
