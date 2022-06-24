//
// Created by Kyung Ho Kang on 2022/06/21.
//

#include "../include/USER.h"

USER :: USER() : firstName("Scott"),
                 lastName("Kang"),
                 birthdate("1999/11/03"),
                 accountNumber(937702){
}

USER :: USER(string firstName, string LastName, int accountNumber, string birthdate)
            : firstName(firstName), lastName(LastName),
            accountNumber(accountNumber), birthdate(birthdate){
}

USER :: USER(const USER &rhs) : firstName(rhs.firstName),
                                lastName(rhs.lastName),
                                accountNumber(rhs.accountNumber),
                                birthdate(rhs.birthdate){
}

USER& USER :: operator=(const USER &rhs) {
    USER temp(rhs);
    std::swap(firstName, temp.firstName);
    std::swap(lastName, temp.lastName);
    std::swap(accountNumber, temp.accountNumber);
    std::swap(birthdate, temp.birthdate);
    return *this;
}

string USER ::getFirstName() {
    return firstName;
}

string USER ::getLastName() {
    return lastName;
}

int USER ::getAccountNumber() {
    return accountNumber;
}

string USER ::getBirthdate() {
    return birthdate;
}

void USER ::setFirstName(string rhs){
    firstName = rhs;
}

void USER ::setLastName(string rhs) {
    lastName = rhs;
}

void USER ::setAccountNumber(int rhs) {
    accountNumber = rhs;
}

void USER ::setBirthDate(string rhs) {
    birthdate = rhs;
}

