#include <iostream>
#include <set>

using namespace std;

// No duplicate items stored in set

int main(){
    set<int> mySet;
    mySet.insert(3);
    mySet.insert(1);
    mySet.insert(7);  // Insertion Complexity: O(log(n))

    set<int>:: iterator itr;
    itr = mySet.find(7);
    pair<set<int>::iterator, bool> ret;
    ret = mySet.insert(3); // no new element is inserted
    if(ret.second == false){
        itr = ret.first;
    }

    mySet.insert(itr, 9);// mySey: { 1,3,7,9 } not inserted at itr
    mySet.erase(itr); // mySet: { 1,7,9 }
    mySet.erase(7); // mySet: { 1, 9 }

//
    for(itr = mySet.begin(); itr != mySet.end(); itr++){
        cout << *itr << "\t";
    }

    return 0;
}