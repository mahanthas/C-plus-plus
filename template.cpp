#include<bits/stdc++.h>
using namespace std;

template <typename  T>
T add(T a,T b){
    return a+b;
}

template <typename C>
class temp_class{
    public:
    C value;
    temp_class(C value){
        this->value = value;
    }
    void display(){
        cout<<"provided value is : "<<value<<endl;
    }
};

int main(){
    cout<<"sum is : "<<add(2,5)<<endl;
    cout<<"sum is : "<<add(2.5,7.8)<<endl;

    temp_class tp(25);
    tp.display();

    temp_class tp1(3.567);
    tp1.display();

    return 0;
}

