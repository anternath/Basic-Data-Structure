#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int ary1[1000];
    int ary2[1000];
    int ary3[2000];
    for(int i=0; i<n; i++){
        cin>>ary1[i];
    }
    for(int i=0; i<n; i++){
        cin>>ary2[i];
    }
    for(int i=0; i<n; i++){
        ary3[i]=ary2[i];
    }
    for(int i=0; i<n; i++){
        ary3[i+n]=ary1[i];
    }
    for(int i=0; i<n*2; i++){
        cout<<ary3[i]<<" ";
    }
    return 0;
}