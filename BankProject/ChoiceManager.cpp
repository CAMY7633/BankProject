#include "ChoiceManager.h"
#include <iostream>
#include <string>


using namespace std;


string endline = "*******************************************";
string op1 = "1: GET ACCOUNT DETAILS";
string op2 = "2: DEPOSIT MONEY";
string op3 = "3: WITHDRAW MONEY";
string op4 = "4: BUY BITCOIN";
string op5 = "5: SELL BITCOIN";
string op6 = "6: EXIT";

void ChoiceManager::GetChoice()
{
	CHOICE = 0;
	cout << endline << endl;
	cout << op1 << endl << op2 << endl << op3 << endl << op4 << endl << op5 << endl << op6 << endl;
	cout << "YOUR CHOICE: "; cin >> CHOICE;


	if (CHOICE == 1) {
		ACCOUNT.ShowAccountDetails();
		GetChoice();
	}
	if (CHOICE == 2) {
		ACCOUNT.AddMoney();
		GetChoice();
	}
	if (CHOICE == 3) {
		ACCOUNT.RemoveMoney();
		GetChoice();
	}
	if (CHOICE == 4) {
		ACCOUNT.AddBitcoin();
		GetChoice();
	}
	if (CHOICE == 5) {
		ACCOUNT.RemBitcoin();
		GetChoice();
	}
}
