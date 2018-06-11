#include <iostream>

using namespace std;

class LinkedList {
    typedef struct node {
        int data;
        node* next;
    }* nPtr;
    nPtr head;
    nPtr tail;
    nPtr current;
public:
    LinkedList(){
        head = NULL;
        tail = NULL;
        current = NULL;
    }
    void insertNode(int value);
    void printList();
    bool isEmpty();
};

void LinkedList::insertNode(int value) {
    nPtr n = new node;
    n -> data = value;
    n -> next = NULL;
    current = head;
    if(isEmpty()){
        head = n;
        tail = n;
    }else{
        while(current -> next != NULL){
            current = current -> next;
        }
        current -> next = n;
        tail = n;
    }
}

void LinkedList::printList() {
    current = head;
    if(isEmpty()){
       cout << "List is Empty! \n";
    }else{
        while(current  != NULL){
            cout << current -> data << " ";
            current = current -> next;
        }
    }
}

bool LinkedList::isEmpty() {
    return head == NULL;
}

int main(){
    LinkedList myList;
    char opCode;
    while(1){
        cin >> opCode;
        switch(opCode){
            case 'i':
                int value;
                cin >> value;
                myList.insertNode(value);
                break;
            case 'p': myList.printList();break;
            case 'e':return 0;
        }
    }
}