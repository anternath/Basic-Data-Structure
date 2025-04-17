#include<bits/stdc++.h>
using namespace std;
bool cmp(pair<string,int>a,pair<string,int>b){
    if(a.first<b.first) return true;
    else if(a.first>b.first) return false;
    else{
        if(a.second>b.second) return true;
        else return false;
    }
}
int main(){
    int n;
    cin>>n;
    vector<pair<string,int>>v;
    while(n--){
        string name;
        int roll;
        cin>>name>>roll;
        v.push_back({name,roll});
    }
    sort(v.begin(),v.end(),cmp);
    for(auto p:v){
        cout<<p.first<<" "<<p.second<<endl;
    }
    return 0;
}