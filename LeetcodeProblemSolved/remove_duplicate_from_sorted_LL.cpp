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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL){
            return head;
        }
        ListNode* tem=head;
        while(tem->next!=NULL){
            if(tem->val==tem->next->val){
                ListNode* deletenode= tem->next;
                tem->next=tem->next->next;
                delete deletenode;
            }
            else{
                tem=tem->next;
            }
        }
        return head;
    }
};