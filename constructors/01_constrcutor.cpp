/*
Create a Person class with attributes like name and age. Create a Student class that inherits from Person and adds an attribute for grade. Write a program to create a student object and display the student's information.

Task: Use public inheritance and implement appropriate functions for input and display.
*/

#include <bits/stdc++.h>
using namespace std;

class Person{
  public:
  string name;
  int age;
  Person(string name,int age){
      cout<<"Hi i am Constructor"<<endl;
      this->name = name;
      this->age = age;
  }
  void display(){
      cout<<name<<endl;
      cout<<age<<endl;
  }
  ~Person(){
      cout<<"Hi i am Destrcutor"<<endl;
  }
};

int main(){
    Person p1("Mahan",26);
    p1.display();
    
}