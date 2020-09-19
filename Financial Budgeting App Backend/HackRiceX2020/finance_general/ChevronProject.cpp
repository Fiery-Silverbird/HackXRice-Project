#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include "Header.h"
using namespace std;


double Person::totalAmmount = 0.00;
double Person::curRevenue = 0.00;
double Person::curExpense = 0.00;

void addRevenue(Person& newperson, double ammount) {
	newperson.setRevenueAmmount(ammount);
}
void askForRevenues(Person& newperson) {
	bool AddRevenue = true;
	while (AddRevenue)
	{
		char answer;
		double ammount;
		cout << "What ammount of revenue would you like to add?" << endl;
		cin >> ammount;
		addRevenue(newperson, ammount);
		cout << "Would you like to add another ammount of revenue? If yes, press 'y'." << endl;
		cin >> answer;
		if (tolower(answer) != 'y')
		{
			AddRevenue = false;
		}
	}
}

void addExpense(Person& newperson, double ammount) {
	newperson.setExpenseAmmount(ammount);
}
void askForExpense(Person newperson) {
	bool AddExpense = true;
	while (AddExpense)
	{
		char answer;
		double ammount;
		cout << "What ammount of expense would you like to add?" << endl;
		cin >> ammount;
		addExpense(newperson, ammount);
		cout << "Would you like to add another ammount of expense? If yes, press 'y'." << endl;
		cin >> answer;
		if (tolower(answer) != 'y')
		{
			AddExpense = false;
		}
	}
}
void readFile() {

}
void interpretFile() {

}
void organize() {

}
void example() {
	vector<Person> person;
	Person newperson;
	
	askForRevenues(newperson);
	askForExpense(newperson);
	/*
	string txtr;
	double numr;
	//revenue

	
	cout << "what type of revenue are you entering?" << endl;
	getline(cin,txtr);
	newperson.setRevenueType(txtr);
	
	cout << "How much was this revenue?" << endl;
	cin >> numr;
	newperson.setRevenueAmmount(numr);

	string txt;
	double num;
	//expense
	cout << "what type of expense are you entering?" << endl;
	cin >> txt;
	newperson.setExpenseType(txt);
	cout << "How much was this expense?" << endl;
	cin >> num;
	newperson.setExpenseAmmount(num);
	*/

	person.push_back(newperson);

	cout << "Type of revenue- " << setw(26) << person[0].getRevenueType() << endl;
	cout << "Ammount of revenue- " << setw(23) << person[0].getRevenueAmmount() << endl;
	cout << "Type of revenue- " << setw(26) << person[0].getRevenueType() << endl;
	cout << "Ammount of revenue- " << setw(23) << person[0].getRevenueAmmount() << endl;
	cout << "Type of expense- " << setw(26) << person[0].getExpenseType() << endl;
	cout << "Ammount of expense- " << setw(23) << person[0].getExpenseAmmount() << endl;

	//total balance

	cout << "Your total balance is- " << setw(20) << person[0].getTotal() << endl;
}
int main() {
	//person name, person contact, person curmoney, person expense, 

	example();
	

	return 0;
}