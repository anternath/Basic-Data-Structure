#include<bits/stdc++.h>
using namespace std;
bool cmp(pair<string,int>a,pair<string,int>b){
    if(a.second>b.second) return true;
    else return false;
}
int main(){
    int n;
    cin>>n;
    while(n--){
    map<string,int>mp;
    string sen;
    getchar();
    getline(cin,sen);
    stringstream ss(sen);
    string word;
    while(ss>>word){
        mp[word]++;
    }
    vector<pair<string,int>>v;
    for(auto p:mp){
        v.push_back({p.first,p.second});
    }
    sort(v.begin(),v.end(),cmp);
    // for(auto h:v){
    //     cout<<h.first<<" "<<h.second<<endl;
    // }
    
    cout<<v[0].first<<" "<<v[0].second<<endl;
    }
    return 0;
}