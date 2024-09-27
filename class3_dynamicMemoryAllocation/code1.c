#include <stdio.h>
#include <stdlib.h>

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

    // cout << k << " is stored at " << pk << endl;

    // finding the address of int pointer
    int** ppk = &pk;
    // cout << pk << " is stored at " << ppk << endl;

    char c1 = 'A';
    char* pc1 = &c1;
    // cout << c1 << " is stored at " << pc1 << endl;

    // you can also find the address of the variable that stores the address of integer
    // string is a C++ container 

    // we do not have strings in C
    // string s1 = "hello";
    // ['h', 'e', 'l', 'l', 'o']
    char* str = "hello";
    // printf("str: %s\n",str);
    

    // C - does not have a string type
    // C - strings in C are effectively char arrays
    // since, array pointer stores the address of first location, C-string varriables also store the address of the first location

    // malloc and calloc
    // dynamic memory allocation in C - using malloc and calloc
    // use malloc to create an array of 4 integer locations
    // an int occupies - 4 bytes, so 4 integers => 16 bytes
    // since integer array is stored using int * pointer
    // int * arr4 = malloc(16); // give me memroy to store 4 integers
    int * arr4 = malloc(sizeof(int) * 4); // give me memroy to store4 4 integers
    printf("Size of int: %ld bytes\n",sizeof(int));
    printf("Size of char: %ld bytes\n",sizeof(char));
    printf("Size of double: %ld bytes\n",sizeof(double));
    printf("Size of long: %ld bytes\n",sizeof(long));

    arr4[0] = 23;       // [0] <=> *(arr4 + 0)
    arr4[1] = 4;
    arr4[2] = 67;
    arr4[3] = 89;
    for( int i=0; i<4; i++ ) {
        printf("%d ",arr4[i]);
    }
    printf("\n");

    // using calloc to allocate an 
    int * arr5 = calloc(4,sizeof(int));
    arr5[0] = 23;       // [0] <=> *(arr4 + 0)
    arr5[1] = 4;
    arr5[2] = 67;
    arr5[3] = 89;
    for( int i=0; i<4; i++ ) {
        printf("%d ",arr5[i]);
    }
    printf("\n");

    // free the memory dynamically allocated using free
    free(arr4);
    free(arr5);
    return 0;
}