#include<iostream>
using namespace std;

int main() {
    int girlfriend[6]={12, 18, 20, 42, 8, 10};
    int key;
    cin>>key;
    
    for (int i = 0; i < 56; i++)
    {
        if (girlfriend[i]==key)
        {
            cout<<"The key ("<<key<<") is present at array index "<<girlfriend[i];
        } 
    }
    cout<<endl;
    
}