/* Question : Write a program to print patterns for given number 
    
    Input : 4
    output : 1
            12
            123
            1234
    
*/

#include <iostream>
using namespace std;

void pattern(){
    cout<<"Enter the number to print :"<<endl;
    int a;
    cin>>a;

    for (int i= 1;i<=a;i++)
    {
        for (int j = 1; j <= i; j++){
            cout<<j;
        }
        cout<<"\n";
    }
}

int main(){
    pattern();
}