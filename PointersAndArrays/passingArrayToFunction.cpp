//
//  passingArrayToFunction.cpp
//  cPP_Datastructures
//
//  Created by Sean O'Brien on 8/4/21.
//
/* 
An Array parameter can be declared like so:
    void sort(double a[], int size); for example... 
But in C++, an array name is actually a constant pointer to its first
element. Therefore, an array parameter can also be declared like this:
    void sort(double* a, int size);

Both forms are equivalent. Either way, the function is called by passing 
the array name as the argument, like this =>
    sort(a, 100); 
 */

// C++ Program to display marks of 5 students

#include <iostream>
using namespace std;

// declare function to display marks
// take a 1d array as parameter
void display(int m[5]); 

int main() {

    // declare and initialize an array
    int marks[5] = {88, 76, 90, 61, 69};
    
    // call display function
    // pass array as argument
    display(marks);

    return 0;
}


// declare function to display marks
// take a 1d array as parameter
void display(int m[5]) {
    cout << "Displaying marks: " << endl;

    // display array elements    
    for (int i = 0; i < 5; ++i) {
        cout << "Student " << i + 1 << ": " << m[i] << endl;
    }
}