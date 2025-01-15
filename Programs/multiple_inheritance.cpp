#include <iostream>
using namespace std;

class Student{
    public:
    string name;
    int rollno;

};

class Teacher{
    public:
    string subject;
    double salary;
};

class TA: public Student, public Teacher{
    public:
    void getinfo(){
        cout<<"name is "<<name<<endl;
        cout<<"subject is "<<subject<<endl;
    }
};

int main(){
    TA ta1;
    ta1.name = "Mahantha";
    ta1.subject = "physics";

    ta1.getinfo();
}