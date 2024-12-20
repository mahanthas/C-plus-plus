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

    ~student(){
        cout<<"hi i am destructor"<<endl;
        delete cgpaPtr; //delete the memory of dynmaically allocated memory for cgpaptr
    }

    void getinfo(){
        cout<<"Name = "<<name<<endl;
        cout<<"cgpa = "<<*cgpaPtr<<endl;
    }
};

int main (){

    student s1("Rahul Kumar",8.9);
    s1.getinfo();

    return 0;
}