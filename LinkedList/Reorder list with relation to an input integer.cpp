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


ListNode* partition(ListNode* head , int x) {
    ListNode* first1 = NULL;
    ListNode* second1 = NULL;
    ListNode* first2 = NULL;
    ListNode* second2 = NULL;
    ListNode* first3 = NULL;
    ListNode* second3 = NULL;
    ListNode* ptr = head;
    
    while(ptr){
        ListNode* next = ptr->next;
        if(ptr->val < x){
            if(first1 == NULL){
                first1 = ptr;
                second1 = ptr;
            }
            else{
                second1->next = ptr;
                second1 = second1->next;
            }
            second1->next = NULL;
        }
        else if(ptr->val > x){
            if(first2 == NULL){
                first2 = ptr;
                second2 = ptr;
            }
            else{
                second2->next = ptr;
                second2 = second2->next;
            }
            second2->next = NULL;
        }
        else{
            if(first3 == NULL){
                first3 = ptr;
                second3 = ptr;
            }
            else{
                second3->next = ptr;
                second3 = second3->next;
            }
            second3->next = NULL;
        }
        ptr = next;
    }
    if(second1 != NULL){
        if(first3 != NULL)
        second1->next = first3;
        else
        second1->next = first2;
    }
    if(second3 != NULL){
        second3->next = first2;
    }
    if(first1){
        return first1;
    }
    if(first3){
        return first3;
    }
    return first2;
}
