#include <iostream>
#include <iomanip>
using namespace std;

#include "Investment.h" //Includes Investment.h header file

int main() {
    int i;
    int j;
    double oBalance;
    double mBalance;
    double eInterest;
    double iInvestment;
    double iDeposit;
    double iAnnual;
    double iYears;

    Investment user1; //Creates Investment object "user1"

    user1.Display1();
    cin >> iInvestment;
    while (cin.fail() || iInvestment <= 0.01) { //While loops that continues whole x is negative or is not an integer
        cout << "Error - Please enter a valid number" << endl;
        cin.clear(); //
        cin.ignore(256, '\n');//Clears previous input, prevents infinite loops caused by entering a letter
        cin >> iInvestment;
    }user1.SetInitial(iInvestment); //Calls Set function for initial investment

    cout << "Monthly Deposit: ";
    cin >> iDeposit;
    while (cin.fail() || iDeposit <= 0.01) { //While loops that continues whole x is negative or is not an integer
        cout << "Error - Please enter a valid number" << endl;
        cin.clear(); //
        cin.ignore(256, '\n');//Clears previous input, prevents infinite loops caused by entering a letter
        cin >> iDeposit;
    }user1.SetDeposit(iDeposit); //Calls set function for initial deposit

    cout << "Annual Interest: ";
    cin >> iAnnual;
    while (cin.fail() || iAnnual <= 0.01) { //While loops that continues whole x is negative or is not an integer
        cout << "Error - Please enter a valid number" << endl;
        cin.clear(); //
        cin.ignore(256, '\n');//Clears previous input, prevents infinite loops caused by entering a letter
        cin >> iAnnual;
    }user1.SetAnnual(iAnnual); //Calls set function for annual interest

    cout << "Number of years: ";
    cin >> iYears;
    while (cin.fail() || iYears <= 0.01) { //While loops that continues whole x is negative or is not an integer
        cout << "Error - Please enter a valid number" << endl;
        cin.clear(); //
        cin.ignore(256, '\n');//Clears previous input, prevents infinite loops caused by entering a letter
        cin >> iYears;
    }user1.SetYears(iYears); //Calls set function for years

    cin.ignore();
    cout << endl;

    user1.FinalMenu(); //Outputs data that will be calculated in neat manner

    cout << "********************************************************************" << endl;
    cout << "      Balance and Interest With Additional Monthly Deposits     " << endl << endl;
    cout << "  Year         Year End Balance             Interest Earned" << endl;
    cout << "-------------------------------------------------------------------" << endl;


    oBalance = user1.GetInitial();
    for (i = 1; i <= user1.GetYears(); ++i) { //For loop that continues until i reaches years
        eInterest = 0;
        for (j = 0; j < 12; ++j) { //For loop that calculates interest that is accumulated for every month of the year
            mBalance = (oBalance + user1.GetDeposit()) * ((user1.GetAnnual() / 100) / 12); //*Interest is divided by 12 since loop 
            eInterest = eInterest + mBalance;                                          //*runs 12 times
            oBalance = oBalance + user1.GetDeposit() + mBalance;
        }
        cout << setprecision(2) << fixed;   //Ouputs data
        cout << setw(5) << right << i;
        cout << setw(18) << right << "$" << oBalance;
        cout << setw(22) << right << "$" << eInterest << endl << endl;
    }

    cout << endl << endl << endl;

    cout << "********************************************************************" << endl;
    cout << "      Balance and Interest Without Additional Monthly Deposits     " << endl << endl;
    cout << "  Year         Year End Balance             Interest Earned" << endl;
    cout << "-------------------------------------------------------------------" << endl;


    oBalance = user1.GetInitial();
    for (i = 1; i <= user1.GetYears(); ++i) { //For loop that continues until i reaches years
        eInterest = oBalance * (user1.GetAnnual() / 100);
        oBalance = oBalance + eInterest;
        cout << setprecision(2) << fixed; //Outputs Data
        cout << setw(5) << right << i;
        cout << setw(18) << right << "$" << oBalance;
        cout << setw(22) << right << "$" << eInterest << endl << endl;
    }


    return 0;
}