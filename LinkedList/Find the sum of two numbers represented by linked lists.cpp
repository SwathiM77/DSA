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

stack<int> reverse(stack<int>st){
	stack<int>res;
	while(!st.empty()){
		res.push(st.top());
		st.pop();
	}
	return res;
}

ListNode* reverseList(ListNode* head){
	ListNode* curr = head;
	ListNode* prev = NULL;
	ListNode* next = NULL;
	if(!head || !head->next)
	return head;
	while(curr){
		next = curr->next;
		curr->next = prev;
		prev = curr;
		curr = next;
	}
	return prev;
}

ListNode* sumLists(ListNode* head1 , ListNode* head2) {
	if(!head1 && !head2)
		return NULL;
	if(!head1)
		return head2;
	if(!head2)
		return head1;
	
	stack<int>s1,s2;
	while(head1){
		s1.push(head1->val);
		head1 = head1->next;
	}
	while(head2){
		s2.push(head2->val);
		head2 = head2->next;
	}
	s1 = reverse(s1);
	s2 = reverse(s2);
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
		ListNode* temp = new ListNode();
		int sum = a+b+carry;
		temp->val = sum%10;
		temp->next = NULL;
		carry = sum/10;
		if(!res ){
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
	res = reverseList(res);
	return res;
}
