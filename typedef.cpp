#include<bits/stdc++.h>
using namespace std;

typedef string text;
//it is used to simplify datatype to simple words

using number = int;
//we can also use using to define the datatype to another words or simplified version


int main(){
    text firstname = "mahantha";
    text lastname = "swamy";

    text thridname = move(lastname); // in move() it will move the address and value to another string and releases string in function

    cout<<firstname + " " + thridname<<endl;

    number a = 10;
    number b = 20;

    cout<<a+b<<endl;

    return 0;
}