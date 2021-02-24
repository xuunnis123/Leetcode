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
    int getDecimalValue(ListNode* head) {
        int sum=0;
        for(;head!=NULL;head=head->next)
        {
            std::cout<<head->val<<endl;
            // 100->1000=2*n+0
            // 101->1010=2*n+1
            sum = (sum * 2) + head->val;
        }

        return sum;
    }
};
