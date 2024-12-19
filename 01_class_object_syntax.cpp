#include <iostream>
#include <string>

using namespace std;

class Teacher{  // --> this the syntax of class there should be ; at the end of bracket

    //properties or variables 

    public:  //generally all the parameters and function in class will be private we need to make them public to access outside the class
    string name;
    string dept;
    string subject;
    double salary;

    void changedept(string newdept){
        dept = newdept;
    }

};

int main (){
    Teacher t1;
    t1.name = "Mahantha";
    t1.dept = "electrical";
    cout << "name == "<<t1.name << endl;
    return 0;
}