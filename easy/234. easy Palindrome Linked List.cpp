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
    bool isPalindrome(ListNode* head) {
        stack<int> a;
        ListNode* temp = head;
        int sizen = 0;
        while(temp != nullptr){
            sizen++;
            temp=temp->next;
        }
        if(sizen == 1){
            return true;
        }
        for(int i = 0; i < (sizen)/2; ++i){
            a.push(head->val);
            head = head->next;
        }
        for(int i = (sizen)/2; i < sizen; ++i){
            if(head->val == a.top()){
                a.pop();
            }
            head = head->next;
        }
        if (a.empty()){
            return true;
        }
        else{
            return false;
        }
    }
}; //11 min, 5 ms