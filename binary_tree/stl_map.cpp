#include<bits/stdc++.h>
using namespace std;
int main(){
    map<string,int>mp;
    // mp.insert({"anter",10});
    // mp.insert({"ridoy",20});
    // mp.insert({"rakib",50});
    // mp.insert({"sakib",43});

    mp["anter"]=10;
    mp["ridoy"]=20;
    mp["rakib"]=11;
    mp["anter"]=40;
    cout<<mp["anter"]<<endl;
    // if(mp["sakib"]){
    //     cout<<"YES"<<endl;
    // }
    // else cout<<"NO"<<endl;
    if(mp.count("ridoy")){
        cout<<"YES"<<endl;
    }
    else cout<<"NO";
    // for(auto it=mp.begin(); it!=mp.end(); it++){
    //     cout<<it->first<<" "<<it->second<<endl;
    // }
    return 0;
}