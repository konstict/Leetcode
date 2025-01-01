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
        ListNode* t = head;
        int sizen = 0;
        while(head != nullptr){
            head = head->next;
            sizen++;
        }
        n = sizen-n;
        head = t;
        for(int i = 0; i < n-1; ++i){
            head = head->next;
        }
        if(n == 0){
            t = head->next;
        }
        else if(head->next != nullptr){
            head->next = head->next->next;
        }
        else{
            head->next = nullptr;
        }
        return t;
    }
}; // 15 min, 0 ms