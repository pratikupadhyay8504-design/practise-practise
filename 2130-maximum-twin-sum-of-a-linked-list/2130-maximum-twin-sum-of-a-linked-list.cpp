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
    int pairSum(ListNode* head) {
        vector<int>ans;
        ListNode*temp=head;
        while(temp!=nullptr){
            ans.push_back(temp->val);
            temp=temp->next;
        }
        int cusum=0;
        int mxsum=0;
        int l=0;
        int h=ans.size()-1;
        while(l<h){
            cusum=ans[l]+ans[h];
            l++;
            h--;
            mxsum=max(cusum,mxsum);
        }
        return mxsum;

    }
};