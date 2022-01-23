#include<bits/stdc++.h>
using namespace std;
int power(int n, int p){
    if (p==0)
    {
        return 1;
    }
    
    int prevPower = power(n, p-1);
    return n*prevPower;

}
int fib(int n){
    if (n==0)
    {
        return 0;
    }
    else if (n==1)
    {
        return 1;
    }

    return fib(n-1) + fib(n-2);
    
    
}
int main(){
    // int n,p;
    // cin>>n>>p;
    // cout<<power(n, p)<<endl;
    int n;
    cin>>n;
    cout<<fib(n)<<endl;
    return 0;
}