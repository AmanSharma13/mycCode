#include<iostream>
using namespace std;
int main(){
    int n;
    int sum;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        sum  += arr[i];
        
    } 
    cout<<sum<<endl; 
}