class Node{
    public:
    int val;
    Node* next;
    Node* prev;

    Node(int val,Node* next,Node* prev){
        this->val=val;
        this->next=next;
        this->prev=prev;
    }
    Node(int val){
        this->val=val;
        next=nullptr;
        prev=nullptr;
    }
};