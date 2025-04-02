#include<bits/stdc++.h>
using namespace std;

int main(){
    bitset<4> binary(5);
    cout<<binary<<endl;
    bitset<4> flipped;
    flipped = ~binary;
    cout<<flipped<<endl;
    cout<<flipped.to_ulong()<<endl;
}