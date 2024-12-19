#include <iostream>
#include <string>

using namespace std;

class student{
    public:
    string name;
    double* cgpaPtr;

    student(string name, double cgpa){
        this->name=name;
        //this->cgpa=cgpa;
        cgpaPtr = new double;  //this is used to create new memory allocation (dynamically) heap memory
        *cgpaPtr = cgpa;
    }

    //shallow copy
    // student (student &obj){
    //     this->name = obj.name;
    //     //this->cgpa = obj.cgpa;
    //     this->cgpaPtr = obj.cgpaPtr;
    // }

    student (student &obj){
        this->name = obj.name;
        cgpaPtr = new double;  // here it creates new copy of memory in heap 
        *cgpaPtr = *obj.cgpaPtr; // here everytime new value will be copied 
    }

    void getinfo(){
        cout<<"Name = "<<name<<endl;
        cout<<"cgpa = "<<*cgpaPtr<<endl;
    }
};

int main (){

    student s1("Rahul Kumar",8.9);
    s1.getinfo();
    student s2(s1);

    *(s2.cgpaPtr) = 9.2;
    s1.getinfo();

    s2.name = "Neha ";
    s2.getinfo();

    return 0;
}