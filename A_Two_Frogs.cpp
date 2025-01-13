#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int n,a,b;
    while(t--){
        
        cin>>n>>a>>b;
        if(n>2){
            bool flag=false;
            for(int i=1; i<=n; i++){
                if(a+1<=n&& a-1>=n){
                    if(a+1==b&&a-1==b){
                    flag= true;
                }
                }
                
            }
            if(flag==true){
                cout<<"YES"<<endl;
            }
            
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}