#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<int>st;
    stack<int>st1;
    int n;
    cin>>n;
    while(n--){
        int v;
        cin>>v;
        st.push(v);
    }
    while(!st.empty()){
        st1.push(st.top());
        st.pop();    
    }
    while(!st1.empty()){
        cout<<st1.top()<<" ";
        st1.pop();
    }
    return 0;
}