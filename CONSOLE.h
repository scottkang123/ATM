//
// Created by Kyung Ho Kang on 2022/06/23.
//

#ifndef ATM_CONSOLE_H
#define ATM_CONSOLE_H


#include <iostream>

class CONSOLE {

public :

    bool pinVerify(int CorrectPinNum){

        int trial = 0;
        while(trial < 3){
            trial++;
            std :: cout << "Enter a pin Number : ";
            int pin;
            std :: cin >> pin;
            if(pin == CorrectPinNum){
                return true;
            }
        }
        return false;
    }

};


#endif //ATM_CONSOLE_H
