#include "Node.h"
#include <iostream>
using namespace std;

class DoublyLinkedList{
    public:
    Node* head;
    Node* tail;
    int size;

    public:
    DoublyLinkedList(){
        head=nullptr;
        tail=nullptr;
        size=0;
    }
    void Insert(int val){
        Node* node=new Node(val); // Dynamic Memory Allocation
        if(head==nullptr){
            head=node;
            tail=node;
        }
        else{
            tail->next=node;
            node->prev=tail;
            tail=node;
        }
        size++;
    }
    void Swap(int i,int j){
        if (j>=size){
            return;
        }
        else{

        }
    }
    void print(){
        Node* node=head;
        while(node!=nullptr and node->next!=nullptr){
            cout<<node->val<<" <-> ";
            node=node->next;
        }
        if(node!=nullptr){
            cout<<node->val<<endl;
        }
    }
    int Size(){
        return size;
    }


};
