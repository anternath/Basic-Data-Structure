#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<int>st;
    queue<int>qu;
    int v;
    cin>>v;
    while(v--){
        int n;
        cin>>n;
        st.push(n);
    }
    int k;
    cin>>k;
    while(k--){
        int l;
        cin>>l;
        qu.push(l);
    }
    bool check=true;
    if(st.size()==qu.size()){
        while(!st.empty()){
            if(st.top()!=qu.front()){
                check=false;
                break;
            }
            else{
                st.pop();
                qu.pop();
            }
        }
    }
    else{
        check= false;
    }
    if(check){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}