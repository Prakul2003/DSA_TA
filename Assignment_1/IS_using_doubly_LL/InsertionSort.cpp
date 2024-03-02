#include <iostream>
#include "DoublyLinkedList.h"
using namespace std;

void InsertionSort(DoublyLinkedList list){
    Node* i=list.head;
    while(i!=nullptr){
        Node* j=i;
        while(j!=list.head and (j->val<j->prev->val)){
            int a=j->val;
            j->val=j->prev->val;
            j->prev->val=a;
            j=j->prev;
        }
        i=i->next;
    }
}

int main(){
    DoublyLinkedList list=DoublyLinkedList();
    list.Insert(-1);
    list.Insert(2);
    list.Insert(-3);
    list.print();
    InsertionSort(list);
    list.print();
}