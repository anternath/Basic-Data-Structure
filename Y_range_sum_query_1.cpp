#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    vector<int>v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    
    for(int i=0; i<m; i++){
        int a,b;
        int sum=0;
        cin>>a>>b;
        for(int j=a-1; j<b; j++){
            sum= sum+v[j];
        }
        cout<<sum<<endl;
    }
    return 0;
}