#include<bits/stdc++.h>
using namespace std;

class A{
    public:
    A(){
        cout<<"i am class A constructor"<<endl;
    }
    ~A(){
        cout<<"i am class A destrcutor"<<endl;
    }
};

int main(){
    shared_ptr<A> sp (new A);

    {
        cout<<"reference count is : "<<sp.use_count()<<endl;

        shared_ptr<A> sp2 = sp;

        cout<<"refernce count is : "<<sp.use_count()<<endl;
    }
    cout<<"refernce count is : "<<sp.use_count()<<endl;
}