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
    void insertFromBack(int value);
    void insertFromFront(int value);
    void printList();
    bool isEmpty();
};

void LinkedList::insertFromBack(int value) {
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
void LinkedList::insertFromFront(int value) {
    nPtr n = new node;
    current = head;
    n -> data = value;
    n -> next = NULL;
    if(isEmpty()){
        head = n;
        tail = n;
    }else{
        head = n;
        head -> next = current;
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
    int value;
    while(1){
        cin >> opCode;
        switch(opCode){
            case 'i':
                cin >> value;
                myList.insertFromBack(value);
                break;
            case 'b':
                cin >> value;
                myList.insertFromFront(value);
                break;
            case 'p': myList.printList();break;
            case 'e':return 0;
        }
    }
}