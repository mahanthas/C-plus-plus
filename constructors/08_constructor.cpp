/*
Runtime Polymorphism:
Create a base class Account with functions deposit() and withdraw(). Derive classes SavingsAccount and CurrentAccount that override these functions. Write a program to dynamically allocate accounts and perform transactions based on account type.
*/
#include<bits/stdc++.h>
using namespace std;

class Account{
    public:
    float account_number;
    float amount;
    float balance;
    Account(float account_number){
        cout<<"I am account constructor"<<endl;
        this->account_number = account_number;
    }
    void deposit(float amount){
        this->amount =amount;
        balanace = balance + amount;
        cout<<"Balance after deposit is: "<<balance<<endl;
    }
    void withdraw(float amount){
        this->amount = amount;
        balance = balance - withdraw;
        cout<<"Balance after withdrawal is: "<<balance<<endl;
    }
};
class SavingsAccount : public Account{
    SavingsAccount(balance):Account()  
};