#include<bits/stdc++.h>
using namespace std;
int main(){
    priority_queue<int,vector<int>,greater<int>>pq;
    int n;
    cin>>n;
    while(n--){
        int v;
        cin>>v;
        pq.push(v);
    }
    int k;
    cin>>k;
    while(k--){
        int m;
        cin>>m;
        if(m==0){
            int p;
            cin>>p;
            pq.push(p);
            cout<<pq.top()<<endl;
        }
        else if(m==1){
            if(!pq.empty()){
                cout<<pq.top()<<endl;
            }
            else{
                cout<<"Empty"<<endl;
            }
        }
        else if(m==2){
            if(!pq.empty()){
                pq.pop();
                if(!pq.empty()){
                    cout<<pq.top()<<endl;
                }
                else{
                    cout<<"Empty"<<endl;
                }
            }
            else{
                cout<<"Empty"<<endl;
            }
        }
    }
    return 0;
}