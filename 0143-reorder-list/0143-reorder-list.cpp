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
        vector<ListNode*>ans;
        ListNode*temp=head;
        while(temp!=nullptr){
            ans.push_back(temp);
            temp=temp->next;
        }
        int lft=0;
        int rgt=ans.size()-1;
        while(lft<rgt){
          ans[lft]->next=ans[rgt];
          lft++;
          if(lft==rgt){
            break;
          } 
          ans[rgt]->next= ans[lft];
          rgt--;
        }
        ans[lft]->next=nullptr;



        
    }
};