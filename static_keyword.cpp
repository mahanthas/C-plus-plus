#include<bits/stdc++.h>
using namespace std;

void counter(){
    //int value = 0; // here the value will be initialized to zero everytime the fucntion is called
    static int value = 0; // now it will be initialized only once and then it will continue incrementing
    value++;
    cout<<value<<endl;
}

class person{
    static int roll_no;
    static string name;
    public:
    void increment_rollno(){
        roll_no++;
        cout<<roll_no<<endl;
    }
    static void display(){
        cout<<"name is : "<<name<<endl;
    }
};
int person::roll_no = 20;
string person::name = "Mahan";

int main(){
    counter(); //1
    counter(); //2

    person p1;
    //p1.roll_no = 20; // here i have initalized roll_no to 20 
    p1.increment_rollno();
    person p2;
    p2.increment_rollno();

    person::display();  //static members functions need to access diretly , cant be accessed through objects
    person p3;
    p3.display();
    return 0;
}