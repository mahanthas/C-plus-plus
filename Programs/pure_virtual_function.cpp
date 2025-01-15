/*
Pure Virtual Function

SYNTAX: virtual returntype functionname(parameters...) = 0;

NOTES:
0. If some class can have only signature of function but not the body then we use pure virtual functions.
1. Sometimes in Base class we know the function name but not the definition of the function, so we want Derived classes to provide the definition of the function.
2. We can actually give body of pure virtual function.
3. If you have pure virtual function in your class, it means that class is an Abstract class and you can't create an object of that class. (But pointers and Reference can be created)

USE CASE:
1. Used to create abstract classes, which helps in creating interfaces (APIs)
*/

#include <iostream>
using namespace std;

class Animal{
    public:
    virtual void eat() = 0; // here we know that any animal should eat , but we dont whether animal eats non veg or veg 
                            // so its an pure virtual function
};

class cat : public Animal{
    public:
    void eat(){
        cout<<"only eats non-veg"<<endl;
    }
};

class cow : public Animal{
    public:
    void eat(){
        cout<<"only eats veg"<<endl;
    }  // if you remove this eat function from the cow class then it becomes abstrcat class and error will throw up while creating object 
       // must and should the pure virtual function should be called in the derived class
    void drink(){
        cout<<"only drinks milk"<<endl;
    }
};

int main(){
    Animal *a = new cat();
    cow c;
    c.eat();
    c.drink();
    a->eat();

    return 0;
}
