#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v={10,20,30,40,50};
    auto it= find(v.begin(),v.end(),40);
    if(it==v.end()){
        cout<<"Not Found";
    }
    else cout<<"Found";
    return 0;
}