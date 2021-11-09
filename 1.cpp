#include <iostream> 
using namespace std; 
int main() 
{ 
	int n;
	int arr[n]; 
    int sum = 0; 
    cin>>n;
    for (int i = 0; i < n ; i++)
    {
        cin>>arr[i];
    }
    cout<<endl;
	
	for (int i = 0; i < n; i++) 
	sum += arr[i];
    cout << "Sum of given array is " << sum ; 
    return 0; 
} 
 
