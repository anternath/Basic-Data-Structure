#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v1;
    cout<<"size of v1 :"<<v1.size()<<endl;
    vector<int>v2(4);
    cout<<"size of v2 :"<<v2.size()<<endl;
    vector<int>v3(5,10);
    cout<<"size of v3 :"<<v3.size()<<endl;
    for(int i=0; i<v3.size(); i++){
        cout<<v3[i]<<" ";
    }
    cout<<endl;
    vector<int>v4={10,20,30};
    for(int i=0; i<v4.size(); i++){
        cout<<v4[i]<<" ";
    }
    cout<<endl;
    
    vector<int>v5(v4);
    cout<<v5[2]<<endl;
    int a[3]={3,2,1};
    vector<int>v6(a,a+3);
    cout<<v6.size()<<endl;
    for(int i=0; i<v6.size(); i++){
        cout<<v6[i]<<" ";
    }
    return 0;
}