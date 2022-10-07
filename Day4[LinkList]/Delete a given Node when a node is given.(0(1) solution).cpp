/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution
{
public:
  void deleteNode(ListNode *node)
  {

    node->val = node->next->val;
    node->next = node->next->next;
  }
};
/*Time Complexity: O(1)

Reason: It is a two-step process that can be obtained in constant time.

Space Complexity: O(1)

Reason: No extra data structure is used.
*/