#include "Node.h"
#include <iostream>
using namespace std;
class Stack {
	// Define the data members
    int size;
    Node * head;
   public:
    Stack() {
        // Implement the Constructor
        head=nullptr;
        size=0;
    }

	/*----------------- Public Functions of Stack -----------------*/

    int getSize() {
        // Implement the getSize() function
        return size;
    }

    bool isEmpty() {
        // Implement the isEmpty() function
        return size==0;
    }

    void push(int element) {
        // Implement the push() function
        Node * new_node=new Node(element);
        if (head==nullptr){
            head=new_node;
            size++;
        }
        else{
            new_node->next=head;
            head=new_node;
            size++;
        }
    }

    int pop() {
        // Implement the pop() function
        if (head==nullptr){
            return -1;
        }
        else{
           Node* temp=head;
            int ans=head->data;
            head=head->next;
            delete temp;
            size--;
            return ans;
        }
    }

    int top() {
        // Implement the top() function
        if (head==nullptr){
            return -1;
        }
        else{
            return head->data;
        }
    }
    void print(){
        Node* node=head;
        while(node!=nullptr and node->next!=nullptr){
            
            cout<<node->data;
            if(node==head){
                cout<<"(topmost)";
            }
            cout<<" -> ";
            node=node->next;
        }
        if(node!=nullptr){
        cout<< node->data<<"(Bottommost)"<< endl;}
    }
};