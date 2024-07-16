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
    ListNode* partition(ListNode* head, int x) {
        vector<int> papu;
        vector<int> tapu;
        ListNode* temp=head;
        while(temp!=NULL){
            if(temp->val<x){
                tapu.push_back(temp->val);
            }
            else{
                papu.push_back(temp->val);
            }
            temp=temp->next;
        }
        temp=head;
        reverse(tapu.begin(),tapu.end());
        reverse(papu.begin(),papu.end());
        while(papu.size()!=0 || tapu.size()!=0){
            if(tapu.size()!=0){
                temp->val=tapu.back();
                tapu.pop_back();
                temp=temp->next;
            }
            else if(papu.size()!=0){
                temp->val=papu.back();
                papu.pop_back();
                temp=temp->next;
            }
        }
        return head;
    }
};