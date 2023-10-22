// Bret Barefoot
// CS 210
// Project 2 - Banking App

#include <iostream>
#include "Banking.h"
using namespace std;


int main()
{
	double investmentAmount; // declare variables used to get input
	double monthlyDeposit;
	double annualInterest;
	int numberOfYears;
	bool stopApp = false; // variable used to stop the loop
	string userResponse; // variable used in checking to stop loop


	




	Banking user1; //create an object of the banking app class

	while (stopApp != true) { // loop while user wants to continue
		user1.DisplayScreen(); // calls the first display screen
		

		
		cout << "----------Data Input------------" << endl; // prompts the user for input amounts to put into the declared variables
		cout << "Initial Investment Amount: ";
		cin >> investmentAmount;
		cout << "Monthly Deposit: ";
		cin >> monthlyDeposit;
		cout << "Annual Interest: ";
		cin >> annualInterest;
		cout << "Number of years: ";
		cin >> numberOfYears;
		cout << "--------------------------------" << endl;

		user1.SetInvestmentAmount(investmentAmount);
		user1.SetMonthlyDeposit(monthlyDeposit);
		user1.SetAnnualInterest(annualInterest);
		user1.SetYears(numberOfYears);

		user1.DisplayInput(); // shows the prompt with all the users input displayed
		user1.DisplayReports(); // will display the two reports

		cout << "Enter Q to quit! Anything else to continue" << endl; // prompts the user to stop or continue
		cin >> userResponse; // gets users response

		if (userResponse == "Q" || userResponse == "q") { // checks users response and adjusts the boolean as necessary to stay or exit the loop
			stopApp = true;
		}
		else {
			stopApp = false;
		}
		
	}
	
	return 0;
	
}