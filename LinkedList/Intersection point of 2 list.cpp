#include "../crio/cpp/ds/ListNode/ListNode.hpp"


/*
// Definition for ListNode
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
/*Approch 1 for which input is all positive only
ListNode* listIntersectionPoint(ListNode* head1, ListNode* head2) {
    while(head1){
        head1->val = -head1->val;
        head1 = head1->next;
    }
    while(head2){
        head2->val = -head2->val;
        if(head2->val > 0){
            return head2;
        }
        head2 = head2->next;
    }
    return NULL;
}
*/
//Traverse list2 after completely traversing list1 and similarly for list1
ListNode* listIntersectionPoint(ListNode* head1, ListNode* head2) {
    ListNode* ptr1 = head1;
    ListNode* ptr2 = head2;
    if(!head1 && !head2)
        return NULL;
    while(ptr1 && ptr2){
        if(ptr1 == ptr2){
            return ptr1;
        }
        if(ptr1->next == NULL)
            ptr1 = head2;
        else
            ptr1 = ptr1->next;
        if(ptr2->next == NULL)
            ptr2 = head1;
        else
            ptr2 = ptr2->next;
    }
    return NULL;
}
