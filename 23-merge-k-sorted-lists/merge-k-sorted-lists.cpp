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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<int>ans;
        int n = lists.size();
        for(int i = 0;i<n;i++){
            ListNode* current = lists[i];
            while(current != nullptr){
                ans.push_back(current->val);
                current = current->next;
            }
        }
        sort(ans.begin(),ans.end());
        ListNode* dummy = new ListNode(0);
        ListNode* tail = dummy;
        for(int i = 0;i<ans.size();i++){
            ListNode* new_node = new ListNode(ans[i]);
            tail->next = new_node;
            tail = tail->next;
        }
        return dummy->next;
    }
};
