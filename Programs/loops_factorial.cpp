/*
    Question : 
        1. Print all even numbers between 1 and 50 using a for loop.
        2. Write a program to calculate the factorial of a number using a while loop.
    
*/

#include <iostream>
using namespace std;

void even_numbers(int a){
    for(int i=0; i<=a; i++){
        if( (i % 2) == 0){
            cout<<i<<" ";
        }
    }
}

void factorial(int b){
    long long factorial = 1;
    for(int i = 1; i<=b ;i++)
    {
        factorial *= i; 
    }

    cout<<"The factorial of given number is : "<<factorial<<endl;
}

int main(){
    int a;
    cout << "The maximum number to be printed between even numbers : ";
    cin >> a;

    even_numbers(a);

    int b;
    cout<<endl<<"The number to be calculated for factorial is : ";
    cin>>b;

    factorial(b);
}