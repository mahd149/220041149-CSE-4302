#include <iostream>
#include <string>
#include "account.h"
#include "currentaccount.h"
#include "savingsaccount.h"
#include "mds.h"
#include "fiveyearmds.h"
#include "twoyearmds.h"
#include "loanaccount.h"
#include "initialdeposit.h"

using namespace std;

int main()
{
    // Creating a CurrentAccount instance
    CurrentAccount currentAcc("John Doe", 500.0f);
    currentAcc.display();

    // Creating a SavingsAccount instance
    SavingsAccount savingsAcc("Jane Doe", 1000.0f, 2.5f, 4200.0f);
    savingsAcc.display();

    // Creating an MDS instance
    MDS mdsAccount("Alice Doe", 2000.0f, 1.5f, 100.0f);
    mdsAccount.display();

    // Creating a FiveYearMDS instance
    FiveYearMDS fiveYearMDS("Bob Smith", 3000.0f, 1.8f, 150.0f, 5.0f);
    fiveYearMDS.display();

    // Creating a TwoYearMDS instance
    TwoYearMDS twoYearMDS("Charlie Brown", 1500.0f, 1.2f, 50.0f, 2.0f);
    twoYearMDS.display();

    // Creating a LoanAccount instance
    loanAccount loanAcc("David Jones", -5000.0f, 3.0f, 200.0f);
    loanAcc.display();

    // Creating an InitialDepositMDS instance
    InitialaDepositMDS initDepMDS("Eve White", 1000.0f, 1.6f, 80.0f, 3.5f, 500.0f);
    initDepMDS.display();

    return 0;
}


/*
command for terminal to execute all cpp files 

change directory to folder first

then

g++ -o output *.cpp

to run:

./output

or just type 

output

*/