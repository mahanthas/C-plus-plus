/* Question : Write a program to take two integers as input and print their sum, difference, product, and quotient.*/


#include <iostream>

using namespace std;

void sum(int a, int b){
    int sum;
    sum = a+b;
    
    cout << "The sum of two numbers are : "<<sum<<endl;
}

void difference(int a, int b){
    int difference;
    if(a>b){
        difference = a-b;
    }
    else if(b>a){
        difference = b-a;
    }
    cout << "The difference of two numbers are : "<<difference<<endl;
}

void product(int a, int b){
    int product;
    product = a*b;
    cout << "The product of two numbers are : "<<product<<endl;
}

void quotient(int a, int b){
    float quotient;
    if(a>b){
        quotient = a/b;
    }
    else if(b>a){
        quotient = b/a;
    }
    cout << "The quotient of two numbers are : "<<quotient<<endl;
}

int main(){
    int a, b;
    cout<<"Enter the value of 1st number: ";
    cin>>a;
    cout<<"Enter the value of 2nd number: ";
    cin>>b;

    sum(a,b);
    difference(a,b);
    product(a,b);
    quotient(a,b);
}


