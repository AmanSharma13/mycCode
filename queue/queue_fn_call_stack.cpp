/*
There are two appraches to this problem

this is done using two stack
*/


#include<iostream>
#include<stack>
using namespace std;

class Queue{
    stack<int> s1;
    // stack<int> s2;
    public:
    void push(int x){
        s1.push(x);
    }
    int pop(){
        if (s1.empty())
        {
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        int x = s1.top();
        s1.pop();
        if (s1.empty())
        {
            return x;
        }
        int item = pop();
        s1.push(x);
        return item;

    }
    bool empty(){
        if (s1.empty())
        {
            return true;
        }
        return false;
    }
};

int main(){
    Queue z;
    z.push(1);
    z.push(2);
    z.push(3);
    z.push(4);
    cout<<z.pop()<<endl;
    z.push(5);

    cout<<z.pop()<<endl;
    cout<<z.pop()<<endl;
    cout<<z.pop()<<endl;
    cout<<z.pop()<<endl;
    cout<<z.pop()<<endl;

    cout<<z.empty()<<endl;
    return 0;
}