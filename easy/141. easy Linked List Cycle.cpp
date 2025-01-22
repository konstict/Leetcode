/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        vector<ListNode*> a;
        while(head){
            for(int i = 0; i < a.size(); ++i){
                if(a[i] == head){
                    return true;
                }
            }
            a.push_back(head);
            head = head->next;
        }
        return false;
    }
}; // i could using set - and have easy time complexity, or mb two pointer for linked list
// 2min, 200 ms
