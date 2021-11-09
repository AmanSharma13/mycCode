// 4 concept are there in 1 bit manupualtion
//1.get bit
//2. set bit
//3. clear bit
//4. update bit - it is nothing but update bit and  set bit


#include<bits/stdc++.h>
using namespace std;

//first 
int getBit(int n, int pos){
    return ((n &(1<<pos))!=0);
}

//second setbit

int setBit(int n, int pos){
    return (n | (1<<pos));
}

//third clearBit
int clearBit(int n, int pos){
    int mask = ~(1<<pos);
    return (n & mask);
}

//fourth update bit
int updateBit(int n, int pos, int value){
    int mask = ~(1<<pos);
    n = n & mask;
    return (n | (value<<pos));
}
int main(){
    //for getBit
    cout<<getBit(5, 2)<<endl;
    //for setbit
    cout<<setBit(5, 1)<<endl;
    //for clearBit
    cout<<clearBit(5, 2)<<endl;
    //for updateBit
    cout<<updateBit(5, 1, 1)<<endl;
    return 0;
}
