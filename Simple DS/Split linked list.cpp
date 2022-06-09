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

    vector<LinkedList> split() {
        LinkedList odd;
        LinkedList even;
        ListNode* node = head;
        while(node!= NULL){
            if((node->data)%2 !=0){
                odd.insertAtEnd(node->data);      
            }
            if((node->data)%2 == 0){
                even.insertAtEnd(node->data);
            }
            node = node->next;
        }
        vector<LinkedList> res;
        res.push_back(odd);
        res.push_back(even);
        return res;
    }
};
