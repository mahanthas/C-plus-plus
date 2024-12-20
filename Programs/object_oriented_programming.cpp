/*
    Question : 
        1. Create a class Student with attributes name, rollNo, and marks. Write methods to input and display the data of a student.
        2. Create a class Circle with a method to calculate the area of a circle.
*/

#include <iostream>
#include <math.h>
using namespace std;

class Student{
    public:
    string name;
    double rollNo;
    int marks;

    void setinfo(string name, int rollNo, int marks){
        this->name = name;
        this->rollNo = rollNo;
        this->marks = marks;
    }

    void getinfo(){
        cout<<"Student Name is : "<<name<<endl;
        cout<<"Student RollNumber is : "<<rollNo<<endl;
        cout<<"Student marks is : "<<marks<<endl;
    }
};

class Circle{
    public:
    double radius;
    float area;

    void area_of_circle(double radius){
        area = (M_PI) * (radius * radius);

        cout << "Area of circle for given radius is : "<< area<<endl;
    }
};

int main(){
    Student s1,s2,s3;
    Circle c1;
    cout<<"Enter Student name , rollno, marks : "<<endl;
    cin>>s1.name>>s1.rollNo>>s1.marks;
    s1.getinfo();
    s2.setinfo("Sindhu",1678,90);
    s3.setinfo("Ramesh",1346,87);

    s2.getinfo();
    s3.getinfo();

    cout<<"Enter the radius of the circle : ";
    cin>>c1.radius;
    c1.area_of_circle(c1.radius);


}