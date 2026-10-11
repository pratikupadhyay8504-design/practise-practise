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
    ListNode* middleNode(ListNode* head) {
        ListNode*temp=head;
        int size=0;
        while(temp!=nullptr){
            temp=temp->next;
            size++;
        }
        temp=head;
        int cnt=1;
        while(temp!=nullptr){
            if((size/2)+1==cnt)
            return temp;
            cnt++;
            temp=temp->next;
        }
        return head;      
    }
};