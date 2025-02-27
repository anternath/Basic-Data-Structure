#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    stack<char>st;
    for(char ch:s){
        if(ch==')'){
            if(st.top()!='('){
                cout<<"False";
                break;
            }
            else{
                st.pop();
            }
        }
        else if(ch=='}'){
            if(st.top()!='{'){
                cout<<"False";
                break;
            }
            else{
                st.pop();
            }
        }
        else if(ch==']'){
            if(st.top()!='['){
                cout<<"False";
                break;
            }
            else{
                st.pop();
            }
        }

        else st.push(ch);
    }
    if(st.empty()){
        cout<<"True";
    }
    else{
        cout<<"False";
    }
    return 0;
}