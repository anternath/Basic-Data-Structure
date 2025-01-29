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
    int size(ListNode* head){
        ListNode* tem= head;
        int cnt=0;
        while(tem!=NULL){
            cnt++;
            tem=tem->next;
        }
        return cnt;
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(size(head)==n){
            if(head==NULL){
                return head;
            }
            if(head->next==NULL){
                head=NULL;
                return head;
            }
            else if(head->next!=NULL){
                ListNode* deletenode= head;
                head=deletenode->next;
                delete deletenode;
                return head;
            }
        }
        ListNode* tem= head;
        
        int pos= size(head)-n;
        for(int i=1; i<pos; i++){
            tem=tem->next;
        }
        ListNode* deletenode= tem->next;
        tem->next=deletenode->next;
        delete deletenode;
        return head;
    }
};