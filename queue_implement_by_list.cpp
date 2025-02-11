#include<bits/stdc++.h>
using namespace std;
class myQueue{
    public:
    list<int>l;
    void push(int val){
        l.push_back(val);
    }
    int front(){
        return l.front(); 
    }
    void pop(){
        l.pop_front();
    }
    int size(){
        return l.size();
    }
    bool empty(){
        return l.empty();
    }
    
};
int main(){
    myQueue qu;
    int n;
    cin>>n;
    while(n--){
        int v;
        cin>>v;
        qu.push(v);
    }
    while(!qu.empty()){
        cout<<qu.front()<<endl;
        qu.pop();
    }
    return 0;
}