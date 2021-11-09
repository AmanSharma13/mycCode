#include<bits/stdc++.h>
using namespace std;

int partition(int arr[], int low, int high){
    // {9 ,7, 8, 1, 10}
    int pivot = arr[high]; // pivot
    int i = low-1 ;

    for (int j = low ;j <= high; j++)
    {
        // if current element is smaller than pivot
        if(arr[j] < pivot){
            i++; // increment index of smaller element
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;

        }
    }
    //swap
    int temp = arr[i+1];
    arr[i+1] = arr[high];
    arr[high] = temp;
    return (i+1);
}

void quickSort(int arr[], int low, int high){

    if(low<high){
        int pi  = partition(arr, low, high);

        quickSort(arr, low ,pi-1);
        quickSort(arr, pi+1, high);

    }
}


int main(){
    int arr[] = {9 ,7, 8, 1, 10};
    int n = 5;

    quickSort(arr, 0, n-1);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    return 0;
}