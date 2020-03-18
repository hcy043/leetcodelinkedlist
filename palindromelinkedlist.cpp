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
    bool isPalindrome(ListNode* head) {
        ListNode* temp;
        temp=head;
        int len=0;
        stack<int> s;
        while(temp!=NULL)
        {
            s.push(temp->val);

            temp=temp->next;

            len++;
        }

        temp=head;
        while(temp!=NULL)
        {
            int val=s.top();
            s.pop();
            if(val!=temp->val)
                return false;
            temp=temp->next;

            len++;
        }
        return true;

    }
};
