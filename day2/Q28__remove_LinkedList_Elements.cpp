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
        if(head==NULL){
            return NULL;
        }
        if(head->next==NULL && val==head->val){
            return NULL;
        }
        ListNode* lol=new ListNode(0);
        lol->next=head;
        ListNode* curr=lol;
        while(curr!=NULL && curr->next!=NULL){
            if(curr->next->val==val){
                curr->next=curr->next->next;
            }
            else{
                curr=curr->next;
            }
        }
        return lol->next;

    }
};