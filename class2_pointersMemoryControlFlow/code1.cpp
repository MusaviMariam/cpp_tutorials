#include <iostream>
using namespace std;

int main() {
    // ternary operator
    int k = (0==0)? 10 : 20;
    int age = 14;
    char ch = (age>=13 && age<=19)? 'T' : 'N';

    cout << "k: " << k << endl;
    cout << "ch: " << ch << endl;

    // // In if conditions, 0 is false, and any non-0 value is true
    // if( 0 ) {
    //     cout << "True condition!" << endl;
    // }
    // else {
    //     cout << "False condition!" << endl;
    // }

    // null values are false, non-null values are true
    // NULL - C
    // nullptr - C++
    if( !NULL ) {
        cout << "True condition!" << endl;
    }
    else {
        cout << "False condition!" << endl;
    }

    return 0;
}