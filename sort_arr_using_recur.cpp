//must be strictly increasing
#include<bits/stdc++.h>
using namespace std;

bool sort(int arr[], int n){
    if (n==1)
    {
        return true;
    }
    
    bool rstarr = sort(arr+1, n-1);
    return (arr[0]>arr[1] && rstarr);
    
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<sort(arr, n)<<endl;
    
    
    return 0;
}