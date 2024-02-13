// Author: Zuhayer Tashin
// Course: CSCI-135
// Instructor: Tong Yi
// Assignment: Lab 4C
// Write a program cross.cpp that asks the user to input the shape size, and prints a diagonal cross of that dimension.

#include <iostream>
using namespace std;

int main(){
    int size; // declared size variable

    cout << "Input size: ";
    cin >> size; // User inputs size

    cout << endl;  

           for (int i = 1; i <= size; i++) {
 
        // Print characters of current row
        for (int j = 1; j <= size; j++) {
 
            if (j == i || j == (size + 1 - i))
                cout << "*";
            else
                cout << " ";
        }
 
        // Print a newline before printing the
        // next row.
        cout << endl;

}
}
