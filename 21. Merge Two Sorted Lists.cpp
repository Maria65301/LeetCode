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
        ListNode *head = new ListNode(0);
        ListNode *rst = head;
        while(l1!=NULL&&l2!=NULL)
        {
            if(l1->val < l2->val)
            {
                rst->next = l1;
                l1 = l1->next;
            }
            else
            {
                rst->next = l2;
                l2 = l2->next;
            }
            rst = rst->next;
        }
        if(l1!=NULL) rst->next=l1;
        if(l2!=NULL) rst->next=l2;
        rst=head->next;
        delete head;
        return rst;
    }
};
