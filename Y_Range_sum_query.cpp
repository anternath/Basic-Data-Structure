#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n,m;
    cin>>n>>m;
    vector<int>v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    vector<long long>pre(n);
    pre[0]=v[0];
    for(int i=1; i<n; i++){
        pre[i]=v[i]+pre[i-1];
        
    }
    
    
    for(int i=0; i<m; i++){
        int l,r;
        cin>>l>>r;
        long long sum;
        if(l==1){
            sum=pre[r-1];
        }
        else{
            sum=pre[r-1]-pre[l-2];
        }
        cout<<sum<<endl;
    }
    return 0;
}