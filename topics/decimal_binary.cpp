#include<bits/stdc++.h>
using namespace std;

//method1: using bitwise operator and loop
void decimaltobinary(int dec){
    int binary[32];
    int i =0;

    while(dec > 0){
        binary[i] = dec % 2;
        dec = dec / 2;
        i++;
    }
    for(int j = i - 1;j >= 0;j--){
        cout<<binary[j];
    }
    cout<<endl;
}

//method2: using bitset
void bitset_func(int dec){
    cout<<bitset<8>(dec)<<endl;
    printf("%s\n",bitset<8>(dec).to_string().c_str());
}

//flip the bitset
void flip_bit(int dec){
    bitset<4> binary;
    binary = bitset<4>(dec);
    binary.flip();
    cout<<"flipped binary is : "<<binary<<endl;
    cout<<"flipped decimal is :  "<<binary.to_ulong()<<endl;
}

int main(){
    printf("Provide the decimal value: \n");
    int decimal;
    scanf("%d",&decimal);
    decimaltobinary(decimal);
    bitset_func(decimal);
    flip_bit(decimal);
}