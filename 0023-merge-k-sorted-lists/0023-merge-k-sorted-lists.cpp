
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
       
        priority_queue<ListNode*, vector<ListNode*>, 
                       function<bool(ListNode*, ListNode*)>> pq([](ListNode* a, ListNode* b) {
            return a->val > b->val; 
        });
      
        for (ListNode* list : lists) {
            if (list) {
                pq.push(list);
            }
        }
      
        ListNode* dummy = new ListNode(-1);
        ListNode* current = dummy;
      
        while (!pq.empty()) {
            ListNode* node = pq.top();
            pq.pop();
            
            current->next = node;
            current = current->next;
            
            if (node->next) {
                pq.push(node->next);
            }
        }
        
        return dummy->next; 
    }
};
