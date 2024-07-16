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
    bool isPalindrome(vector<int> element){
        int left=0;
        int right=element.size()-1;

        while(left<=right){
            if(element[left]!=element[right]){
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
    bool isPalindrome(ListNode* head) {
        vector<int> ele;
        while(head!=NULL){
            ele.push_back(head->val);
            head=head->next;
        }
        bool flag=isPalindrome(ele);
        return flag;
    }
};