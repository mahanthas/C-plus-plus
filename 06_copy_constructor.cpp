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

    //Non-Parameterized Constructor 
    Teacher(){ 
        cout<<"Hi i am constructer"<<endl;
        dept = "Computer Science";  // here default parameter can be added, if the all the object has same dept 
    }

    //parameterized Constructor
    Teacher(string name,string dept,string subject, double salary){
        this->name = name;
        this->dept = dept; //here this keyword points to the cuurent object 
        this->subject = subject;
        this->salary = salary;
    }

    //copy constructor
    Teacher(Teacher &orgobj){  //pass by reference, where we pass the original object
        cout<<"Hi i am custom copy constructor"<<endl;
        this->name = orgobj.name;
        this->dept = orgobj.dept;
        this->subject = orgobj.subject;
        this->salary = orgobj.salary;
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

    void getinfo(){
        cout << "name == "<<name << endl;
    cout << "t1 dept == "<<dept << endl;
    cout << "t1 subject == "<<subject<<endl;
    cout << "t1 salary == "<<salary << endl;
    }

};

int main (){
    Teacher t1("mahan","science","biology",50000);  //whenever the object is created the constructor is called internally , which cant be seen by user 
    t1.getinfo();

    Teacher t2(t1);  // here default copy constructor invoked 
    t2.getinfo();
    return 0;
}