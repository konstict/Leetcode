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
    int pairSum(ListNode* head) {
        int num = 0;
        int size = 0;
        stack<int> a;
        ListNode* temp = head;
        while(temp != nullptr){
            size++;
            temp = temp->next;
        }
        int size2 = size/2;
        for(int i = 0; i < size2; ++i){
            a.push(head->val);
            head = head->next;
        }
        for(int i = size2; i < size; ++i){
            int t = a.top()+head->val;
            if(t > num){
                num = t;
            }
            a.pop();
            head = head->next;
        }
        return num;
    }
}; // 1ms, 10 min
