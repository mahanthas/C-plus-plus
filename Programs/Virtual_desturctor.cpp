/*
NOTES:
1. If we delete child class object through a pointer of parent class then it is undefined behaviour, 
   if parent class doesn't have virtual destructor.
2. If we fail to declare destructor as virtual in parent class then we endup having memory leak.
*/

#include <iostream>
using namespace std;

class Base{
    public:
    Base(){
        cout<<"base class constructor"<<endl;
    }
    virtual ~Base(){ // here if we dont use the virtual and delete the pointer then the derived desturctor will not be called
        cout<<"base class desturctor"<<endl;
    }
};

class Derived:public Base{
    public:
    Derived(){
        cout<<"derived class constructor"<<endl;
    }
    ~Derived(){
        cout<<"derived class destructor"<<endl;
    }
};

int main(){

    Base *b = new Derived();

    delete b;

    return 0;
}