#include "Header.h"

void Person::setName(string name) {
	Name = name;
}
void Person::setNumber(int number) {
	Number = number;
}
void Person::setEmail(string email) {
	Email = email;
}
string Person::getName()const {
	return Name;
}
int Person::getNumber()const {
	return Number;
}
string Person::getEmail()const {
	return Email;
}
 double Person::getTotal()const {
	totalAmmount = totalAmmount + (RevenueAmmount - ExpenseAmmount);
	return totalAmmount;
}
void Person::setRevenueAmmount(double ammount) {
	RevenueAmmount = ammount;
	curRevenue += RevenueAmmount;
}
void Person::setRevenueType(string type) {
	RevenueType = type;

}
double Person::getRevenueAmmount()const {
	return RevenueAmmount;
}
string Person::getRevenueType()const {
	return RevenueType;
}
 double Person::getCurRevenue()const {
	return curRevenue;
}
void Person::setExpenseAmmount(double ammount) {
	ExpenseAmmount = ammount;
	curExpense += ExpenseAmmount;
}
void Person::setExpenseType(string type) {
	ExpenseType = type;
}
double Person::getExpenseAmmount()const {
	return ExpenseAmmount;
}
string Person::getExpenseType()const {
	return ExpenseType;
}
 double Person::getCurExpense()const {
	return curExpense;
}