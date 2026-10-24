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
    ListNode* removeNodes(ListNode* head) {
        vector<int>ans;
        ListNode*temp=head;
        while(temp!=nullptr){
            ans.push_back(temp->val);
            temp=temp->next;
        }
        vector<int>val;
        int max=-1;
        for(int i=ans.size()-1;i>=0;i--){
            if(ans[i]>=max){
             val.push_back(ans[i]);
             max=ans[i];
        }
        }
        ListNode*dummy=new ListNode(0);
        temp=dummy;
        for(int i=val.size()-1;i>=0;i--){
            temp->next=new ListNode(val[i]);
            temp=temp->next;
        }
        return dummy->next;
        
    }
};