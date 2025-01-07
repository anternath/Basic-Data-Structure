#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v1(n);
    for(int i=0; i<n; i++){
        cin>>v1[i];
    }
    for(int val:v1){
        if(val<0){
            cout<<2<<" ";
        }
        else if(val>0){
            cout<<1<<" ";
        }
        else {
            cout<<val<<" ";
        }
    }
    return 0;
}