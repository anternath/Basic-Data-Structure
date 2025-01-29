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
        int n=0;
        while(tem!=NULL){
            n++;
            tem=tem->next;
        }
        return n;
    }
    ListNode* middleNode(ListNode* head) {
        int siz=size(head)/2;
        ListNode* tem= head;
        for(int i=1; i<=siz; i++){
            tem=tem->next;
        }
        return tem;
    }
};