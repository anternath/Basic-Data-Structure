#include<bits/stdc++.h>
using namespace std;
int main(){
    //list size and print first value
    list<int>list1(10,7);
    cout<<list1.front()<<endl;
    cout<<list1.size()<<endl;

    //copy list linked list
    list<int>demolist={10,20,30,40};
    list<int>list2(demolist);
    //print list standard with itarator pointer
    for(auto it=list2.begin(); it!=list2.end(); it++){
        cout<<*it<<" ";
    }
    cout<<endl;

    //copy list form array
    int ary[5]={1,2,3,4,5};
    list<int>list3(ary,ary+5);
    for(auto it=list3.begin(); it!=list3.end(); it++){
        cout<<*it<<" ";
    }
    cout<<endl;

    //copy list form vector
    vector<int>v={100,200,300,400};
    list<int>list4(v.begin(),v.end());
    //print only value use for each loop
    for(int val:list4){
        cout<<val<<" ";
    }
    cout<<endl;
    return 0;
}