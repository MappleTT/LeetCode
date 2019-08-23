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
    ListNode* deleteDuplicates(ListNode* head) {
        vector<int>a;
        while(head)
        {
            a.push_back(head->val);
            head=head->next;
        }
        vector<int>::iterator it=unique(a.begin(),a.end());
        a.erase(it,a.end());
        ListNode *ans=new ListNode (0);
        ListNode *x=ans;
        for(int i=0;i<a.size();i++)
        {
            ListNode *p=new ListNode (a[i]);
            x->next=p;
            x=p;
        }
        ListNode *q=ans->next;
        delete ans;
        return q;
    }
};