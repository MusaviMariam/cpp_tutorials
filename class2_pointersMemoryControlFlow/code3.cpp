#include <iostream>
using namespace std;

/* if else in C++ */
int main() {
    // array 1
    // int arr1[5];     // by default, these have garbage values
    // 
    int arr1[] = {1,2,3,4,5};
    for( int i=0; i<5; i++ ) {
        cout << "arr1[" << i << "] = " << arr1[i] << endl; 
    }

    // once a c style array has been allocated, it cannot be reallocated
    // arr1 = {6,7,8,9,10};

    // DYNAMICALLY creating an array of 5 locations
    int * arr2 = new int[5];
    delete [] arr2;  // freeing memory used by arr2

    arr2 = new int[8]; // allocating memory to arr2
    
    return 0;
}