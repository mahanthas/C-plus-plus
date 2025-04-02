#include<bits/stdc++.h>
using namespace std;

int main(){
    int *ptr = new int(42);

    cout<<"address of ptr: "<<ptr<<endl;
    cout<<"value of ptr: "<<*ptr<<endl;

    delete ptr;

    cout<<"address of ptr: "<<ptr<<endl;
    cout<<"value of ptr: "<<*ptr<<endl;

    int *ptr1 = new int[10];
    ptr1[0] = 10;
    ptr1[1] = 20;

    cout<<"address of ptr: "<<ptr1<<endl;
    cout<<"value of ptr: "<<ptr1[0]<<endl;
    cout<<"value of ptr: "<<ptr1[1]<<endl;

    delete[] ptr1;

    cout<<"address of ptr: "<<ptr1<<endl;
    cout<<"value of ptr: "<<ptr1[0]<<endl;
    cout<<"value of ptr: "<<ptr1[1]<<endl;

}