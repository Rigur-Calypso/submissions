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
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode* previous = dummy;
        while (true){
            ListNode* knode = previous;
            for (int i = 0; i < k; ++i) {
                knode = knode->next;
                if (!knode) break;
            }
            if (!knode) break;
            ListNode* prev = knode->next;
            ListNode* curr = previous->next;
            for (int i = 0; i < k; ++i) {
                 ListNode* temp_next = curr->next;
                 curr->next = prev;
                 prev = curr;
                 curr = temp_next;
            }
            ListNode* tail = previous->next;
            previous->next = prev;
            previous = tail;
        }
        ListNode* nh = dummy->next;
        delete dummy;
        return nh;
    }
};

