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
    bool isPalindrome(ListNode* head) {
        vector<int>ans;
        ListNode*temp=head;
        while(temp!=nullptr){
            ans.push_back(temp->val);
            temp=temp->next;
        }
        int l=0;
        int h=ans.size()-1;
        while(l<=h){
            if(ans[l]==ans[h]){
                l++;
                h--;
            }
            else{
                return false;
            }
        }
        return true;
    }
};