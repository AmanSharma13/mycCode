#include<bits/stdc++.h>
using namespace std;

class Sol{
    public:
    
    int findComplement(int n){
        vector<int> arr;
        while (n)
        {
            arr.push_back(n%2);
            n /= 2;
        }
        // reverse the array
        for (int i = 0; i < arr.size(); i++)
        {
            arr[i] = !arr[i];
        }
        // converting above array in decimal form
        long long t = 1;

        // converting our above array into decimal form.
        for(int i = arr.size()-1; i>=0; --i) {
            n += arr[i] * t;
            t *= 2;
        }
        return n;
    }
};


int main(){
    Sol obj;
    cout<<obj.findComplement(17);
    return 0;
}