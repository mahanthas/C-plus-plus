#include <iostream>
#include <string>

using namespace std;

class Person{
    public:
    string name;
    int age;

    Person(string name, int age){
        cout<<"Hi i am Parent Constructor"<<endl;
        this->name =name;
        this->age = age;
    } 

    Person(){
        cout<<"Hi i am Parent Constructor"<<endl;
    }
};

class Student : public Person{
    public:
    int rollno;

    Student(string name, int age, int rollno) : Person(name,age){  //here we dont need to mention string and int under Person as we are calling the constructor
        cout<<"Hi i am child Constructor"<<endl;
        this->rollno = rollno;
    }

    Student(){
        cout<<"Hi i am child Constructor"<<endl;
    }

    void getinfo(){
        cout<<"Name is : "<<name<<endl;
        cout<<"age is : "<<age<<endl;
        cout<<"Rollno is : "<<rollno<<endl;
    }
};

class Gradstudent : public Student{

    public:
    string researcharea;

    Gradstudent(string name, int age, int rollno, string researcharea) : Student(name,age,rollno){
        this->researcharea = researcharea;
    }

    void getinfo(){
        cout<<"Name is : "<<name<<endl;
        cout<<"age is : "<<age<<endl;
        cout<<"Rollno is : "<<rollno<<endl;
        cout<<"Research Area is : "<<researcharea<<endl;
    }
};


int main(){

    Student s1("Mahan",26,1986);
    s1.getinfo();
    Gradstudent g1("Sindhu",25,1897,"Physics");
    g1.getinfo();
    
    return 0;
}