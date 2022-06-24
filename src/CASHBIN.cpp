//
// Created by Kyung Ho Kang on 2022/06/23.
//

#include <algorithm>
#include <iostream>
#include "../include/CASHBIN .h"

CASHBIN :: CASHBIN() : IDNumber(123), balance(0), cardInserted(false){
}

CASHBIN ::CASHBIN(int ID, int bal, bool insert) : IDNumber(ID), balance(bal), cardInserted(insert){
}

CASHBIN ::CASHBIN(const CASHBIN &rhs) : IDNumber(rhs.IDNumber), balance(rhs.balance), cardInserted(rhs.cardInserted){
}

CASHBIN & CASHBIN :: operator=(const CASHBIN &rhs) {
    CASHBIN tmp(rhs);
    std :: swap(IDNumber, tmp.IDNumber);
    std :: swap(balance, tmp.balance);
    std :: swap(cardInserted, tmp.cardInserted);
    return *this;
}

int CASHBIN :: getID(){
    return IDNumber;
}

int CASHBIN ::getBalance() {
    return balance;
}

bool CASHBIN ::isCardInserted() {
    return cardInserted;
}

void CASHBIN ::deposit(int money) {
    balance += money;
}

void CASHBIN ::withdraw(int money) {
    if(money > balance){
        std :: cout << "not enough money inside the machine" << std :: endl;
    }else{
        balance -= money;
    }
}

void CASHBIN ::insertCard() {
    cardInserted = true;
}

void CASHBIN ::removeCard() {
    cardInserted = false;
}