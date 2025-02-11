#include<bits/stdc++.h>
using namespace std;

class Complex{
    double real,imag;
    public:
    Complex(double r =0,double i=0){
        this->real = r;
        this->imag = i;
    }
    void display(){
        cout<<real<<"+"<<imag<<"i"<<endl;
    }
    Complex operator+(const Complex &c){
        return Complex(real + c.real,imag+c.imag);
    }
};

int main(){
    Complex c1(2.5,3.5);
    Complex c2(4.5,6.7);
    c1.display();
    c2.display();
    
    Complex result = c1+c2;
    result.display();
    
    return 0;
}