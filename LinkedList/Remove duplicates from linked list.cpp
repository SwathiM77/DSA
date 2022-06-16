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
#include <unordered_set>
#include "../crio/cpp/ds/ListNode/ListNode.hpp"

ListNode* removeDups(ListNode* head)
{
	ListNode* ptr = head;
	ListNode* prev = NULL;
	if(!head || !head->next)
		return head;
	unordered_set<int>set;
	while(ptr){
		if(set.find(ptr->val) == set.end()){
			set.insert(ptr->val);
			prev = ptr;
		}
		else{
			prev->next = ptr->next;  
		}
		ptr = prev->next;
	}
	return head;
}
