#include<bits/stdc++.h>
using namespace std;

int main(){
    shared_ptr<int> sp1 = make_unique<int>(20);
    shared_ptr<int> sp2 = sp1;

    cout<<"the ref count is : "<<sp1.use_count()<<endl;
    sp2.reset();
    cout<<"the ref count after reseting is : "<<sp1.use_count()<<endl;
}