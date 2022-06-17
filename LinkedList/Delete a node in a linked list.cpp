#include "../crio/cpp/ds/ListNode/ListNode.hpp"

/*
The ListNode class is implemented as follows:
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

// Implement your Solution Here    
void deleteGivenNode(ListNode* node){
	ListNode* tobedeleted = node;
	ListNode* after = tobedeleted->next;
	if(after != NULL){
		tobedeleted->val = after->val;
		tobedeleted->next = after->next;
		delete(after);
	}
}
