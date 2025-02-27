#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    vector<char>st;
    
    for(char ch:s){
        st.push_back(ch);
    }
    int v[st.size()]={1};
    int k=0;
    for(int i=0; i<st.size()-1; i++){
        if(st[i]==st[i+1]){
            v[k]++;
        }
        else{
            k++;
        }
    }
    int mx=INT_MIN;
    for(int i=0; i<st.size(); i++){
        if(v[i]>=mx){
            mx=v[i];
        }
    } 
    cout<<mx;
    return 0;
}