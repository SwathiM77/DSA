class Queue {
    queue<int>q;
public:    
    void insert(int element) {
        q.push(element);
    }

    int getFirst() {
        int top = q.front();
        q.pop();
        return top;
    }
};
