/*
Create a base class Vehicle with a protected attribute maxSpeed. Derive a class Car from Vehicle that sets the speed and displays it.

Task: Use protected inheritance and demonstrate the role of access specifiers.
*/
#include<bits/stdc++.h>
using namespace std;

class Vehicle{
  protected:
  double speed;
  public:
  Vehicle(){
      cout<<"Hi i am Vehicle constructor"<<endl;
  }
  ~Vehicle(){
      cout<<"Hi i am Vehicle Destructor"<<endl;
  }
};

class Car : protected Vehicle{
    public:
    Car(){
        cout<<"Hello i am car constructor"<<endl;
    }
    void setspeed(double speed){
        this->speed = speed;
    }
    void display(){
        cout<<"The speed of car is : "<<speed<<endl;
    }
    ~Car(){
        cout<<"Hello i am car Destructor"<<endl;
    }
};

int main(){
    
    Car c1;
    c1.setspeed(250);
    c1.display();
    
    return 0;
}