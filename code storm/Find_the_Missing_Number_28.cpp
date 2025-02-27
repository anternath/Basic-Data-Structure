#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int ary[n];
    for(int i=0; i<n; i++){
        cin>>ary[i];
    }
    for(int i=0; i<n-1; i++){
        if(ary[i]+1!=ary[i+1]){
            cout<<ary[i]+1;
        }
    }
    return 0;
}