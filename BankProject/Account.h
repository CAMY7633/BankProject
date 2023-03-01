#pragma once
class Account
{

public:

	Account() {
	}
	~Account() {
	}


	int Money = 5000;
	int Bitcoin = 0;

	int MoneyALT = 0;
	int BitcoinMOD = 0;

	void ShowAccountDetails();
	void AddMoney();
	void RemoveMoney();

	void AddBitcoin();
	void RemBitcoin();
};

