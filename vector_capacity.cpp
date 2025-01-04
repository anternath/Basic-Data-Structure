#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v;
    cout<<v.capacity()<<endl;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    cout<<v.capacity()<<endl;
    v.push_back(50);
    cout<<v.capacity()<<endl;
    v.clear();
    cout<<"vector capacity after clear :"<<v.capacity()<<endl;
    cout<<"vector size after clear :"<<v.size()<<endl;
    cout<<"clear function delete memory not value! such :"<<endl;
    cout<<"we can access value after using clear fuction :";
    cout<<v[0]<<" "<<v[1]<<endl;
    vector<int>v2={10,20,30,40,50,60};
    v2.resize(3);
    for(int i=0; i<v2.size(); i++){
        cout<<v2[i]<<" ";
    }
    cout<<endl;
    v2.resize(6,100);
    for(int i=0; i<v2.size(); i++){
        cout<<v2[i]<<" ";
    }
    return 0;
}