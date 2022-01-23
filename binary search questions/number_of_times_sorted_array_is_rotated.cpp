#include<bits/stdc++.h>
using namespace std;

// How many time a sorted array is rotated

int count(int arr[], int n){
    int start = 0;
    int end = n - 1;
    int mid = 0;
    while (start<=end)
    {
        mid =  (start+end)/2;
        int next = (mid+1)%n;
        int prev = (mid-1)%n;
        if (arr[mid]<= arr[next] && arr[mid] >= arr[prev])
        {
            return mid;
        }
        else if(arr[start] <= arr[mid]){
            start = mid+1;
        }
        else if(arr[mid] <= arr[end]){
            end = mid - 1;
        }
    }
    return -1;
}



int main(){
    int arr[10] = {10, 20, 30, 40, 50, 1, 2, 3, 4, 5};
    int c = count(arr, 10);
    cout<< c;
    return 0;
}