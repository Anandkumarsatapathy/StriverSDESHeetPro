/*1.Naive Approach*/
/*
  Time Complexity: O(N)
  Space Complexity: O(1)
*/
class Solution
{
public:
  ListNode *middleNode(ListNode *head)
  {
    int n = 0;
    ListNode *temp = head;
    while (temp)
    {
      n++;
      temp = temp->next;
    }
    temp = head;
    for (int i = 0; i < n / 2; i++)
    {
      temp = temp->next;
    }
    return temp;
  }
};
/*2.Tortoise-Hare-Approach*/
ListNode *middleNode(ListNode *head)
{
  ListNode *slow = head, *fast = head;
  while (fast && fast->next)
  {
    slow = slow->next, fast = fast->next->next;
    return slow;
  }
};