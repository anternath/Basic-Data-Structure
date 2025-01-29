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
        ListNode* tem=head;
        int cnt=0;
        while(tem!=NULL){
            cnt++;
            tem=tem->next;
        }
        return cnt;
    }
    ListNode* swapNodes(ListNode* head, int k) {
        if(head->next==NULL){
            return head;
        }
        ListNode* tem= head;
        ListNode* tem1= head;
        for(int i=1; i<k; i++){
            tem=tem->next;
        }
        cout<<tem->val<<endl;
        int t=size(head)-k;
        for(int j=1; j<=t; j++){
            tem1=tem1->next;
        }
        cout<<tem1->val;
        swap(tem->val,tem1->val);
        return head;
    }
};