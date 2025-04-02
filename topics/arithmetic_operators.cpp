#include<bits/stdc++.h>

using namespace std;

int main(){
    int a = 100;
    int b = 200;
    int c = 3;
    float sum,div,mul,modl,sub;

    sum = a+b;
    sub = a-b;
    mul = a*b*c;
    modl = b % c;
    div = float(a)/c;

    cout<<"sum a + b: "<< sum <<endl;
    cout<<"sub a-b: "<<sub<<endl;
    cout<<"mul of a,b,c: "<<mul<<endl;
    cout<<"div of a /c : "<<div<<endl;
    cout<<"modl of b % c: "<<modl<<endl;

    printf("div of a/c is : %0.3f\n",div);

    printf("value of a before post-increment is : %d\n",a); //100
    a++; //post-increment
    printf("value of a after post-increment is : %d\n",a); //101
    
    printf("value of a before pre-increment is : %d\n",a); //101
    ++a; //preincrement
    printf("value of a after pre-increment is : %d\n",a); //102

    

    printf("value of a before post-Decrement is : %d\n",a); //102
    a--; //post-Decrement
    printf("value of a after post-Decrement is : %d\n",a); //101
    
    printf("value of a before pre-Decrement is : %d\n",a); //101
    --a; //pre-Decrement
    printf("value of a after pre-Decrement is : %d\n",a); //100

}