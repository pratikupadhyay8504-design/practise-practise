/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/
class Solution {
public:
    Node* flatten(Node* head) {
        Node* curr = head;
        while (curr != nullptr) {
            if (curr->child != nullptr) {
                Node* nextNode = curr->next;
                Node* childNode = curr->child;
                
                curr->next = childNode;
                childNode->prev = curr;
                curr->child = nullptr;
                
                Node* tail = childNode;
                while (tail->next != nullptr) {
                    tail = tail->next;
                }
                
                tail->next = nextNode;
                if (nextNode != nullptr) {
                    nextNode->prev = tail;
                }
            }
            curr = curr->next;
        }
        return head;
    }
};
