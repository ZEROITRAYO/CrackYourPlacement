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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        vector<int> l1;
        while(list1!=NULL){
            l1.push_back(list1->val);
            list1=list1->next;
        }
        while(list2!=NULL){
            l1.push_back(list2->val);
            list2=list2->next;
        }

        sort(l1.rbegin(),l1.rend());
        ListNode* ans= new ListNode(0);
        ListNode* temp= ans;

        while(l1.size()!=0){
            ListNode* node= new ListNode(l1.back());
            l1.pop_back();
            temp->next=node;
            temp=temp->next;
        }

        return ans->next;
    }
};