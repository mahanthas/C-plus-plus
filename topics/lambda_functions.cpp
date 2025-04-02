#include<bits/stdc++.h>
using namespace std;

auto sum = [](int a,int b){ return a+b;};

int main(){
    printf("provide me two numbers \n");
    int a,b;
    scanf("%d%d",&a,&b);
    printf("sum of provided numbers is : %d\n",sum(a,b));
}