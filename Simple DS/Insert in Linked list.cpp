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

    void insertAtBeginning(int data) {
        ListNode* n = new ListNode(data);
        if(head == NULL)
            head = tail = n;
        else{
            n->next = head;
            head = n;
        }
    }

    void insertAtEnd(int data) {
        ListNode* n =new ListNode(data);
        n->next = NULL;
        if(tail == NULL)
            head = tail = n;
        else{
            tail->next = n;
            tail = n;
        }
    }
};
