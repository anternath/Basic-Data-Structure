#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin>>n;
    vector<long long>v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    vector<long long>v1(n);
    v1[0]=v[0];
    for(int i=1; i<n; i++){
        v1[i]= v1[i-1]+v[i];
    }
    for(int i=n-1; i>=0; i--){
        cout<<v1[i]<<" ";
    }
    return 0;
}