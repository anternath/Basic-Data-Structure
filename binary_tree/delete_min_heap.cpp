#include<bits/stdc++.h>
using namespace std;
void insert_node(vector<int> &v, int n){
    int x;
    for(int i=0; i<n; i++){
       cin>>x;
       v.push_back(x);
       int cur_idx= v.size()-1;
    
    while(cur_idx!=0){
        int par_idx=(cur_idx-1)/2;
        if(v[cur_idx]<v[par_idx]){
            swap(v[cur_idx],v[par_idx]);
            cur_idx=par_idx;
        }
        else break;
    } 
    }
    
}
void delete_heap(vector<int>&v){
    swap(v[0],v[v.size()-1]);
    v.pop_back();
    int cur_idx= 0;
    while(true){
        int left_idx= cur_idx*2+1;
        int right_idx= cur_idx*2+2;
        int last_idx= v.size()-1;
        if(left_idx<=last_idx && right_idx<=last_idx){
            if(v[left_idx]<= v[right_idx]&& v[left_idx]< v[cur_idx]){
                swap(v[cur_idx],v[left_idx]);
                cur_idx=left_idx;
            }
            else if(v[right_idx]<= v[left_idx]&& v[right_idx]<v[cur_idx]){
                    swap(v[cur_idx],v[right_idx]);
                    cur_idx=right_idx;
            }
            else break;
        }
        else if(left_idx<=last_idx){
                if(v[left_idx]<v[cur_idx]){
                    swap(v[left_idx],v[cur_idx]);
                    cur_idx=left_idx;
                }
                else break;
        }
        else if(right_idx<=last_idx){
            if(v[right_idx]<v[cur_idx]){
                swap(v[right_idx],v[cur_idx]);
                cur_idx=left_idx;
            }
            else break;
        }
        else break;
    }
}
int main(){
    vector<int>v;
    int n;
    cin>>n;
    insert_node(v,n);
    delete_heap(v);
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    return 0;
}