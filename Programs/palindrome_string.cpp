/* Question : Write a program to take a number and check for palindrome or not 
    
    Input : MALAYALAM
    output : String is a palindrome
    
    Input: MAHAN
    output: String is not a palindrome
*/

#include <iostream>
#include <string>

using namespace std;

string palindrome(string a){
    string revstring;
    
    for (int i = a.length() - 1; i >= 0; i--)  //here take the length of a string and decrement the length value till its zero
    {
        revstring += a[i]; //append the letter one by one to reversed string from the loop
    }

    return revstring;
}

int main(){
    string a;
    cout<<"Enter the string: ";
    cin>> a;

    string reversed_string = palindrome(a);

    if (a==reversed_string)
    {
        cout << "Provided string is an palindrome ---> " << reversed_string<<endl;
    }
    else{
        cout << "provided string ia not an palindrome  --> " << reversed_string<< endl;
    }
}