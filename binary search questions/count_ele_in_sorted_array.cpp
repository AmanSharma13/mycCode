// code works perfectly


#include<bits/stdc++.h>
using namespace std;

// for first occurence
int binarySearchF(int arr[], int size, int key){
    int start = 0;
    int end = size - 1;
    int res = -1;
    // for first occurence
    while (start <= end)
    {
        int mid = start + (end - start)/2;
        if (arr[mid] == key)
        {
            res = mid;
            end = mid - 1;
        }
        else if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return res;
}

int binarySearchL(int arr[], int size, int key){
    int start = 0;
    int end = size - 1;
    int res = -1;

    while (start <= end)
    {
        int mid = start + (end - start)/2;
        if (arr[mid] == key)
        {
            res = mid;
            start = mid + 1;
        }
        else if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return res;
}

int main(){
    int arr[10] = {1, 2, 3, 10, 10, 10, 10, 19, 32, 64};
    int first = binarySearchF(arr, 10, 10);
    int last = binarySearchL(arr, 10, 10);
    cout<<last - first + 1;
    return 0;
}