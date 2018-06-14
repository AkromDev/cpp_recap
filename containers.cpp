
/* Containers -> 3 types
 * 1. Sequence Containers -> Linear Data Structures
 *   Ex: vector, queue, list, forward list
 * 2. Associative Containers -> Non linear data structures
 *   Ex: Ordered Containers -> set, multiset, map, multimap
 *   Ex: Unordered Containers -> Unordered set,Unordered multiset, Unordered map, Unordered multimap
 * 3. Container Adapters - implemented on top of other classes
 *   Ex: queue, stack
 */

#include <iostream>
#include <vector>

using namespace std;

void startContainers(){
    vector<int> vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    for (int i = 0; i < vec.size(); ++i) {
        cout << vec.at(i) << endl;
    }

    for(vector<int>::iterator itr = vec.begin(); itr != vec.end(); ++itr){
        cout << *itr << "\t";
    }

//    vec.begin();
//    vec.end();

}
int main(){

    startContainers();
    return 0;
}