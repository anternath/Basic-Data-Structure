#include<bits/stdc++.h>
using namespace std;
int main(){
    string name;
    cin>>name;
    vector<int>v1(26,0);
    for(char ch:name){
       int val= ch-97;
       v1[val]++;
    }
    for(int i=0; i<26; i++){
        if(v1[i]!=0){
            char ch1= i+97;
            cout<<ch1<<" : "<<v1[i]<<endl;
        }
    }

    return 0;
}