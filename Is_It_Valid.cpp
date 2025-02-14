#include<bits/stdc++.h>
using namespace std;
void check(string s){
    stack<char>st;
    for(char c:s){
        if((!st.empty() )&& ((st.top()=='1' && c=='0')|| (st.top()=='0' && c=='1')) ){
            st.pop();
        }
        else{
            st.push(c);
        }
    }
    if(st.empty()){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
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