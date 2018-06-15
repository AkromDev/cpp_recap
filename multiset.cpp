#include <iostream>
#include <set>

using namespace std;

//  duplicate items storing  is ALLOWED

/*Remember: Value of elements cannot be modified in set and multiset
- dereferencing of iterator is constant
- modifying an element will corrupt the data structure (it is supposed
to be sorted)*/

int main(){
    multiset<int> mySet;
    mySet.insert(3);
    mySet.insert(1);
    mySet.insert(7);  // Insertion Complexity: O(log(n))

    multiset<int>:: iterator itr;
    mySet.insert(3); //  new duplicate element is inserted because it is multiset, not set

    for(itr = mySet.begin(); itr != mySet.end(); itr++){
        cout << *itr << "\t";
    }

    return 0;
}