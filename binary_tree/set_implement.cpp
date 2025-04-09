#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    set<int>st;
    while(n--){
        int v;
        cin>>v;
        st.insert(v);
    }
    for(auto it=st.begin(); it!=st.end(); it++){
        cout<<*it<<" ";
    }
    if(st.count(60)){
        cout<<"YES"<<endl;
    }
    else cout<<"NO";
    return 0;
}