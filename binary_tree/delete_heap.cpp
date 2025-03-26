#include<bits/stdc++.h>
using namespace std;
void insert_in_heap(vector<int>&v,int val){
    for(int i=0; i<val; i++){
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
}
void delete_heap(vector<int>&v){
    int val;
    cin>>val;
    swap(v[0],v[v.size()-1]);
    v.pop_back();
    int cur_idx= v[0];
    while(cur_idx<v.size()){
        if(v[cur_idx*2+1]>v[cur_idx] || v[cur_idx*2+2]>v[cur_idx]){
            int mx= max(v[cur_idx*2+1],v[cur_idx*2+2]);
            if(mx==v[cur_idx*2+1]){
                swap(v[cur_idx*2+1],v[cur_idx]);
                cur_idx=v[cur_idx*2+1];
            }
            else if(mx==v[cur_idx*2+2]){
                swap(v[cur_idx*2+2],v[cur_idx]);
                cur_idx=v[cur_idx*2+2];
            }
        }
    }
}
int main(){
    int n;
    cin>>n;
    vector<int>v;
    insert_in_heap(v,n);
    delete_heap(v);
    for(int val:v){
        cout<<val<<" ";
    }
    return 0;
}