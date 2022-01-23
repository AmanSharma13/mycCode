#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int rem = 0;
    int i = 0;
    int arr[50];
    while (n>0)
    {
        rem = n%2;
        arr[i] = rem;
        cout<<rem;
        n = n/2;
        i++;
    }
    
    for (int j = i-1; j > 0 ; j--)
    {
        cout<< arr[j];
    }
    cout<<endl;
    for (int j = 0; j < i; j++)
    {
        if (arr[i==0])
        {
            cout<<1;
        }
        else{
            cout<<0;
        }
        
    }

    return 0;
}