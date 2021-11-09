#include<bits/stdc++.h>
using namespace std;

bool isValid(string s){
    int n = s.size();

    stack<char> st;
    bool ans = true;
    for (int i = 0; i < n; i++)
    {
        if (s[i]=='{' ||s[i]=='[' ||s[i]=='(')
        {
            st.push(s[i]);
        }
        else if (!st.empty() and  s[i]==')')
        {
            if (st.top()=='(')
            {
                st.pop();
            }
            else
            {
                ans=false;
                break;
            }
        }
        else if (!st.empty() and s[i]==']')
        {
            if (st.top()=='[')
            {
                st.pop();
            }
            else
            {
                ans=false;
                break;
            }
        }
        else if (!st.empty() and s[i]=='}')
        {
            if (st.top()=='{')
            {
                st.pop();
            }
            else
            {
                ans=false;
                break;
            }
        }    
    }
    if(!st.empty())
        return false;

    return ans;

}

int main(){
    string s = "{[()]}";

    if (isValid(s))
    {
        cout<<"valid string"<<endl;
    }
    else{
        cout<<"not a valid string"<<endl;
    }
    
    return 0;
}