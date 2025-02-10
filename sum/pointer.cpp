#include<iostream>
using namespace std;

const int a = 10;

int main(){
    int *ptr = const_cast<int*>(&a);
    *ptr = 20;

    cout<<"hello";
    cout<<*ptr<<endl;
    cout<<a<<endl;
}