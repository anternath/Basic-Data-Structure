#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int ary[n];
    int sum=0;
    for(int i=0; i<n; i++){
        cin>>ary[i];
        if(i%2!=0){
            sum+=ary[i];
        }
    }
    cout<<sum;
   
    return 0;
}