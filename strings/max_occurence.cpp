#include<bits/stdc++.h>
using namespace std;
int main(){
    string s = "nsnifjboisfjoidjsopmpa";
    int freq[23];
    for (int i = 0; i < 23; i++)
    {
        freq[0] = 0;
    }
    
    for (int i = 0; i < s.size(); i++)
    {
        freq[s[i]-'a']++;
    }
    char ans ='a';
    int maxf = 0;

    for (int i = 0; i < 23; i++)
    {
        if (freq[i]>maxf)
        {
            maxf = freq[i];
            ans = i+'a'; 
        }
            
    }
    cout<<maxf<<" "<<ans<<endl;
    
    
    return 0;
}