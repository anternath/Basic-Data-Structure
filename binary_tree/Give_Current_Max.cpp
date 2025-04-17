#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
    string name;
    int roll;
    int marks;
    Student(string name, int roll, int marks){
        this->name=name;
        this->roll=roll;
        this->marks=marks;
    }
};
class cmp{
    public:
    bool operator()(Student a,Student b){
        if(a.marks==b.marks) return a.roll>b.roll;
        return a.marks<b.marks;
    }
};
int main(){
    int n;
    cin>>n;
    priority_queue<Student,vector<Student>,cmp> pq;
    while(n--){
        string name;
        int roll,marks;
        cin>>name>>roll>>marks;
        Student obj(name,roll,marks);
        pq.push(obj);
    }
    int v;
    cin>>v;
    while(v--){
        int k;
    cin>>k;
    if(k==0){
        string name;
        int roll,marks;
        cin>>name>>roll>>marks;
        Student obj1(name,roll,marks);
        pq.push(obj1);
        cout<<pq.top().name<<" "<<pq.top().roll<<" "<<pq.top().marks<<endl;
    }
    else if(k==1){
        if(!pq.empty()){
            cout<<pq.top().name<<" "<<pq.top().roll<<" "<<pq.top().marks<<endl;
        }
        else{
            cout<<"Empty"<<endl;
        }
    }
    else if(k==2){
        if(!pq.empty()){
            pq.pop();
            if(!pq.empty()){
                cout<<pq.top().name<<" "<<pq.top().roll<<" "<<pq.top().marks<<endl;
            }
            else cout<<"Empty"<<endl;
        }
    }
    }
    return 0;
}