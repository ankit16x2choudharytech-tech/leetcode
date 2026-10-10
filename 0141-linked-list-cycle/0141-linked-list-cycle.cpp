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
        ListNode* curr  = head;
        unordered_set<ListNode*> check;
        
        while(curr!=NULL ){
            if(check.find(curr)!=check.end()){
                return true;
            }
            else{
                check.insert(curr);
                curr = curr->next;
            }


        }
        return false;
    }
};