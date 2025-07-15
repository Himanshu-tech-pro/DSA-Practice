class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
    
        ListNode* dummy = new ListNode(0, head);
        ListNode* prev = dummy;

        while (head != nullptr) {
           
            if (head->next != nullptr && head->val == head->next->val) {
                int dupVal = head->val;
             
                while (head != nullptr && head->val == dupVal) {
                    ListNode* temp = head;
                    head = head->next;
                    delete temp;  
                }
                prev->next = head; 
            } else {
                prev = head;
                head = head->next;
            }
        }

        return dummy->next;
    }
};
