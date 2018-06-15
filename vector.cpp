
/*
 * Containers -> 3 types
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


int main(){
    vector<int> vec;
    vector<int>::iterator itr;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.erase(itr = vec.begin(),4);
    vec.push_back(5);

    for (int i = 0; i < vec.size(); ++i) {
        cout << vec.at(i) << "\t";
        // with .at() validated and throw error .
        // [i] not validated if it is higher than actual vector size
    }

    int *p = &vec[0]; // pointing to the beginning of the vector
    p[2] = 33; // should be without * and &
    cout << endl << "Vec values: " <<endl;
    for( itr = vec.begin(); itr != vec.end(); itr++){
        cout << *itr << "\t";
    }

    vector<int> vec2;
    vector<int> vec3(vec); // copy all values to vec3 by using constructor. but 'vec' STAYS SAME.
    // vec.clear(); // makes vec EMPTY

    vec2.swap(vec); // copy all values to vec2 from vec and MAKES 'vec' EMPTY


    if(vec2.empty()) {
        cout << endl << "Vec2 is empty\n";
    }
    if(vec.empty()) {
        cout << endl << "Vec is empty\n";
    }
    if(vec3.empty()){
        cout << endl << "Vec3 is empty\n";
    }
    cout << "Vec2 values: " << endl;
    for(vector<int>::iterator itr = vec2.begin(); itr != vec2.end(); itr++){
        cout << *itr << "\t";
    }
    cout << endl << "Vec3 values: " <<endl;
    for(vector<int>::iterator itr = vec3.begin(); itr != vec3.end(); itr++){
        cout << *itr << "\t";
    }


    return 0;
}