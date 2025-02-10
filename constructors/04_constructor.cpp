/*
Virtual Functions and Polymorphism:
Create a base class Shape with a virtual function area(). Derive classes Circle and Rectangle that override the area() function. Write a program to calculate and display the area of different shapes using pointers.
*/
#include<bits/stdc++.h>
using namespace std;

class Shape{
    public:
    Shape(){
        cout<<"i am Shape constructor"<<endl;
    }
    virtual double area(){
        cout<<"this is virtual function called area in shape class"<<endl;
        return 0;
    }

    //pure-virtual function :
    virtual double area() = 0;

    virtual ~Shape(){
        cout<<"i am Shape Destructor"<<endl;
    }
};

class Circle:public Shape{
    public:
    double radius;
    Circle(double radius){
        cout<<"I am circle constructor"<<endl;
        this->radius = radius;
    }
    double area() override{
        return radius * radius;
    }
    ~Circle(){
        cout<<"I am Circle Destructor"<<endl;
    }
};
class Rectangle:public Shape{
    public:
    double length;
    double width;
    Rectangle(double length,double width){
        cout<<"I am Rectangle Constructor"<<endl;
        this->length = length;
        this->width = width;
    }
    double area() override{ // here we override the base area() function
        return length *width;
    }
    ~Rectangle(){
        cout<<"I am Rectangle Destrcutor"<<endl;
    }
};
int main(){
    Circle c1(6);
    double area_of_circle = c1.area();
    Rectangle r1(10.4,15.6);
    double area_of_rect = r1.area();
    
    cout<<"The area of circle is : "<<area_of_circle<<endl;
    cout<<"The area of Rectangle is : "<<area_of_rect<<endl;
    
    Shape* shapeptr; // here we create a raw pointer where it points to base class and provide the virtual function access
    
    shapeptr = new Circle(10);
    cout<<"The area of circle is : "<<shapeptr->area()<<endl;
    delete shapeptr;
    
    shapeptr = new Rectangle(10,50);
    cout<<"The area of Rectangle is : "<<shapeptr->area()<<endl;
    delete shapeptr;
}