#include<bits/stdc++.h>
using namespace std;
int main(){
    priority_queue<int,vector<int>,greater<int>>pq;
    while(true){
        int n;
        cin>>n;
        if(n==0){
            int v;
            cin>>v;
            pq.push(v);
        }
        else if(n==1){
            pq.pop();
        }
        else if(n==2){
            cout<<pq.top()<<endl;
        }
        else break;
    }
    return 0;
}