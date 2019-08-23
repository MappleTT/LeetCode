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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* head = new ListNode(0);
        ListNode* p = head;
        ListNode* a = l1;
        ListNode* b = l2;
        while(a != NULL && b != NULL){
            if(a->val < b->val){
                p->next = a;
                a = a->next;
            }
            else{
                p->next = b;
                b = b->next;
            }

            p = p->next;
        }

        if(a != NULL)
            p->next = a;
        else
            p->next = b;

        ListNode* ret = head->next;
        head->next = NULL;
        delete head;
        return ret;
    }


};