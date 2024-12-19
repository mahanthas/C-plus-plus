#include <iostream>
#include <string>

using namespace std;

class Teacher{  // --> this the syntax of class there should be ; at the end of bracket

    //properties or variables 

    private:
    double salary;  //made salary variable as private 

    public: 
    string name;
    string dept;
    string subject;
    Teacher(){ //Non-Parameterized Constructor 
        cout<<"Hi i am constructer"<<endl;
        dept = "Computer Science";  // here default parameter can be added, if the all the object has same dept 
    }

    Teacher(string n,string d,string sub, double s){
        name = n;
        dept = d;
        subject = sub;
        salary = s;
    }
    
    void changedept(string newdept){
        dept = newdept;
    }

    void setsalary(double s){  //setter
        salary = s;
    }

    double getsalary(){  //getter 
        return salary;
    }

};

int main (){
    Teacher t1("mahan","science","biology",50000);  //whenever the object is created the constructor is called internally , which cant be seen by user 
    cout << "name == "<<t1.name << endl;
    cout << "t1 dept == "<<t1.dept << endl;
    cout << "t1 subject == "<<t1.subject<<endl;
    cout << "t1 salary == "<<t1.getsalary() << endl;

    return 0;
}