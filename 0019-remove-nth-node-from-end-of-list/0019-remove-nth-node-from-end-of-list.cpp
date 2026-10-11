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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode*temp=head;
        int size=0;
        int cnt=1;
        while(temp!=nullptr){
            temp=temp->next;
            size++;
        }
        temp=head;
        if(size==n){
            head=head->next;
            delete temp;
            return head;
        }
        while(temp!=nullptr){
        if(size-n==cnt){
            ListNode*todlt=temp->next;
            temp->next=temp->next->next;
            delete todlt;

        } 
            temp=temp->next;
            cnt++;

        }  
        return head;

        
        
    }
};