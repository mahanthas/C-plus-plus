#include<bits/stdc++.h>
using namespace std;

struct person
{
    int a;
    string name;
    double salary;
};

int main(){
    person p1;
    p1.a = 10;
    p1.name = "Mahantha";
    p1.salary = 30000.90;

    cout<<"roll no : "<<p1.a<<endl;
    cout<<"name is : "<<p1.name<<endl;
    cout<<"salary is : "<<p1.salary<<endl;
    return 0;
}