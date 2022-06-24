//
// Created by Kyung Ho Kang on 2022/06/21.
//

#include "../include/ACCOUNT.h"
#include <iostream>

ACCOUNT :: ACCOUNT() : user(USER()), savingsAccount(0),
                       checkingAccount(0), pinNumber(1234){
}

ACCOUNT ::ACCOUNT(USER rhsUser, int rhsSavingsAccount, int rhsCheckingAccount, int rhsPinNumber)
          : user(rhsUser), savingsAccount(rhsSavingsAccount), checkingAccount(rhsCheckingAccount),
          pinNumber(rhsPinNumber){
}

ACCOUNT ::ACCOUNT(const ACCOUNT &rhs) : user(rhs.user), savingsAccount(rhs.savingsAccount),
                                      checkingAccount(rhs.checkingAccount), pinNumber(rhs.pinNumber){
}

ACCOUNT& ACCOUNT :: operator=(const ACCOUNT &rhs){
    ACCOUNT tmp(rhs);
    std :: swap(user, tmp.user);
    std :: swap(savingsAccount, tmp.savingsAccount);
    std :: swap(checkingAccount, tmp.checkingAccount);
    std :: swap(pinNumber, tmp.pinNumber);
    return *this;
}

int ACCOUNT ::getSavingsAccount() {
    return savingsAccount;
}

int ACCOUNT ::getCheckingAccount(){
    return checkingAccount;
}

int ACCOUNT ::getPinNumber() {
    return pinNumber;
}

void ACCOUNT ::setCheckingAccount(int rhs) {
    checkingAccount = rhs;
}

void ACCOUNT ::setSavingAccount(int rhs) {
    savingsAccount = rhs;
}

void ACCOUNT ::setPinNumber(int rhs) {
    pinNumber = rhs;
}

void ACCOUNT :: deposit(string Account, int money){
    if(Account == "savingsAccount") {
        savingsAccount += money;
    }else if(Account == "checkingAccount"){
        checkingAccount += money;
    }else{
        std :: cout << "Account inValid" << std :: endl;
    }
}

void ACCOUNT :: withdraw(string Account, int money){
    if(Account == "savingsAccount") {
        if(money > savingsAccount){
            std :: cout << "savings account does not have enough money inside" << std::endl;
        }else{
            savingsAccount -= money;
        }
    }else if(Account == "checkingAccount"){
        if(money > checkingAccount){
            std :: cout << "checking account does not have enough monney inside" << std :: endl;
        }else{
            checkingAccount -= money;
        }
    }else{
        std :: cout << "Account inValid" << std :: endl;
    }
}

void ACCOUNT ::displayBalance(string Account) {
    if(Account == "savingsAccount"){
        std :: cout << savingsAccount << std::endl;
    }else if(Account == "checkingAccount"){
        std :: cout << checkingAccount << std :: endl;
    }else{
        std :: cout << "Account invalid" << std :: endl;
    }
}

