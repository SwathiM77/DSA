#include "../crio/cpp/ds/ListNode/ListNode.hpp"
/*
Definition for ListNode
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
ListNode* deleteKthToLast(ListNode* head , int k) {
    ListNode* slow = head;
    ListNode* fast = head;
    for(int i=0;i<k;i++){
        if(fast->next == NULL){
            if(i == k-1){
                head = head->next;
            }
            return head;
        }
        if(fast->next)
        fast = fast->next;
    }
    while(fast && fast->next){
        slow = slow->next;
        fast = fast->next;
    }
    //slow reaches the nth node from end
    slow->next = slow->next->next;
    return head;
}
