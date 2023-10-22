// Bret Barefoot
// CS 210 Project 2
// Banking class 


#include <iostream>
using namespace std;
#include "Banking.h"



void Banking::DisplayScreen()
{

	cout << "----------Data Input------------" << endl;
	cout << "Initial Investment Amount: " << endl;
	cout << "Monthly Deposit: " << endl;
	cout << "Annual Interest: " << endl;
	cout << "Number of years: " << endl;
	cout << "--------------------------------" << endl;
	system("pause");
	
} // will display the prompt

void Banking::DisplayInput()
{

	cout << "----------Your Input------------" << endl;
	cout << "Initial Investment Amount: " << uAmount << endl;
	cout << "Monthly Deposit: " << uDeposit << endl;
	cout << "Annual Interest: " << uInterest << endl;
	cout << "Number of years: " << uYears << endl;
	cout << "--------------------------------" << endl;
	system("pause");

} // will show the prompt with the users input

void Banking::DisplayReports() // calculates and shows the two different reports

{

	double startingBalance = uAmount; //declare needed variables to complete the reports
	double currentBalance = uAmount;
	double monthlyDeposit = uDeposit;
	double interestRate = uInterest;
	double rate = (interestRate / 100) / 12;
	double earnedInterest = 0.0;
	
	cout << "***********************REPORT 1*************************" << endl;
	cout << "Balance and Interest Without Additional Monthly Deposits" << endl;
	cout << "========================================================" << endl;
	cout << "Year-------Year End Balance-----Year End Earned Interest" << endl;

	for (int i = 1; i <= uYears; i++) { // use a for loop to iterate through the number of years and do the calculations

		startingBalance = currentBalance;  // set the variables and calculations for the first report
		currentBalance += currentBalance * rate;
		earnedInterest = currentBalance * rate;
		 

		cout << i << "               " << currentBalance << "                        " << earnedInterest<< endl; // will be iterated for each year

	}

	cout << "***********************REPORT 2************************" << endl; 
	cout << "Balance and Interest With Additional Monthly Deposits" << endl;
	cout << "========================================================" << endl;
	cout << "Year-------Year End Balance-----Year End Earned Interest" << endl;

	currentBalance = uAmount;  // reset the variables for the second report
	earnedInterest = 0.0;
	monthlyDeposit = uDeposit;


	for (int i = 1; i <= uYears; i++) {
		startingBalance = currentBalance; // sets the variables and does the calculations for each iteration
		currentBalance = currentBalance + (monthlyDeposit * 12);
		currentBalance += currentBalance * rate;
		earnedInterest = currentBalance * rate;

		cout << i << "               " << currentBalance << "                        " << earnedInterest << endl; // outputs each years data

	}
	system("pause");

}

void Banking::SetInvestmentAmount(double amount) { uAmount = amount; }

double Banking::GetInvestmentAmount() {return uAmount;}

void Banking::SetMonthlyDeposit(double deposit) { uDeposit = deposit; }

double Banking::GetMonthlyDeposit() { return uDeposit; }

void Banking::SetAnnualInterest(double interest) { uInterest = interest; }

double Banking::GetAnnualInterest() { return uInterest; }


void Banking::SetYears(int Years) { uYears = Years; }

int Banking::GetYears() { return uYears; }



