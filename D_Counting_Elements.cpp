#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v1(n);
    int count=0;
    for(int i=0; i<n; i++){
        cin>>v1[i];
    }
    for(int i=0; i<n; i++){
        int val=v1[i]+1;
        auto it=find(v1.begin(),v1.end(),val);
        if(it!=v1.end()){
            count++;
        }
    }
    cout<<count;
    return 0;
}