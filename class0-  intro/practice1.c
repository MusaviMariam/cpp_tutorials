#include <stdio.h>

/// create a struct Student to store name, age, marks and grade
struct Student {
 char* name;
 int age;
 double marks;
 char grade;
 void display(){
    printf ("%s",name);
};
};
//struct is a collection of different type of values and data types. struct is a C feature and class is a CPP feature
int main (){
    struct Student student1;
    struct Student student2;

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