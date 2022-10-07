/*1.Naive Dummy Approach*/
/*
 Tc:-O(M+N)
 SC:-O(M+N)
*/
ListNode *mergeTwoLists(ListNode *l1, ListNode* l2)
{
  if (l1 == null || l2 == null)
    return l1 != null ? l1 : l2;
  ListNode *dummy = new ListNode(-1);
  ListNode *prev = dummy;
  ListNode *c1 = l1;
  ListNode *c2 = l2;
  while (c1 != null && c2 != null)
  {
    // compare between two linkedlist
    if (c2->val < c1>val)
    {
      prev->next = c2;
      c2 = c2->next;
    }
    else
    {
      prev->next = c1;
      c1 = c1->next;
    }
    prev = prev->next;
  }
  prev->next = c1 != null ? c1 : c2;
  return dummy->next;
}