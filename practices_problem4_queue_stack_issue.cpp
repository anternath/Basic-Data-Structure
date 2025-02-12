#include<bits/stdc++.h>
using namespace std;
int main(){
    queue<int>qu;
    stack<int>st;
    int n;
    cin>>n;
    while(n--){
        int v;
        cin>>v;
        qu.push(v);
    }
    while(!qu.empty()){
        st.push(qu.front());
        qu.pop();
    }
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    return 0;
}