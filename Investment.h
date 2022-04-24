#ifndef INVESTMENT_H
#define INVESTMENT_H


#include <string>
using namespace std;

class Investment {
public:
    void FinalMenu();
    void Display1();
    void SetInitial(double initial);
    double GetInitial();
    void SetDeposit(double deposit);
    double GetDeposit();
    void SetAnnual(double annual);
    double GetAnnual();
    void SetYears(double years);
    double GetYears();


private:
    double uInitial = 0.00;
    double uDeposit = 0.00;
    double uAnnual = 0.00;
    int uYears = 0.00;
};

#endif
