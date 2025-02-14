#include<bits/stdc++.h>
using namespace std;
int main(){
    queue<string>q;
    int n;
    cin>>n;
    while(n--){
        int op;
    cin>>op;
    if(op==0){
        string st;
        cin>>st;
        q.push(st);
    }
    if(op==1){
       if(q.empty()){
        cout<<"Invalid"<<endl;
       }
       else{
        cout<<q.front()<<endl;
        q.pop();
       }
    }
    }
    return 0;
}