#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    sort(a,a+n);
    while(m--){
        int x;
        cin>>x;
        int L=0, R=n-1;
        
        bool flag= false;
        while(L<=R){
            int mid= (L+R)/2;
            if(a[mid]==x){
                flag=true;
                break;
            }
            if(a[mid]>x){
                R=mid-1;
            }
            else{
                L=mid+1;
            }
        }
        if(flag==true){
            cout<<"found"<<endl;
        }
        else{
            cout<<"not found"<<endl;
        }
    }
     
}