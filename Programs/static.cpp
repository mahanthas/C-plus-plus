#include<bits/stdc++.h>
using namespace std;

void func(){
    static int x = 100; //here x will be initailzed only once 
    x++;

    cout<<"value of x is: "<< x<<endl;
}

class A{
    public:
    A(){
        cout<<"A Class consturctor called"<<endl;
    }
    ~A(){
        cout<<"A Class destructor called"<<endl;
    }
};

int main(){
    if(true){
        A obj;
    }

    func();
    func();
    func();
    func();

    cout<<"end of main function "<<endl;
}

/*
Before adding static : 
A Class consturctor called
A Class destructor called
end of main function

After adding static : // here the static obj will be present fro lifetime of main function
A Class consturctor called
end of main function
A Class destructor called
*/