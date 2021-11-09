/* Check that threre exits two elements in an array 
such that their sum is equal to given k*/
#include "bits/stdc++.h"
using namespace std;

bool pairsum(int arr[],int n, int k){
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n-1; j++)
        {
            if (arr[i]+arr[j]==k)
            {
                cout<<i<<" "<<endl;
                
            }
        }
    }
}

int main(){
    int arr[]={2,4,7,11,14,16,20,21};
    int k=31;
    cout<<pairsum(arr,8,k)<<endl;
    
}