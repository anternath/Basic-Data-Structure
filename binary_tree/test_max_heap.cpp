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
        int cur_ind= v.size()-1;
        while(cur_ind!=0){
            int par_ind= (cur_ind-1)/2;
            if(v[cur_ind]>v[par_ind]){
                swap(v[cur_ind],v[par_ind]);
                cur_ind=par_ind;
            }
            else break;
        }
    }
    for(int val:v){
        cout<<val<<" ";
    }
    return 0;
}