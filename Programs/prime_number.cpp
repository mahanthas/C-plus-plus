/*
    Question : Write a program to check if a number is prime or not.
*/
#include <iostream>
using namespace std;

void primenumber(){
    cout<<"Enter the number need to be checked for PRIME num: ";
    int a;
    cin>>a;

    if (a>1)
    {
        for(int i = 2;i * i <= a; i++){
            if (a%i == 0){
                cout<< "the provide number is not a prime number : "<<" "<<a<<endl;
                return;
            }
        }
        cout<< "the provide number is a prime number : "<<" "<<a<<endl;
    }
    else if(a<=1)
    {
        cout<< "the provide number is not a prime number : "<<" "<<a<<endl;
    }
}

int main(){
    primenumber();
}