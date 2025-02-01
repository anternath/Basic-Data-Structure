#include<bits/stdc++.h>
using namespace std;
int main(){
    list<int>mylist;
    int n,op,val;
    cin>>n;
    while(n--){
        cin>>op>>val;
        if(op==0){
            mylist.push_front(val);
        }
        else if(op==1){
            mylist.push_back(val);
        }
        else if(op==2){
            if(val<mylist.size()){
                mylist.erase(next(mylist.begin(),val));
            }
        }
        cout<<"L -> ";
        for(auto it=mylist.begin(); it!=mylist.end(); it++){
            cout<<*it<<" ";
        }
        cout<<endl;
        cout<<"R -> ";
        for(auto it=mylist.rbegin(); it!=mylist.rend(); it++){
            cout<<*it<<" ";
        }
        cout<<endl;
        
    }
    return 0;
}