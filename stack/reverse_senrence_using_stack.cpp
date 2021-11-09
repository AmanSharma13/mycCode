#include<bits/stdc++.h>
using namespace std;

void reverseSetence(string s){
    stack<string> st;

    for (int i = 0; i < s.length(); i++)
    {
        string word = "";
        while (s[i]!=' ' && i<s.length())
        {
            word+=s[i];
            i++;
        }
        st.push(word);  
    } 

    while (!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }cout<<endl;
    
    
}

int main(){
    // stack<int> st;
    string s = "Hey, how are you doing?";
    reverseSetence(s);
    return 0;
}