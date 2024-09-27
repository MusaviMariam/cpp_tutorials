/* Instructions to compile:  
Step#01:  g++ -o Solution1 Solution1.cpp
Step#02:  ./Solution1 */

#include<iostream>
#include<string>

using namespace std;
int main(){

    int age;            //Age of a person 
    string name;        //Name of a person
    int threshold = 19; //Teenager threshold
    
    cout<< "Enter age:" <<endl;
    cin>> age;
    cout<< "Enter name:" <<endl;
    cin>> name;

    if (age <= threshold){
        cout<< name << " is a teenageer." <<endl;
    }
    else{
        cout<< name << " is not a teenageer." <<endl;
    }

    return 0;
}

//Comment: it was simpler to get the input at runtime and then put some Control flow (if else) conditional statement.

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