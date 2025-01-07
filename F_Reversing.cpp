#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v1(n);
    for(int i=0; i<n; i++){
        cin>>v1[i];
    }
    for(int i=v1.size()-1; i>=0; i--){
        cout<<v1[i]<<" ";
    }
    return 0;
}