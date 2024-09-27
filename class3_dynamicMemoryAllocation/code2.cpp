#include <iostream>
#include <cstdlib>
using namespace std;

int main() {

    // ---Dynamic array allocation
    // is allocated from heap

    // C-style array is allocated in the stack memory
    int arr1[] = {23,4,67,89};
    // cannot free the memory allocated using a C-style array
    // this memory is freed when the program terminates
    // delete [] arr1;

    
    // C++ style array is allocated on the heap
    // using the new keyword
    int * arr2 = new int[4];
    // by default, all locations of int array allocated dynamically have 0s
    for( int i=0; i<4; i++ ) {
        cout << arr2[i] << " ";
    }
    cout << endl;
    // set the values
    arr2[0] = 23;
    arr2[1] = 4;
    arr2[2] = 67;
    arr2[3] = 89;
    for( int i=0; i<4; i++ ) {
        cout << arr2[i] << " ";
    }
    cout << endl;

    // dynamically allocate and initialise
    int * arr3 = new int[4]{1,2,3,4};

    delete [] arr2;
    delete [] arr3;
    return 0;
}