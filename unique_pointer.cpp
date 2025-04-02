/*
Exercise 1: unique_ptr Ownership Transfer
Create a unique_ptr to a string.
Transfer ownership to another unique_ptr and print the value.
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    unique_ptr<string> strup= make_unique<string>("Mahan");

    unique_ptr<string> str2 = make_unique<string>();

    str2 = move(strup);

    cout<<"string is : "<<*str2<<"  and its memoery address is : "<<str2.get()<<endl;
    //cout<<"string is : "<<*strup<<"  and its memoery address is : "<<strup.get()<<endl;
}