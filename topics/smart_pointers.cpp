#include<bits/stdc++.h>
using namespace std;

int main(){
    unique_ptr<int> up = make_unique<int>(10);
    unique_ptr<int> up1 (new int(1000));
    cout<<"up1 value is : "<<*up1<<endl;
    unique_ptr<int> up2 = move(up1);

    cout<<"up address is : "<<up<<endl;
    cout<<"up value is : "<<*up<<endl;

    cout<<"up2 value is : "<<*up2<<endl;

    shared_ptr<int> sp = make_shared<int>(10);
    shared_ptr<int> sp1 = sp;
    cout<<"sp value is : "<<*sp<<endl;
    cout<<"sp1 value is : "<<*sp1<<endl;
}