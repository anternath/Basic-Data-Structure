#include<bits/stdc++.h>
using namespace std;
int main(){
    list<int>list1={10,20,30,40,50};
    //begin()+2 O(1) complexity te try kore 
    // list1.insert(list1.begin()+2,100); 

    //ar jeheto LL e insert O(n) complexity tai er khetre alada itarator use kora hoi
    list1.insert(next(list1.begin(),2),100);//eikane insert funtion O(1) and next fun O(n) e kaj kore
   
    list<int>newlist={120,110};
    list1.insert(next(list1.begin(),2),newlist.begin(),newlist.end());
    for(int val:list1){
        cout<<val<<" ";
    }
    cout<<endl;
    // list1.erase(next(list1.begin(),4));
    list1.erase(next(list1.begin(),4),next(list1.begin(),7));
    for(int val:list1){
        cout<<val<<" ";
    }
    cout<<endl;
    replace(list1.begin(),list1.end(),120,30);
    for(int val: list1){
        cout<<val<<" ";
    }
    cout<<endl;
    auto it=find(list1.begin(),list1.end(),120);
    if(it==list1.end()){
        cout<<"Not Found";
    }
    else{
        cout<<"Found";
    }
    return 0;
}