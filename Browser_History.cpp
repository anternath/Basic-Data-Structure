#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    string name;
    Node* next;
    Node* prev;
    Node(string name){
        this->name=name;
        this->next=NULL;
        this->prev=NULL;
    }
};
void insert_at_tail(Node* &head,Node*& tail, string name){
    Node* newnode= new Node(name);
    if(head==NULL){
        head=newnode;
        tail=head;
        return ;
    }
    tail->next=newnode;
    newnode->prev=tail;
    tail=newnode;
}
void print(Node* head){
    Node* tem=head;
    while(tem!=NULL){
        cout<<tem->name<<" ";
        tem=tem->next;
    }
    cout<<endl;
}
int main(){
    Node* head= NULL;
    Node* tail=NULL;
    string nm;
    while(true){
        cin>>nm;
        if(nm=="end")break;
        else{
            insert_at_tail(head,tail,nm);
        }
    }
    int n;
    cin>>n;
    string qu;
    getchar();
    Node* tem1= head;
    while(n--){
        getline(cin,qu);
        stringstream ss(qu);
    string word;
    bool flag=false;
    while(ss>>word){
        if(qu=="prev"){
           if(tem1->prev==NULL){
            flag=true;
           }
           else{
            tem1=tem1->prev;
           }
        }
        else if(qu=="next"){
            if(tem1->next==NULL){
                flag=true;
            }
            else{
                tem1=tem1->next;
            }
        }
        else if(word=="visit"){
            while(ss>>word){
                Node* tem= head;
                while(tem!=NULL){
                    if(tem->name==word){
                        tem1=tem;
                        break;
                    }
                    else if(tem->next==NULL){
                        flag=true;
                        break;
                    }
                    else{
                        tem=tem->next;
                    }
                }
            }

        }
        
    }
    if(flag==true){
        cout<<"Not Available"<<endl;
        flag=false;
    }
    else{
        cout<<tem1->name<<endl;
    }

    }
    return 0;
}