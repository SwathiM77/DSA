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
// Use new ListNode(data) to create new node

ListNode* linkedListReverse(ListNode* head) {
	ListNode* prev = NULL;
	ListNode* curr = head;
	ListNode* next = NULL;
	while(curr!=NULL){
		next = curr->next;
		curr->next = prev;
		prev = curr;
		curr = next; 
	}
	head = prev;
	return head;
}
