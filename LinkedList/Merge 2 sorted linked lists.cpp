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
ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
    ListNode* reshead = NULL;
    ListNode* restail = NULL;
    if(!l1 )
        return l2;
    if(!l2)
        return l1;
    while(l1 && l2){
        if(l1->val < l2->val){
            if(reshead == NULL){
                reshead = l1;
                restail = l1;
            }
            else{
                restail->next = l1; 
                restail = restail->next;
            }
            l1 = l1->next;
        }
        else{
            if(reshead == NULL){
                reshead = l2;
                restail = l2;
            }
            else{
                restail->next = l2;
                restail = restail->next;
            }
            l2 = l2->next;
        }
    }
    if(l1){
        restail->next = l1;
        restail = restail->next;
    }
    if(l2){
        restail->next = l2;
        restail = restail->next; 
    }
    return reshead;
}
