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
    ListNode* deleteMiddle(ListNode* head) {
        ListNode*temp=head;
        int size=0;
        while(temp!=nullptr){
            temp=temp->next;
            size++;
        }
        if(size==1) return nullptr;
        temp=head;
        int cnt=0;
        while(temp!=nullptr){
            if((size/2)-1==cnt){
            ListNode*todlt=temp->next;
            temp->next=temp->next->next;
            delete todlt;
        }
        cnt++;
        temp=temp->next;
    }
    return head;
        
    }
};