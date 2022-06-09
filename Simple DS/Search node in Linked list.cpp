struct ListNode {
    int data;
    ListNode *next;

    ListNode(int _data = 0) {
        data = _data;
        next = NULL;
    }
};
// Use new ListNode(data) to create new node

class LinkedList {

public:
    ListNode *head;
    ListNode *tail;

    LinkedList() {
        head = tail = NULL;
    }

    void insertAtEnd(int data) {
        ListNode *newNode = new ListNode(data);

        if (tail == NULL) {
            head = tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    bool search(int data) {
        ListNode* node = head;
        if(node == NULL){
            return false;
        }
        while(node!= NULL && node->data!=data){
            node = node->next;
        }
        if(node == NULL){
        return false;
        }
        return true;
    }
};
