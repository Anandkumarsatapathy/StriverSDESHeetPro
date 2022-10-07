/*1.Pointer Approach*/
// Time Complexity : O(n)
// Auxiliary Space : O(1)
ListNode *reverseList(ListNode *head)
{
  ListNode *prev = NULL;
  ListNode *curr = head;
  ListNode *next = NULL;
  while (curr != NULL)
  {
    next = curr->next;
    curr->next = prev;
    prev = curr;
    curr = next;
  }
  head = prev;
  return head;
}
/*2.Pointer Approach * /