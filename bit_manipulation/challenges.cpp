#include<bits/stdc++.h>
using namespace std;
//to check is the given number is power of 2 or not
bool ispoweroftwo(int n){
    return (n && !(n & n-1));
}
//to check number of one's
int numberofones(int n){
    int count = 0;
    while (n)
    {
        n = n & (n-1);
        count++;
    }
    return count;
    
}
int main(){
    //for power of two
    cout<<ispoweroftwo(16)<<endl;
    //for number of one's
    cout<<numberofones(19)<<endl;
    return 0;
}