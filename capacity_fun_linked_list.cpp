#include<bits/stdc++.h>
using namespace std;
int main(){
    list<int>list1={10,20,30,40};
    cout<<list1.max_size()<<endl;
    // list1.clear();
    // cout<<list1.empty(); if LL is empty return 1 or return 0;
    list1.resize(2);
    for(int val: list1){
        cout<<val<<" ";
    }
    cout<<endl;
    list1.resize(5);
    for(int val: list1){
        cout<<val<<" ";
    }
    cout<<endl;
    return 0;
}