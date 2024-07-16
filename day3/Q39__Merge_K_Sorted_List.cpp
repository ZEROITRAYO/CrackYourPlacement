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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<int> temp;

        for(int i=0;i<lists.size();i++){
            ListNode* curr=lists[i];
            while(curr!=NULL){
                temp.push_back(curr->val);
                curr=curr->next;
            }
            
        }

        sort(temp.rbegin(),temp.rend());
        ListNode* ans= new ListNode(0);
        ListNode* tem= ans;

        while(temp.size()!=0){
            ListNode* node= new ListNode(temp.back());
            tem->next=node;
            tem=tem->next;
            temp.pop_back();

        }
        return ans->next;
    }
};