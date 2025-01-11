#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            int mid= n/2;
            if(i!=mid||j!=mid){
                if(i==j){
                    cout<<"\\";
                }
                else if(i+j==n-1){
                    cout<<"/";
                }
                else{
                    cout<<" ";
                }
            }
            else if(i==mid&&j==mid){
                cout<<"X";
            }
        }
        cout<<endl;
    }
    return 0;
}