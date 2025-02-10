#include<iostream>
#include<thread>

using namespace std;
void sum (int a, int b){
    double c;
    c =a + b;

    cout<<"sum of given numbers is :"<<c<<endl;
}
int main(){
    jthread t(sum,89,90);
    t.join();

}