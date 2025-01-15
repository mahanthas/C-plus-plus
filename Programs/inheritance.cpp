#include<iostream>
using namespace std;

class Person{
    public:
    string name;
    int age;

    Person(){
        cout<<"i am base class constructor"<<endl;
    }

    ~Person(){
        cout<<"i am base class Destructor"<<endl;
    }
};

class Student :public Person{
    public:
    int rollno;

    Student(){
        cout<<"i am child class constructor"<<endl;
    }

    ~Student(){
        cout<<"i am child class Destructor"<<endl;
    }
};

int main(){
    Student s1[5];
    Student s2;

}