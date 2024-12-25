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
        cout<<"Hi i am Teacher class constructer"<<endl;
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
        cout<<"Hi i am custom copy constructor for Teacher class"<<endl;
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

class Department
{

    private:
    string name;

    public:
    void getName()
    {
        cout<< this->name<<endl;
    }

    Department(string name)
    {
        this->name = name;
        cout<<"\nconstructor called for the Department class"<<endl;;
    }

    // Its a good practice to define a copy constructor like this if default constructor needs to be used
    // The compiler will use default constructor even if we didnt define it like this
    Department(Department &other) = default; 


};

int main (){
    Teacher t1("mahan","science","biology",50000);  //whenever the object is created the constructor is called internally , which cant be seen by user 
    t1.getinfo();

    Teacher t2(t1);  // here user defined copy constructor is invoked 
    t2.getinfo();

    Department d1("Electrical Engineering");
    d1.getName();

    Department d2(d1); //The class doesnt have a copy constructor defined so default copy constructor is used
    d2.getName();
    return 0;
}