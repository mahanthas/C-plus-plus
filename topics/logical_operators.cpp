#include<bits/stdc++.h>
using namespace std;

int main(){
    int a = 100;
    int b = 200;
    int c = 300;

    if(a >0 && b >0 && c>0){
        printf("all the provided number are greater than 0 \n");
    }
    string str = "Mahan";
    int len = str.length();

    printf("length of the string is : %d \n",len);

    if(a>0 || b<0){
        printf("print this line only when one of the condition\n");
    }
}