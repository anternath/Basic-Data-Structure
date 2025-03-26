#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v={50,30,40,23,32,36,25};
    int n;
    cin>>n;
    v.push_back(n);
    int cur_indx= v.size()-1;
        while(cur_indx!=0){
        
        int par_indx= (cur_indx-1)/2;
        if(v[par_indx]<v[cur_indx]){
            swap(v[par_indx],v[cur_indx]);
            cur_indx=par_indx;
        }
        else break;
    }
    for(int val:v){
        cout<<val<<" ";
    }
    return 0;
}