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
    
    int getSize(ListNode* head) {
        int size = 0;
        while(head) {
            size++;
            head = head -> next;
        }
        return size;
    }
    
    ListNode* deleteMiddle(ListNode* head) {
        if(!head -> next) 
            return NULL;
        int mid = getSize(head) / 2 - 1;
        ListNode* ptr = head;
        while(mid--) {
            ptr = ptr -> next;
        }
        ptr -> next = ptr -> next -> next;
        return head;
    }
};