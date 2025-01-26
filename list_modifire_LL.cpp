#include<bits/stdc++.h>
using namespace std;
int main(){
    list<int>list1;
    list<int>newlist={10,20,30,40,50,60};
    //assign normal system
    // list1=newlist;

    newlist.push_back(70);
    newlist.pop_front();// O(1) complexity

    newlist.pop_back();
    newlist.push_front(100);
    // use assign funtion
    list1.assign(newlist.begin(),newlist.end());
    for(int val: list1){
        cout<<val<<" ";
    }
    cout<<endl;
    return 0;
}