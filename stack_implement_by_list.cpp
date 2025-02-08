#include<bits/stdc++.h>
using namespace std;
class myStack{
    public:
    list<int>list1;
    void push(int val){
        list1.push_back(val);
    }
    void pop(){
        list1.pop_back();
    }
    int size(){
        return list1.size();
    }
    int top(){
        return list1.back();
    }
    bool empty(){
        if(list1.size()==0) return true;
        else return false;
    }
};
int main(){
    myStack st;
    int n;
    cin>>n;
    while(n--){
        int v;
        cin>>v;
        st.push(v);
    }
    while(!st.empty()){
        cout<<st.top()<<endl;
    st.pop();
    }
    return 0;
}