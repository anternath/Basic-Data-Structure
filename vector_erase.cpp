#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v={10,20,20,60,30,40};
v.erase(v.begin()+2,v.begin()+4);
for(int x:v){
    cout<<x<<" ";
}
    return 0;
}