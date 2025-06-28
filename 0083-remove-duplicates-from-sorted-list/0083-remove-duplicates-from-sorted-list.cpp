class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* current = head;
        
        while (current != nullptr && current->next != nullptr) {
            if (current->val == current->next->val) {
                // Skip the duplicate node
                ListNode* temp = current->next;
                current->next = current->next->next;
                delete temp;  // optional: frees memory
            } else {
                current = current->next;
            }
        }
        
        return head;
    }
};