// Bret Barefoot
// CS 210
// Project 2 Banking class header file

#pragma once       // makes sure header file is included only once
#ifndef BANKING_H
#define BANKING_H


class Banking     // banking class function definitions and class members
{
public:
	void DisplayScreen(); // will display the startup screen prompting for input
	void DisplayInput(); // will display the starting screen with input from user showing
	void DisplayReports(); // will display the two user reports

	void SetInvestmentAmount(double amount);
	double GetInvestmentAmount();

	void SetMonthlyDeposit(double deposit);
	double GetMonthlyDeposit();

	void SetAnnualInterest(double interest);
	double GetAnnualInterest();

	void SetYears(int Years);
	int GetYears();

	double uAmount = 0.0; // declares the class private members and initializes them to 0
	double uDeposit = 0.0;
	double uInterest = 0.0;
	int uYears = 0;



private:

};

#endif
