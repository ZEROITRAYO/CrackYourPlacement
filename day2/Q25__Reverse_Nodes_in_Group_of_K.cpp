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

    ListNode* solve(ListNode* head,int k,int size){
        if(size<k){
            return head;
        }
        if(head==NULL){
            return NULL;
        }
        ListNode* curr=head;
        ListNode* nexter=NULL;
        ListNode* prev=NULL;
        int count=0;
        while(curr!=NULL && count<k){
            nexter=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nexter;
            count=count+1;
            
        }
        head->next=solve(nexter,k,size-k);
        return prev;
    }

    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* temp=head;
        int length=0;
        while(temp!=NULL){
            length++;
            temp=temp->next;
        }
       return solve(head,k,length);
    }
};