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

    int length = 0; // to keep track of number of nodes
public:
    LinkedList(){
        head = NULL;
        tail = NULL;
        current = NULL;
    }
    void insertFromBack(int value);
    void insertFromFront(int value);
    void deleteNode(int value);
    void printList();
    void find(int n);
    void sort();
    bool isEmpty();
};


// swap is done by changing values of the node


void LinkedList::sort() {
    int temp;
    current = head;

    if(current == NULL){
        return;
    }else{
        for(int i = 0; i < length; i++) { // it's just a hack-around by running loop  'length' times. this is not a proper way of sorting,
            current = head;
            while (current -> next != NULL) {
                if (current -> data > current -> next -> data) {
                    temp = current->data;
                    current -> data = current -> next -> data;
                    current -> next -> data = temp;
                }
                current = current -> next;
            }
        }

    }

}

void LinkedList::find(int n) {
    current = head;
    while(current != NULL){
        if(current -> data == n){
            cout << "Value Exists\n";
            return;
        }
        current = current -> next;
    }
    cout << "Value does not exist\n";
}

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
    length++;
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
    length++;
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

void LinkedList::deleteNode(int value) {
    nPtr target = new node;
    current = head;
    if(isEmpty()){
        cout << "List is empty!\n";
    }else{
        if(head -> data == value){
            target = head;
            head = head -> next;
        }else{
            while(current -> next ->  data != value){
                current = current -> next;
            };
            target = current -> next;
            current -> next = target -> next;
        }
        delete target;
        length--;
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
            case 'd':
                cin >> value;
                myList.deleteNode(value);
                break;
            case 'f':
                cin >> value;
                myList.find(value);
                break;
            case 's':
                myList.sort();
                break;
            case 'p': myList.printList();break;
            case 'e':return 0;
        }
    }
}