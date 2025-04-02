#include<bits/stdc++.h>
#include<cstdlib>
#include<time.h>
using namespace std;

void guess_number(int a){
    int g_num;
    do
    {
        scanf("%d",&g_num);
        if(g_num > a){
            printf("your guess is greater the generated number\n");
        }
        else if(g_num<a){
            printf("your guess is lesser the generated number\n");
        }
        else{
            printf("your guess is correct %d\n",a);
        }
    } while (a != g_num);
    
    printf("value of random number %d \n",a);
}

int main(){
    srand(time(0));
    int a = rand() % 100 + 1;
    printf("enter your guess between 1 - 100 \n");
    guess_number(a);
}