// File name: ACCOUNT.h
// Author: Scott Kang
// userid: kangk
// Email: kyung.ho.kang@vanderbilt.edu
// Description: Implementing ACCOUNT class that is necessary for programming ATM machine
// Last Changed: 2022 06/21

#ifndef ATM_ACCOUNT_H
#define ATM_ACCOUNT_H

#include "USER.h"


// probably would have been simpler to define all the methods in the header file but I divided into
// source file and header file for simplicity

class ACCOUNT{

public :

    //constructor
    ACCOUNT();
    ACCOUNT(USER rhsUser, int rhsSavingsAccount, int rhsCheckingAccount, int rhsPinNumber);

    //copy constructor
    ACCOUNT(const ACCOUNT &rhs);

    //assingmnet operator
    ACCOUNT& operator=(const ACCOUNT &rhs);

    //do not really need this destructor since we are not dynamically allocating memory
    // ~ACCOUNT();

    //Accessor
    int getSavingsAccount();
    int getCheckingAccount();
    int getPinNumber();

    //Modifier
    void setCheckingAccount(int rhs);
    void setSavingAccount(int rhs);
    void setPinNumber(int rhs);
    void deposit(string Account, int money);
    void withdraw(string Account, int money);
    void displayBalance(string Account);



private :

    USER user;
    int savingsAccount;
    int checkingAccount;
    int pinNumber;


};

#endif //ATM_ACCOUNT_H
