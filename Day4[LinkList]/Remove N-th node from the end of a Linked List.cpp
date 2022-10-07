/* Naive Approach [Traverse 2 times]*/
ListNode *removeNthFromEnd(ListNode *head, int n)
{
  if (head == NULL)
    return head;
  ListNode *temp = head;
  int len = 0;
  while (temp != NULL)
  {
    len++;
    temp = temp->next;
  }
  if (len == n)
  {
    head = head->next;
    return head;
  }
  if (n > len)
  {
    return head;
  }
  int diff = len - n;
  ListNode *prev = NULL;
  ListNode *curr = head;
  for (int i = 0; i < diff; i++)
  {
    prev = curr;
    curr = curr->next;
  }
  prev->next = curr->next;
  return head;
}
/*Time Complexity: O(N)

Space Complexity: O(1)*/

/*Two pointerApproach*/
ListNode *removeNthFromEnd(ListNode *head, int n)
{
  ListNode *start = new ListNode();
  start->next = head;
  ListNode *fast = start;
  ListNode *slow = start;

  for (int i = 1; i <= n; ++i)
    fast = fast->next;

  while (fast->next != NULL)
  {
    fast = fast->next;
    slow = slow->next;
  }

  slow->next = slow->next->next;

  return start->next;
}