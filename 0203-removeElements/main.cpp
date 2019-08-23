class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        while(head!=NULL&&head->val==val){
            ListNode *node=head;
            head=head->next;
            node->next=NULL;
        }
        if(head==NULL)
            return NULL;
        ListNode *prev=head;
        while(prev->next!=NULL){
            if(prev->next->val==val){
                ListNode *retnode=prev->next;
                prev->next=retnode->next;
                retnode->next=NULL;
            }
            else
                prev=prev->next;
        }
        return head;
    }
};