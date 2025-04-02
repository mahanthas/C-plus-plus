#include<bits/stdc++.h>
using namespace std;

class A{
    public:
    A(){
        cout<<"Class A constructor"<<endl;
    }
    ~A(){
       cout<<"Class A Destructor"<<endl; 
    }
};

class B: public A{
    public:
    B(){
        cout<<"Class B constructor"<<endl;
    }
    virtual ~B(){
       cout<<"Class b Destructor"<<endl; 
    }
};

int main(){
    static B b1[5];
    B b2;
}