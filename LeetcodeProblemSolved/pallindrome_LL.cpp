/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    void insert_at_tail(ListNode *& head, ListNode* & tail, int val){
        ListNode* newnode= new ListNode(val);
        if(head==NULL){
            head=newnode;
            tail=head;
            return;
        }
        tail->next=newnode;
        tail=newnode;
    }
    void reverse(ListNode* &head, ListNode* cur){
        if(cur->next==NULL){
            head=cur;
            return;
        }
        reverse(head,cur->next);
        cur->next->next=cur;
        cur->next=NULL;
    }
    void print(ListNode* head){
        ListNode* tem= head;
        while(tem!=NULL){
            cout<<tem->val<<" ";
            tem=tem->next;
        }
    }
    bool isPalindrome(ListNode* head) {
        ListNode * head1= NULL;
        ListNode* tail1=NULL;
        ListNode* tem=head;
        while(tem!=NULL){
            insert_at_tail(head1,tail1,tem->val);
            tem=tem->next;
        }
        reverse(head1,head1);
        ListNode *tem1= head;
        ListNode* tem2=head1;
        while(tem1!=NULL){
            if(tem1->val!=tem2->val){
                return false;
            }
            tem1=tem1->next;
            tem2=tem2->next;
        }
        print(head1);
        return true;
    }
};