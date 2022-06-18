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
        if(slow->next == NULL){
            if(i == k-1){
                head = head->next;
            }
            return head;
        }
        if(slow->next)
        slow = slow->next;
    }
    while(slow && slow->next){
        slow = slow->next;
        fast = fast->next;
    }
    fast->next = fast->next->next;
    return head;
}
