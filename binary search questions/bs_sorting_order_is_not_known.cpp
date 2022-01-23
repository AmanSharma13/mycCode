#include <bits/stdc++.h>
using namespace std;
int binarySearch(int arr[], int size, int key)
{
    if (arr[0] > arr[1])
    {
        int start = 0;
        int end = size - 1;

        while (start <= end)
        {
            int mid = start + (end - start) / 2;
            if (arr[mid] == key)
            {
                return mid;
            }
            else if (key > arr[mid])
            {
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }
    }
    else
    {
        int start = 0;
        int end = size - 1;

        while (start <= end)
        {
            int mid = start + (end - start) / 2;
            if (arr[mid] == key)
            {
                return mid;
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
    }
    return -1;
}
int main()
{
    // conditions for apply binary search
    // array must be sorted
    int arr[10] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    int key = 9;
    cout << binarySearch(arr, 10, 9);
    return 0;
}