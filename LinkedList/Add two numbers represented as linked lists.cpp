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


ListNode* sumLists2(ListNode* head1 , ListNode* head2) {
	stack<int>s1,s2;
	if(!head1 && !head2){
		return NULL;
	}
	if(!head1){
		return head2;
	}
	if(!head2){
		return head1;
	}
	while(head1){
		s1.push(head1->val);
		head1=head1->next;
	}
	while(head2){
		s2.push(head2->val);
		head2=head2->next;
	}
	int carry = 0;
	ListNode* res = NULL;
	while(!s1.empty() || !s2.empty()){
		int a=0,b=0;
		if(!s1.empty()){
			a = s1.top();
			s1.pop();
		}
		if(!s2.empty()){
			b = s2.top();
			s2.pop();
		}
		int total = a+b+carry;
		ListNode* temp = new ListNode();
		temp->val = total%10;
		temp->next = NULL;
		carry = total/10;
		if(res == NULL){
			res = temp;
		}
		else{
			temp->next = res;
			res = temp;
		}
	}
	if(carry != 0){
		ListNode* temp = new ListNode();
		temp->val = carry;
		temp->next = res;
		res = temp;
	}
	return res;
}
