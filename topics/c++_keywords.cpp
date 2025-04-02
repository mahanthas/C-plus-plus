#include<bits/stdc++.h>
using namespace std;

//const,volatile,static,global,constexpr,mutable,extern,register

/*syntax :
    1.const: constant value , cannot be changed anytime if changed using pointer throws undefined behaviour 
        const <data_type> <variable_name> = <value>;
        const int x =10;
        stored in readonly datasegment
    2.volatile : this keyowrd tells the compiler that its value can change anytime
        volatile <data_type> <variable_name> = <value>;
        volatile int flag = 1;
        stroed in data segment;
    3.static: this keyword initailzes the value only once to the variable 
        static <data_type> <varaible_name> = <value>;
        static int a = 10;
        stored in data segment;
    4.mutable: used for altering const value in classes
        mutable <data_type> <variable_name> = <value>;
        mutable int a =0;
        stored in heap segment;
    5.constexpr: ensures values are compiled at compile time
        constexpr <data_type> <func_name> {}
        constexpr int squr(int a, int b){return a*b;}
        stored in code/text segment
    6.extern: Used when we need to get value to another file
        extern <data_type> <var_name> = <value>;
        extern int a = 10;
        stored in data segment;
    7.register: suggests storing values in cpu 
        register <data_type> <var_name> = <value>;
        register int a = 1;
        stored in cpu registers or in stack 
    8.inline: this is used to call the code directly without calling function 
        inline <data_type> <func_name> {}

*/
int b = 100;
volatile int c =20;

void const_func(){
    const int a =100;
    printf("value of const a is : %d\n",a);
}

void volatile_func(){
    while(c !=20){
        printf("volatile has been triggered \n");
    }// to modify the volatile you need to use the threading here will check later
}

void static_fuc1(){
    static int s =10;
    s++;
    printf("value of s is : %d\n",s);
}
class A{
    public:
    mutable int mut = 10;
    void change() const{
        mut = 100;
    }
    void show(){
        printf("value of mut is : %d\n",mut);
    }
};

inline int square(int num){
    return num *num;
}

int main(){
    const_func();
    volatile_func();
    static_fuc1();
    static_fuc1();
    static_fuc1();

    A a1;
    a1.change();
    a1.show();

    printf("sqaure of number 10 is : %d\n",square(10)); //here the calling will be 10*10 , there wont be any calling of sqaure function 
    return 0;
}