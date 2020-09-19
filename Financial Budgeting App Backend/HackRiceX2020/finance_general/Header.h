#pragma once
#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
using namespace std;

class Person
{
public:

	void setName(string name);
	void setNumber(int number);
	void setEmail(string email);

	string getName()const;
	int getNumber()const;
	string getEmail()const;
	double getTotal()const;

	void setRevenueAmmount(double ammount);
	void setRevenueType(string type);

	double getRevenueAmmount()const;
	string getRevenueType()const;
	double getCurRevenue()const;

	void setExpenseAmmount(double ammount);
	void setExpenseType(string type);

	double getExpenseAmmount()const;
	string getExpenseType()const;
	double getCurExpense()const;

private:
	string Name;
	int Number;
	string Email;
	string RevenueType;
	string ExpenseType;
	double RevenueAmmount;
	double ExpenseAmmount;
	static double curRevenue;
	static double curExpense;
	static double totalAmmount;
};
