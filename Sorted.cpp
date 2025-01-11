#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        int m;
        cin>>m;
        int a[m];
        for(int i=0; i<m; i++){
            cin>>a[i];
        }
        bool flag = false;
        for(int i=1; i<m; i++){
            if(a[i-1]>a[i]){
                flag = true;
                break;
            }
        }
        if(flag==false){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}