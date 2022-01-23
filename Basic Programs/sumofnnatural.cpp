#include<bits/stdc++.h>
using namespace std;

int sum(int num){
    
    int s=((num*num) + num)/2;
    return s;
}

int main() {
    int n;
    cin>>n;
    cout<<sum(n)<<endl;
}