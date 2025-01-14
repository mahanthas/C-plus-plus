#include<iostream>
#include<string>
using namespace std;

class Person{
    public:
    string name;
    int age;

    Person(string name,int age){
        this->name = name;
        this->age = age;
    }
};

class Student : public Person{
    public:
    int rollno;

    Student(string name, int age, int rollno) : Person(name,age){
        this->rollno = rollno;
    }
};

class Gradstudent : public Student{
    public:
    string research_sub;

    Gradstudent(string name, int age, int rollno, string research_sub) : Student(name,age,rollno){
        this->research_sub = research_sub;
    }

    void getinfo(){
        printf("Student name is : %s \n", name.c_str());
        printf("Student age is : %d\n", age);
        printf("Student rollno is : %d\n", rollno);
        printf("Student research_sub is : %s\n", research_sub.c_str());
    }
};

int main(){
    string name = "Mahantha";
    int age = 26;
    int rollno = 1234;
    string research_sub = "Physics";
    Person p1(name,age);
    Student s1(name,age,rollno);
    Gradstudent g1(name,age,rollno,research_sub);

    g1.getinfo();

    return 0;

}