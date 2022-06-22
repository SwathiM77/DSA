#include "../crio/cpp/ds/ListNode/ListNode.hpp"
/**
 * Definition for singly-linked list.
 * class ListNode {
 *   int val;
 *   ListNode* next;
 *   ListNode(int x) { val = x, next(NULL)}
 * }
 */


ListNode* mergeList(ListNode* a, ListNode* b){
  ListNode* res = NULL;
  if(a == NULL)
    return b;
  if(b == NULL)
    return a;
  if(a->val <= b->val){
    res = a;
    res->next = mergeList(a->next,b);
  }
  else{
    res = b;
    res->next = mergeList(a,b->next);
  }
  return res;
}

void splitlist(ListNode* head,ListNode* &front,ListNode* &back){
  ListNode* slow;
  ListNode* fast;
  slow = head;
  fast = head->next;

  while(fast && fast->next){
    slow = slow->next;
    fast = fast->next->next;
  }

  front = head;
  back = slow->next;
  slow->next = NULL;
}

class SortList {
  public:
    // TODO: CRIO_TASK_MODULE_L1_PROBLEMS
    // Your implementation goes here

    ListNode* sortList(ListNode* head) {
      ListNode *result = head;
      ListNode *first;
      ListNode *second;
      // TODO: CRIO_TASK_MODULE_L1_PROBLEMS
      // Your implementation goes here
      if(!head || !head->next)
        return head;
      
      splitlist(head,first,second);
      
      first = sortList(first);
      second = sortList(second);

      head = mergeList(first,second);

      return head;
    }
};
