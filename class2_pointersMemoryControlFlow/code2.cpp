#include <iostream>
using namespace std;

/* if else in C++ */
int main() {
    // if-else
    int age = 10;
    // if( age>=18 ){
    //     cout << "Adult!" << endl;
    // }
    // 1. else part is optional

    // 2. if the if or else body is just one single line, you can ommit the {}
    // age = 20;
    if( age>=18  ) cout << "Adult!" << endl;
    else cout << "Not an Adult!" << endl;
    
    return 0;
}