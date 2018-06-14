/*
 * Pros:
 * Deque - double ended queue, unlike deque
 * it can grow from front and back.
 * insertion/deletion from fron is handled efficiently unlike vectors
 *
 * Cons:
 * Unlike vectors, deques are not guaranteed to store all its elements in contiguous storage locations
 *
 * ----------------
 * 1. Fast insert/remove at the beginning and end - complexity is O(1)
 * 2. Slow insert/remove at the beginning or in the middle - complexity is O(n)
 * 3. Slow search - complexity is O(n)
 * */

#include <iostream>
#include <deque>

using namespace std;


int main(){
    deque<int> deq;

    deq.push_front(3);
    deq.push_front(2);
    deq.push_front(1); //inserts from front. Vector does not have this built-in

    deq.push_back(4);
    deq.push_back(5);

    for (int i = 0; i < deq.size(); ++i) {
        cout << deq.at(i) << "\t";
        // with .at() validated and throw error .
        // [i] not validated if it is higher than actual deque size
    }

    int *p = &deq[0]; // pointing to the beginning of the deque
    p[2] = 33; // should be without * and &
    cout << endl << "deq values: " <<endl;
    for(deque<int>::iterator itr = deq.begin(); itr != deq.end(); itr++){
        cout << *itr << "\t";
    }

    deque<int> deq2;
    deque<int> deq3(deq); // copy all values to deq3 by using constructor. but 'deq' STAYS SAME.
    // deq.clear(); // makes deq EMPTY

    deq2.swap(deq); // copy all values to deq2 from deq and MAKES 'deq' EMPTY


    if(deq2.empty()) {
        cout << endl << "deq2 is empty\n";
    }
    if(deq.empty()) {
        cout << endl << "deq is empty\n";
    }
    if(deq3.empty()){
        cout << endl << "deq3 is empty\n";
    }
    cout << "deq2 values: " << endl;
    for(deque<int>::iterator itr = deq2.begin(); itr != deq2.end(); itr++){
        cout << *itr << "\t";
    }
    cout << endl << "deq3 values: " <<endl;
    for(deque<int>::iterator itr = deq3.begin(); itr != deq3.end(); itr++){
        cout << *itr << "\t";
    }


    return 0;
}