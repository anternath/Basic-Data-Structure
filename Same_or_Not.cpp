#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<int>st;
    queue<int>q2;
    int n,k;
    cin>>n>>k;
    while(n--){
        int v;
        cin>>v;
        st.push(v);
    }
    while(k--){
        int v;
        cin>>v;
        q2.push(v);
    }
    bool check=true;
    cout<<n<<endl<<k<<endl;
    if(n==k){
        while(!st.empty()){
            if(st.top()!=q2.front()){
                check=false;
                break;
            }
            else{
                st.pop();
                q2.pop();
            }
        }
    }
    else{
        check=false;
    }
    if(check){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}