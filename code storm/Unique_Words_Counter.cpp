#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    stringstream ss;
    string word;
    vector<string>v;
    ss<<s;
    int cnt=0;
    bool check=false;
    while(ss>>word){
        if(v.size()==0){
            v.push_back(word);
            cnt++;
        }
        else{
            for(int i=0; i<v.size(); i++){
                if(word==v[i])
                check=true;
            }
            if(check==false){
                cnt++;
            }
            else{
                check=false;
            }
            v.push_back(word);
        }
    }
    cout<<cnt;
    return 0;
}