#pragma once
#include "ChoiceManager.h"

class Account
{

public:

	Account() {
	}
	~Account() {
	}


	int Money = 5000;
	int Bitcoin = 0;

	int AddingMoney = 0;

	void ShowAccountDetails();
	void AddMoney();
	void RemoveMoney();
};

