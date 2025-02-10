/*
Hierarchical Inheritance:
Create a base class Animal with a function sound(). Derive classes Dog, Cat, and Cow that override the sound() function. Display different sounds based on object type.
*/
#include<bits/stdc++.h>
using namespace std;

class Animal{
    public:
    Animal(){
        cout<<"i am animal constructor"<<endl;
    }
    virtual void sound() = 0; //pure-virtaul function
    virtual ~Animal(){
        cout<<"i am animal Destructor"<<endl;
    }
};

class Dog :public Animal{
    public:
    Dog(){
        cout<<"I am Dog Constructor"<<endl;
    }
    void sound() override{
        cout<<"Dog barks bow bow!!!!"<<endl;
    }
    ~Dog(){
        cout<<"I am Dog Destructor"<<endl;
    }
};
class Cat :public Animal{
    public:
    Cat(){
        cout<<"I am Cat Constructor"<<endl;
    }
    void sound() override{
        cout<<"Cat sound meow meow!!!!"<<endl;
    }
    ~Cat(){
        cout<<"I am Cat Destructor"<<endl;
    }
};
class Cow :public Animal{
    public:
    Cow(){
        cout<<"I am Cow Constructor"<<endl;
    }
    void sound() override{
        cout<<"Cow sound amba amba!!!!"<<endl;
    }
    ~Cow(){
        cout<<"I am Cow Destructor"<<endl;
    }
};

int main(){
    Dog d1;
    d1.sound();
    Cat c1;
    c1.sound();
    Cow cw1;
    cw1.sound();
}
