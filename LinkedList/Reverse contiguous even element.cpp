/*
class ListNode {
    public:
	int val;
	ListNode* next;

	ListNode() {}

	ListNode(int x) {                      
	    val = x;                       
	    next = NULL;
	}
};
*/
#include "../crio/cpp/ds/ListNode/ListNode.hpp"

ListNode* reverse(ListNode* head, ListNode* prev){
	ListNode* next = NULL;
	ListNode* curr = head;
	if(head == NULL)
		return NULL;

	while(curr && curr->val % 2 == 0){
		next = curr->next;
		curr->next = prev;
		prev = curr;
		curr = next;
	}
	if(curr != head){
		head->next = curr;
		curr = reverse(curr,NULL);
		return prev;
	}
	else{
		head->next = reverse(head->next,head);
		return head;
	}
}

ListNode * reverseEvenElements(ListNode *head) {
	ListNode *result;
	if(!head)
		return head;
	result = reverse(head,NULL);
	return result;
}
