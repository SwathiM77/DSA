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

// Implement your solution here
ListNode* insertIntoSortedCircularList(ListNode* head, int insertVal)
{
	ListNode* newnode = new ListNode();
	newnode->val = insertVal;
	newnode->next = NULL;
	
	if(!head){
		newnode->next = newnode;
		head = newnode;
		return head;
	}
	
	if(head && head == head->next){
		head->next = newnode;
		newnode->next = head;
		return head;
	}

	ListNode*  ptr = head;
	ListNode* prev = NULL;

	while(ptr){
		if(ptr->val >= insertVal ){
			if(prev && prev->val < insertVal){
				prev->next = newnode;
				newnode->next = ptr;
				break;
			}
			else if(prev && prev->val > insertVal && prev->val > ptr->val)			  {
				prev->next = newnode;
				newnode->next = ptr;
				break;
			}
		}
		else if(ptr->val < insertVal){
			if(prev && prev->val > ptr->val && prev->val < insertVal){
				prev->next = newnode;
				newnode->next = ptr;
				break;
			}
		}
		prev = ptr;
		ptr = ptr->next; 
	}
	return head;
}
