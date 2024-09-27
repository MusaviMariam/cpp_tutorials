#include<iostream>
#include<string>

using namespace std;

int main (){
    int rows=3;
    int cols=2;
    int array[rows][cols]; 

    cout<< "A is a 2D array"<<endl;;

    for (int i=0; i<rows; i++){
        for (int j=0; j<cols; j++){
            cout<< "Enter value for A["<< i <<"]["<<j<<"]= ";
            cin>> array[i][j];   
        }
    }
    cout<<endl;

    int valMin = array[0][0];
    int valMax =array[0][0];


    cout<< "A = " <<endl;
    for (int i=0; i<rows; i++){
        for (int j=0; j<cols; j++){
            if (array[i][j] < valMin){
                valMin = array[i][j];
            }
            if (array[i][j]> valMax){
                valMax=array[i][j];
            }
            cout<< array[i][j]<<" ";//Printing values of array

        }
        cout<<endl;
    }


    cout<<endl;
   
    for (int i=0; i< rows; i++){
        int rowSum=0;
        for (int j=0; j< cols; j++){
            rowSum += array[i][j];
        }
        cout<<"The sum of row "<< i+1 <<" is: "<< rowSum <<endl;

    }
    cout<<endl;

    for (int j=0; j< cols; j++){
        int colSum=0;
        for (int i=0; i< rows; i++){
            colSum += array[i][j];
        }
        cout<<"The sum of column "<< j+1 <<" is: "<< colSum << endl;

    }

    cout<<endl;

    cout<< "The minimum element in A is: " << valMin <<endl;
    cout<< "The maximum element in A is: " << valMax <<endl;

    return 0;
}


//Comments: I do not know how to do the second part of Problem 4 which is dynamic memory allocation

/*[2D Arrays, Input & Output] Q4: Write a c++ program to read integer values in a 2D array. Print the sum of each row, each column, and find the minimum and maximum value in the entire 2D array.
Use dynamic memory allocation and free all the memory before terminating the program.  

Sample:
Input 1: 
1 4
5 51
2 3

Output 1:
Sum of row 1 = 5
Sum of row 2 = 56
Sum of row 3 = 5
Sum of column 1 = 8
Sum of column 2 = 58
Minimum: 1
Maximum: 51


Input 2: 
2 3 4
34 17 8

Output 2:
Sum of row 1 = 9
Sum of row 2 = 59
Sum of column 1 = 36
Sum of column 2 = 20
Sum of column 3 = 12
Minimum: 2
Maximum: 34*/