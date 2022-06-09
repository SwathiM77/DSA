struct ListNode {
    int data;
    ListNode *next;

    ListNode(int _data = 0) {
        data = _data;
        next = NULL;
    }
};

/* 
    To create a new node, use
    ListNode *newNodeName = new ListNode(data) 
*/

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

    void remove(int data) {
        ListNode* node = head;
        ListNode* prev = NULL;
        if(node != NULL && node->data == data)
        {
            head = node->next;
            // delete node; 
        }
        else{
            while(node != NULL && node->data != data){
                prev = node;
                node = node->next;
            }
            if(node == NULL)
                return;
            prev->next = node->next;
            // delete node;
        }
    }
};
