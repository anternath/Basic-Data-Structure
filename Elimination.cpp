#include<bits/stdc++.h>
using namespace std;
void check(string s){
    stack<char>st;
    for(char ch:s){
        if((!st.empty())&&(st.top()=='0'&& ch=='1')){
            st.pop();
        }
        else{
            st.push(ch);
        }
    }
    cout<<(st.empty()?"YES":"NO")<<endl;
}
int main(){
    int n;
    cin>>n;
    while(n--){
        string str;
        cin>>str;
        check(str);
    }
    return 0;
}