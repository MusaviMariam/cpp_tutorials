#include <iostream>
using namespace std;

// [] <=> *
// int findSum(int * arr, int numValues) {
int findSum(int arr[], int numValues) {
    int s = 0;
    for( int i=0; i<numValues; i++ ) {
        s += arr[i];
    }
    return s;
}

int main() {

    // 1. Pointers
    // Pointer - is a variable, pointing to a memory
    // all memory locations has an address
    // pointer variables - store the address of a memory
    // and all values are stored in memory locations, that has an address
    
    int k = 10;
    // where is k stored?
    // we use the & operator
    // so, to hold the address of a varriable, that stores an int, we use the int*
    // namely, int pointer
    int* pk = &k;

    cout << k << " is stored at " << pk << endl;
    // when * is used to get the value of a location, it is called a dereferencing operator
    // to get the value at an address, use the * operator
    cout << "At " << pk << ", the value is " << (*pk) << endl;

    // finding the address of int pointer
    int** ppk = &pk;
    cout << pk << " is stored at " << ppk << endl;
    cout << ppk << " address has the value " << (*ppk) << endl;

    char c1 = 'A';
    char* pc1 = &c1;
    cout << c1 << " is stored at " << pc1 << endl;

    // you can also find the address of the variable that stores the address of integer
    // string is a C++ container 

    // we do not have strings in C
    string s1 = "hello";

    int arr1[] = {1,2,3,4,5};
    // int * arr2 = {1,2,3,4,5};
    int numValues = 5;
    cout << "Array 1 is at location " << arr1 << endl;
    
    for( int i=0; i<numValues; i++ ) {
        // So, array variable is an int pointer
        // array variable - is a pointer to the first location of the array
        // we can use the dereference operator to get the values in the array
        // *arr (dereferencing the  array variable name - gives the first value in the array)
        // *(arr + 1) (dereferencing the array variable + 1 - gives the second element and so on)
        // cout << *(arr1 + i) << " ";
        cout << arr1[i] << " ";
    }
    cout << endl;
    // when * is used to get the value of a location, it is called a dereferencing operator

    // create C++ style array
    // int * arr3 = new int[5;

    // strings are character arrays in C
    char* str = "hello";
    cout << "str: " << str << endl;

    

    return 0;
}