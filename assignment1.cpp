#include <iostream>
#include <array>

using namespace std;

int main(){
    int size=0;
    int *n; // declaring a pointer variable to point to the array


    cout << "Enter array size: ";
    cin >> size;
    n = new int[size];
    for(int i = 0; i < size; i++){ // getting values
        cin >> n[i];
    }
    for(int i = 0; i < size; i++ ){ //displaying values
        cout << n[i] << "\t";
    }

    delete [] n; // delete array
    n = NULL; // pointing to null

    return 0;
}