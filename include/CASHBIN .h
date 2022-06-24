//
// Created by Kyung Ho Kang on 2022/06/23.
//

#ifndef ATM_CASHBIN_H
#define ATM_CASHBIN_H

class CASHBIN{

public :

    //Constructor
    CASHBIN();
    CASHBIN(int ID, int bal, bool insert);

    //Copy Constructor
    CASHBIN(const CASHBIN &rhs);

    //Assignment Operator
    CASHBIN & operator=(const CASHBIN &rhs);

    //Destructor doesn't need to be defined since we have not dynamically allocated memory

    // Accessors
    int getID();
    int getBalance();
    bool isCardInserted();


    // Mutators
    void deposit(int money);
    void withdraw(int money);

    void insertCard();
    void removeCard();



private :

    int IDNumber;
    int balance;
    bool cardInserted;

};


#endif //ATM_CASHBIN_H
