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

bool detectAndRemoveCycle(ListNode* head){
    if(!head){
        return false;
    }
    ListNode* slow = head;
    ListNode* fast = head;
    bool ans = false;
    while(fast && fast->next){
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast){
            ans = true;
            break;
        }
    }
    if(!ans)
        return false;
    slow = head;
    //head is the meeting point of slow and fast then traverse fast till end
    if(slow == fast){
        while(fast->next != slow)
            fast = fast->next;
    }
    else{
        while(slow->next != fast->next){
            slow = slow->next;
            fast = fast->next;
        }
    }
    fast->next = NULL;
    return ans;
}
