#include <iostream>
#include <iomanip>
using namespace std;

#include "Investment.h"

//Get and Setter Functions
void Investment::SetInitial(double initial) {
    uInitial = initial;
}

double Investment::GetInitial() {
    return uInitial;
}

void Investment::SetDeposit(double deposit) {
    uDeposit = deposit;
}

double Investment::GetDeposit() {
    return uDeposit;
}

void Investment::SetAnnual(double annual) {
    uAnnual = annual;
}

double Investment::GetAnnual() {
    return uAnnual;
}

void Investment::SetYears(double years) {
    uYears = years;
}

double Investment::GetYears() {
    return uYears;
}
///







void Investment::FinalMenu() { //Uses Get functions to output gathered data 
    cout << "**************************" << endl;
    cout << "******* Data Input *******" << endl;
    cout << setprecision(2) << fixed;
    cout << "Initial Investment Amount: $" << GetInitial() << endl;
    cout << "Monthly Deposit: $" << GetDeposit() << endl;
    cout << setprecision(0) << fixed;
    cout << "Annual Interest: %" << GetAnnual() << endl;
    cout << "Number of years: " << GetYears() << endl;
    cout << "Press any key to continue . . ." << endl;
    cin.ignore();
}

void Investment::Display1() {
    cout << "**************************" << endl;
    cout << "******* Data Input *******" << endl;
    cout << "Initial Investment Amount: ";
}
