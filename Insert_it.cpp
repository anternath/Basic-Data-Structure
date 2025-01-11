#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,q;
    cin>>n;
    vector<int>v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    cin>>m;
    vector<int>v1(m);
    for(int i=0; i<m; i++){
        cin>>v1[i];
    }
    cin>>q;
    v.insert(v.begin()+q,v1.begin(),v1.begin()+m);
    for(int x:v){
        cout<<x<<" ";
    }
    return 0;
}