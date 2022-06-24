#include <iostream>

#include "CONSOLE.h"
#include "include/USER.h"
#include "include/ACCOUNT.h"
#include "include/CASHBIN .h"

int main() {

    //Create an object each for USER, ACCOUNT, CASHBIN, and CONSOLE

    CONSOLE con1;
    USER p1("Scott", "Kang", 937702, "1999/11/03");
    ACCOUNT acc1 (p1, 100, 100, 2469);
    CASHBIN cb1 (111111, 1000, false);

    bool test = true;

    while(test){
        std :: cout << "Print 1 to insert a card and press 2 to exit" << std ::endl;
        int choice;
        std :: cin >> choice;
        if(choice != 1){
            test = false;
            std :: cout << "Thank you for using our service" << std :: endl;
        }else{
            cb1.insertCard();
            bool correctPin = con1.pinVerify(acc1.getPinNumber());
            if(!correctPin){
                std :: cout << "wrong pin number. Thank you for using our service" << std::endl;
            }else{
                std :: cout << "Successfully logged into your account" << std :: endl;
                bool active = true;
                while(active){
                    std :: cout << "Press 1 for checking Account, 2 for savings Account, 3 for exit" << std :: endl;
                    int num;
                    std :: cin >> num;
                    if(num == 3 || (num != 1 && num != 2)){
                        active = false;
                        cb1.removeCard();
                        std :: cout << "Goodbye" << std :: endl;
                    }else{
                        std :: cout << "Press 1 for checking balance, 2 for deposit, 3 for withdraw" << std :: endl;
                        int option;
                        std :: cin >> option;
                        if(option == 1){
                            if(num == 1){
                                acc1.displayBalance("checkingAccount");
                            }else if(num == 2){
                                acc1.displayBalance("savingsAccount");
                            }
                        }else if(option == 2){
                            std :: cout << "Enter amount you want to deposit" << std :: endl;
                            int dep;
                            std :: cin >> dep;
                            if(num == 1){
                                acc1.deposit("checkingAccount", dep);
                            }else if(num == 2){
                                acc1.deposit("savingsAccount", dep);
                            }
                        }else if(option == 3){
                            std :: cout << "Enter amount you want to withdraw" << std :: endl;
                            int with;
                            std :: cin >> with;
                            if(num == 1){
                                acc1.withdraw("checkingAccount", with);
                            }else if(num == 2){
                                acc1.withdraw("savingsAccount", with);
                            }
                        }
                    }
                }
            }
        }
    }


    return 0;
}
