/*
Diamond Problem with Virtual Inheritance:
Create a base class Person. Derive Employee and Student from Person. Create a class Intern that inherits from both Employee and Student. Use virtual inheritance to resolve ambiguity.

Task: Avoid redundant copies of base class data.
*/
#include<bits/stdc++.h>
using namespace std;

class Person{
    public:
    string name;
    Person(string name){
        this->name = name;
        cout<<"I am person Constructor"<<endl;
    }
    virtual ~Person(){
        cout<<"I am Person Destructor"<<endl;
    }
};
class Employee :virtual public Person{
    public:
    string company;
    Employee(string name,string company):Person(name){
        cout<<"Hi i am Employee Constructor"<<endl;
        this->company = company;
    }
    virtual ~Employee(){
        cout<<"Hi i am Employee Destructor"<<endl;
    }
};
class Student:virtual public Person{
    // we need to make virtual class to person because it can be accessed to intern class will create 
    //person class only one instance
    public:
    string school;
    Student(string name,string school):Person(name){
        cout<<"I am Student Constructor"<<endl;
        this->school = school;
    }
    virtual ~Student(){
        cout<<"I am Student Destructor"<<endl;
    }
};
class Intern : public Employee, public Student{
    public:
    int roll_no;
    Intern(string name,string company,string school,int roll_no):Person(name),Employee(name,company),Student(name,school){
        // here we need to provide the all parameters in intern and respective parameter in respective constructors
        cout<<"Hi i am intern constructor"<<endl;
        this->roll_no = roll_no;
    }
    void display(){
        cout<<name<<endl;
        cout<<company<<endl;
        cout<<school<<endl;
        cout<<roll_no<<endl;
    }
    virtual ~Intern(){
        cout<<"Hi i am Intern Destructor"<<endl;
    }
};

int main(){
    Intern i1("mahan","Bosch","DSATM",12345);
    i1.display();
}
