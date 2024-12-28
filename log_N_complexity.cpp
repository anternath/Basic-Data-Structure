#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    // while(n>0){//O(logN)
    //     int a= n%10;
    //     n=n/10;
    //     cout<<a<<" ";
    // }
    
    //example 2
    for(int i=1; i<n; i=i*2){//complexity O(logN)
        cout<<i<<endl;
    }
}

