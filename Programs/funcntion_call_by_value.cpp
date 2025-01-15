/*
Here there are two types 
1. function call by parameter values 
2. function call by default values
*/
#include<iostream>
using namespace std;

void paramter_value(int a, int b, int c){
    printf("A is : %d\n",a);
    printf("B is : %d\n",b);
    printf("C is : %d\n",c);
}

void default_value(int a,int b, int c=100){
    //here in this function there will be default value in the arguments , if you want you over write by sending another value
    printf("A is : %d\n",a);
    printf("B is : %d\n",b);
    printf("C is : %d\n",c);
}


int main(){
    int a=20,b=30,c=40;

    paramter_value(a,b,c);
    default_value(a,b);
}