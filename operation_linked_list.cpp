#include<bits/stdc++.h>
using namespace std;
int main(){
    list<int>list1={20,40,50,30,10,60};
    list1.remove(60);
    list1.sort();
    list1.unique();//must be sorted linked list, duplicate value remove kore
    for(int val: list1){
        cout<<val<<" ";
    }
    cout<<endl;
    list1.sort(greater<int>());
    for(int val: list1){
        cout<<val<<" ";
    }
    cout<<endl;
    list1.reverse();
    for(int val:list1){
        cout<<val<<" ";
    }
    cout<<endl;
    return 0;
}