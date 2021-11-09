//find the two unique numbers in array in which all other elements are repeating two times
#include<bits/stdc++.h>
using namespace std;

int setBit(int n, int pos){
    return ((n & (1<<pos)) != 0);
}
//finding one unique number
int unique1(int arr[], int n){
    int xorsum = 0;
    for (int i = 0; i < n; i++)
    {
        xorsum = xorsum^arr[i];
    }
    return xorsum;
}

//finding two unique nunber
void unique2(int arr[], int n){
    int xorsum = 0;
    for (int i = 0; i < n; i++)
    {
        xorsum = xorsum^arr[i];
    }
    int tempxor  = xorsum;
    int setbit = 0;
    int pos = 0;
    while (setbit != 1)
    {
        setbit = xorsum & 1;
        pos++;
        xorsum  = xorsum << 1;
    }
    int newxor=0;
    for (int i = 0; i < n; i++)
    {
        if (setBit(arr[i], pos-1))
        {
            newxor = newxor^arr[i];
        }  
    }
    cout<<newxor<<endl;
    cout<<(tempxor^newxor)<<endl;   
}
int main(){
    int arr[8] = {1, 2, 3, 5, 7, 3, 2, 1};
    unique2(arr, 8);
    return 0;
}