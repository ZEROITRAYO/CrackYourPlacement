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
    void reorderList(ListNode* head) {
        vector<int>v;
        ListNode *curr = head;        

        while(curr){
            v.push_back(curr->val);
            curr = curr->next;
        }

        int low =0, high = v.size()-1;
        ListNode *temp = head;

        while(low<=high && temp!= NULL ){
            temp->val = v[low++];
            temp = temp->next;

            if(temp == NULL) break;
            temp->val = v[high--];
            temp = temp->next;
        }
    }
};