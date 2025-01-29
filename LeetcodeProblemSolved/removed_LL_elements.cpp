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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode * tem= head;
        if(head==NULL){
            return head;
        }
        if(tem->next==NULL){
            if(head->val==val){
                head=NULL;
                return head;
            }
            else{
                return head;
            }
        }
        
        while(tem->next!=NULL){
            if(tem->next->val==val){
                ListNode* deletenode =tem->next;
                tem->next=deletenode->next;
                delete deletenode;
            }
            else{
                tem=tem->next;
            }
        }
        if(head->val==val){
            if(head->next!=NULL){
                ListNode* deletenode= head;
                head=head->next;
                delete deletenode;
            }
            else{
                head=NULL;
                return head;
            }
        }
        return head;
    }
};