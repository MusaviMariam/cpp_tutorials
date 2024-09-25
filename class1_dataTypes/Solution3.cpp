#include<iostream>
#include<string>

using namespace std;

int main(){

    int numberD; //decimal number
    int bit=4; //4-bit integer decimal number

    cout<< "Enter a decimal number from 0 to 4 = " <<endl;
    cin>> numberD;
    if (numberD <= bit){
          for (int i = bit; i >= 0; --i){
            int numberB = (numberD >> i) &1;
            cout << numberB;
    }
    cout<<endl;
            
    }

    else{
        cout<< "Sorry! Enter the number between 0 to 4" <<endl;
    }

  

    return 0;
}


//Comment: I do not know how to do the bit wise operations for larger bit integers. Need some concept on it.

/*[Strings, Operators] Q3: Write a c++ program to convert the given input decimal number into its corresponding binary value. Use bit shift operators ( >> << )

Sample:
Input 1:
Enter n : 10

Output 1:
10 in binary is 1010


Input 2:
Enter n : 16

Output 2:
16 in binary is 10000

*/