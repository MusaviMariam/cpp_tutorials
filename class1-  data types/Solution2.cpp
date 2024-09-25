#include<iostream>
#include<string>

using namespace std;

int main(){
    
    string statement;
    char delimiter;
    string token;

    cout<<"Enter srting: ";
    cin>> statement;
    cout<< endl;
    cout<< "Enter delimiter";
    cin>> delimiter;
    cout<< endl;



    //I think "for" loop will be employed which compares each character in the string and then print the tokens

    return 0;
}

//Comment: Seriously do not know how to extract the tokens using character but i think the loop will compare each character in the string then separate the strings and print.


/*[Strings, loops] Q2: Write a c++ program to input a string in the first line and a single character delimiter.
Extract tokens and print each token in a separate line from from the given string and delimiter. 

Sample:
Input 1: 
Enter string : C++ Programming
Enter delimiter : r

Output 1:
"C++ P"
"og"
"amming"


Input 2:
Enter string : Apple,Orange,Banana
Enter delimiter : ,

Output 2:
"Apple"
"Orange"
"Banana"
*/