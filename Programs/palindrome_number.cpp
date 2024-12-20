#include <iostream>
#include <string>

using namespace std;

int palindrome(int a){

    int orgnum = a;
    int revnum = 0;
    int remainder;

    while (a>0)
    {
        remainder = a%10; // get the last digit of number
        revnum = revnum *10 + remainder; // build the reversed number 
        a /= 10; //remove the last digit 
    }

    return revnum;
}

int main (){
    int a;
    cout << "Provide the number" << endl;
    cin>>a;

    int processedNum = palindrome(a);

    if (processedNum == a){
        cout << "Provided Number is palindrome which matches "<< a <<"with"<<processedNum<<endl;
    }
    else{
        cout << "Provided number is not palindrome which doesnt matches  "<<a<<"with"<<processedNum<<endl;
    }
}