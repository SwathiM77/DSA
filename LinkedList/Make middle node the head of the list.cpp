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

ListNode * moveMiddleToHead(ListNode * head) {
	ListNode* slow = head;
	ListNode* fast = head;
	ListNode* prev = head;
	if(!head || !head->next)
		return head;
	while(fast && fast->next){
		prev = slow;
		slow = slow->next;
		fast = fast->next->next;
	}
	prev->next = slow->next;
	slow->next = head;
	return slow;
}
