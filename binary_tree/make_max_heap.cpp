#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v;
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        v.push_back(x);
        int cur_indx= v.size()-1;
        while(cur_indx!=0){
        
        int par_indx= (cur_indx-1)/2;
        if(v[par_indx]<v[cur_indx]){
            swap(v[par_indx],v[cur_indx]);
            cur_indx=par_indx;
        }
        else break;
        
    }
    }
    for(int val:v){
        cout<<val<<" ";
    }
    return 0;
}