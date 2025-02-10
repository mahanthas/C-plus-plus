/*
Create two base classes Engine and Body. The Engine class has a function to display engine information, while the Body class displays body type. Derive a class Car that combines both and displays all information.

Task: Handle ambiguity using scope resolution operator.
*/
#include<bits/stdc++.h>
using namespace std;

class Engine{
    public:
    string eng_info;
    Engine(string eng_info){
        cout<<"Hello i am Engine constructor"<<endl;
        this->eng_info = eng_info;
    }
    ~Engine(){
        cout<<"Hi i am Engine Destcurtor"<<endl;
    }
};

class Body{
    public:
    string body_info;
    Body(string body_info){
        cout<<"Hello i am Body constructor"<<endl;
        this->body_info = body_info;
    }
    ~Body(){
        cout<<"Hello i am Body Destructor"<<endl;
    }
};

class Car : public Body, public Engine{ // calling multiple classes will be done by ','
    public:
    Car(string eng_info,string body_info):Body(body_info),Engine(eng_info){  //here we need to provide the classes Constructors
                        // here calling the constructor depends on the creating the constructor 
        cout<<"Hi i am Car Constructor"<<endl;
    }
    ~Car(){
        cout<<"Hi i am Car Destructor"<<endl;
    }
    void display(){
        cout<<"The type of engine is : "<<Engine::eng_info<<endl;
        cout<<"The type of Body is: "<<Body::body_info<<endl;
    }
};

int main(){
    Car c1("Diesel","Metallic");
    c1.display();
    
}