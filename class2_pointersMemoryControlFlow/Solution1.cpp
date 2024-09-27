/* Instructions to compile:  
Step#01:  g++ -o Solution1 Solution1.cpp
Step#02:  ./Solution1 */

#include<iostream>
#include<fstream>
#include<sstream>
#include<string>

using namespace std;
int main(){

    int age;
    string name;
    string fname, lname;
    int threshold = 19;
    
    // cout<< "Enter age:" <<endl;
    cout<< "Enter age: " ;
    cin >> age;
    // cout<< "Enter name:" <<endl;
    // absorb the extra change in line character
    // getchar();

    cout<< "Enter name: ";
    // cin - reads only a word at a time, if the input is a string
    // word - is a sequence of continuous non-whitespace characters
    // cin - will keep looking for a word, IGNORING ALL WHITESPACE, till it finds a word to read
    // cin >> fname;
    // cin >> lname;

    // getline() : is looking for a change in line character
    // everything, i.e., all characters before the change in line are read as a single line
    getline(cin,name);
    getline(cin,name);

    // stream 

    // && || ! - logical operators
    // && - returns true of both the conditions are true, binary operator
    // || - returns true if either of the conditions are true, binary operator
    // ! - unary operator, 
    // if (age <= threshold && age >= 13){
    //     cout<< name << " is a teenageer." <<endl;
    //     // cout<< (fname + " " + lname) << " is a teenageer." <<endl;
    // }
    // else{
    //     cout<< name << " is not a teenageer." <<endl;
    //     // cout<< (fname + " " + lname) << " is not a teenageer." <<endl;
    // }

    // Operators : will always RETURN A VALUE

    string output = (age <= threshold && age >= 13) ? (name + " is a teenager.") : (name + " is not a teenager.") ;
    cout << output << endl;

    return 0;
}

//Comment: it was simpler to get the input at runtime and then put some if else conditional statement.

/*[Input & Output] Q1: Write a c++ program to input age and name. Display the string and print a message if the input age is teenage or not. 

Sample:
Input 1:
Enter age : 13
Enter name : Balkrishna Srivastava

Output 1:
Balkrishna Srivastava is a teenager. 

Sample:
Input 2:
Enter age : 34
Enter name : John Wick

Output 2:
John Wick is not a teenager. */