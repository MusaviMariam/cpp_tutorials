#include <iostream>
using namespace std;
/// create a struct Student to store name, age, marks and grade
struct Student {
 string name;
 int age;
 double marks;
 char grade;
 void display(){
    cout<< name <<endl;
};

};
class Teacher {
    
string name;
void display(){
    cout<< name <<endl;
};

};
//struct is a collection of different type of values and data types. struct is a C feature and class is a CPP feature
int main (){
    struct Student student1;
    Student student2;
    Teacher teacher1;

    student1.age=20;
    student1.grade='A';
    student1.marks=500;
    student1.name="Emmanuel";


    student2.age=20;
    student2.grade='B';
    student2.marks=400;
    student2.name="Ama";

    

    return 0;
}