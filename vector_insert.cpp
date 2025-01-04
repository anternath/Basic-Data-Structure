#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v={10,20,40,50,60};
    v.insert(v.begin()+2,30);
    for(int x:v){
        cout<<x<<" ";
    }
    cout<<endl;
    //jodi multiple value insert korte chai tobe
    vector<int>v1={70,80,90,100};
    v.insert(v.begin()+6,v1.begin(),v1.begin()+4);
    for(int x:v){
        cout<<x<<" ";
    }
    return 0;
}