/*
Requirement :  Write an Program to display the sizes of datatypes in bytes using C++ 
*/


#include <iostream>
using namespace std;

int main(){
    cout<<"Display the sizes of datatypes in Bytes"<<endl;
    cout<<"Size of int : "<<sizeof(int)<<endl;
    cout<<"Size of double : "<<sizeof(double)<<endl;
    cout<<"Size of float : "<<sizeof(float)<<endl;
    cout<<"Size of char : "<<sizeof(char)<<endl;
    cout<<"Size of bool : "<<sizeof(bool)<<endl;
    cout<<"Size of long long : "<<sizeof(long long)<<endl;

    return 0;
}

/*
how to execute :
    execute the below command
        --> g++ .\Tasks\2_1_sizeof_datatypes.cpp -o main; .\main

Output will be :

Display the sizes of datatypes in Bytes
Size of int : 4
Size of double : 8
Size of float : 4
Size of char : 1
Size of bool : 1
Size of long long : 8

*/