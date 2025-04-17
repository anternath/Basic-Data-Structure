#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        set<int>st;
        int k;
        cin>>k;
        while(k--){
            int v;
            cin>>v;
            st.insert(v);
        }
        for(auto it=st.begin(); it!=st.end(); it++){
            cout<<*it<<" ";
        }
        cout<<endl;
    }
    return 0;
}