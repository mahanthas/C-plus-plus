#include<bits/stdc++.h>
using namespace std;

auto add = [](auto x,auto y)->auto{
    return x+y;
};

int main(){
    auto z = 10.78;
    auto t =30.258;
    cout<<add(z,t)<<endl;
}