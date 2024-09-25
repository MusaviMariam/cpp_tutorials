#include <iostream>
#include <string>

using namespace std;

int main (){


    int rows=2;
    int cols=2;
    int array[rows][cols];

    cout<< "Enter values for 2-D array: " <<endl;
    for (int i =0; i<rows; i++){
        for (int j=0; j<cols; j++){
            cout<< "Enter value for [" <<i <<"]["<<j << "]= " << endl;
            cin>> array[i][j];
        }
    }



    cout<<endl;
    cout<<"Your 2D array is = " <<endl;
        for (int i =0; i<rows; i++){
        for (int j=0; j<cols; j++){
            cout<< array[i][j];
        }
        cout<<endl;
    }
    return 0;
}