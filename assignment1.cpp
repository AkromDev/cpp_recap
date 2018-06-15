#include <iostream>
#include <array>

using namespace std;

int main(){
    int size=0;
    int *n;


    cout << "Enter array size: ";
    cin >> size;
    n = new int[size];
    for(int i = 0; i < size; i++){
        cin >> n[i];
    }
    for(int i = 0; i < size; i++ ){
        cout << n[i] << "\t";
    }

    delete [] n;
    n = NULL;

    return 0;
}