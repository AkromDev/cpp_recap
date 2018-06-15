/*
 * 1. Fast insert/remove at any position - complexity is O(1)
 * 2. Slow search
    - complexity is O(n)
    - much slower than vector (locality issues)
 * 3. No random access, no [ ] operator
 * */

#include <iostream>
#include <list>
#include <algorithm>

using namespace std;

int main(){
    list<int> myList = { 2, 3 };
    list<int> myList2 = { 1,4,5,6 };

    myList.push_back(4);
    myList.push_front(1);

    list<int>::iterator itr;

    for (itr = myList.begin() ; itr != myList.end(); ++itr) { // loop using iterator
        cout << *itr << "\t";
    }
//    for(int &x: myList){ // new range-based loop in C++ (probably C++11)
//        cout << x << "\t";
//    }
    cout << "\n";

    itr = find(myList.begin(), myList.end(),2);
//    cout << *itr << endl;
    myList.insert(itr, 22);
//    itr++;
//    itr++;
    myList.erase(itr);
    for (int &x: myList){
        cout << x << "\t";
    }
    advance(itr, 2); // changes itr position by 2
    myList2.splice(itr, myList); //add all elements from myList to myList2 from a position 'itr'

    return 0;
}