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

ListNode* oddEvenLinkedList(ListNode* head){
	if(!head){
		return head;
	}
	ListNode *odd = head; 
    ListNode *even = head->next; 
  
    ListNode *evenFirst = even; 
  
    while(1){ 
        if (!odd || !even || !even->next){ 
            odd->next = evenFirst; 
            break; 
        } 
  
        odd->next = even->next; 
        odd = odd->next; 
  
        if (odd->next == NULL){ 
            even->next = NULL; 
            odd->next = evenFirst; 
            break; 
        } 
  
        even->next = odd->next; 
        even = odd->next; 
    } 
  
    return head; 
}
