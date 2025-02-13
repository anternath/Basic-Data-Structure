#include<bits/stdc++.h>
using namespace std;
void reverseStack(stack<int>&s){
    if(s.empty()) return;
    int x= s.top();
    s.pop();
    reverseStack(s);
    stack<int>newstack;
    while(!s.empty()){
        newstack.push(s.top());
        s.pop();
    }
    newstack.push(x);
    while(!newstack.empty()){
        s.push(newstack.top());
        newstack.pop();
    }
}
int main(){
    stack<int>st;
    int n;
    cin>>n;
    while(n--){
        int v;
        cin>>v;
        st.push(v);
    }
    reverseStack(st);
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    return 0;
}