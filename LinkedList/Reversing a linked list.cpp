#include "../crio/cpp/ds/ListNode/ListNode.hpp"
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
ListNode* reverseLinkedList(ListNode *head) {
	if(!head || !head->next)
		return head;
	ListNode* prev = NULL;
	ListNode* next = NULL;
	ListNode* curr = head;
	while(curr){
		next = curr->next;
		curr->next = prev;
		prev = curr;
		curr = next;
	}
	return prev;
}
