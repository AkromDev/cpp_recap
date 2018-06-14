/* STL (Standard Template Library) -> generic programming -> templates -> 3 components
 * 1. Containers - Data structures that store (contains) data of any type.
 *    Generic class templates. Ex: queue, stack, map
 * 2. Iterators - Navigation of container elements.
 *    Each container has its own iterator type: Ex: start - end, prev - next
 * 3. Algorithms - Algorithms like searching, sorting and many others.
 *    Generic function Templates. Ex: sorting, searching
 * */

#include <iostream>
#include <string>

using namespace std;


void startString(){
    string word = "Awesome";
    string multipleLetters(3,'M');
    string str;

    cout << "Enter string: ";
    getline(cin, str);
    cout << "Size: " << str.size() << endl;
    cout << str + " " + word << endl;
    bool doesMatch = str == word;
    cout << "Two string are matched? -> " << doesMatch << endl;
}
void startContainers(){
    /* Containers -> 3 types
     * 1. Sequence Containers -> Linear Data Structures
     *   Ex: vector, queue, list, forward list
     * 2. Associative Containers -> Non linear data structures
     *   Ex: Ordered Containers -> set, multiset, map, multimap
     *   Ex: Unordered Containers -> Unordered set,Unordered multiset, Unordered map, Unordered multimap
     * 3. Container Adapters - implemented on top of other classes
     *   Ex: queue, stack
     * */
}
int main(){
//    startString();
    startContainers();
    return 0;
}