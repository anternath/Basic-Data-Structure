#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v={10,20,70,40,50,60};
    replace(v.begin(),v.end(),70,30);
    for(int x:v){
        cout<<x<<" ";
    }
    return 0;
}