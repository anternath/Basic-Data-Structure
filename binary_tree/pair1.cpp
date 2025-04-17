#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
    string name;
    int roll;
    Student(string name, int roll){
        this->name=name;
        this->roll=roll;
    }
};
class cmp{
    public:
    bool operator()(Student a,Student b){
        if(a.name>b.name) return true;
        else if(a.name<b.name) return false;
        else{
            if(a.roll<b.roll) return true;
            else return false;
        }
    }
};
int main(){
    int n;
    cin>>n;
    priority_queue<Student,vector<Student>,cmp>qp;
    while(n--){
        string name;
        int roll;
        cin>>name;
        cin>>roll;
        Student obj(name,roll);
        qp.push(obj);
    }
    while(!qp.empty()){
        cout<<qp.top().name<<" "<<qp.top().roll<<endl;
        qp.pop();
    }
    return 0;
}