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

class Account {
    private:   //here data hiding happens 
    string password;
    double balance;

    public:
    string username;
    float accountid;
};

int main (){
    Teacher t1;
    t1.name = "Mahantha";
    t1.dept = "electrical";
    cout << "name == "<<t1.name << endl;
    cout << "dept == "<<t1.dept << endl;

    t1.setsalary(25000);

    cout << "salary == "<< t1.getsalary() <<endl;
    return 0;
}