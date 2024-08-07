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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==NULL || head->next==NULL){
            return NULL;
        }
        ListNode* temp=head;
        int length=0;
        while(temp!=NULL){
            length++;
            temp=temp->next;
        }

        temp=head;
        if(length-n==0){
            return head->next;
        }
        int diff= length-n-1;

        while(diff>=1){
            temp=temp->next;
            diff--;
        }
        temp->next=temp->next->next;
        return head;

    }
};