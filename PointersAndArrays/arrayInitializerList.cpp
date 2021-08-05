//
//  arrayInitializerList.cpp
//  cPP_Datastructures
//
//  Created by Sean O'Brien on 8/4/21.
//
/* 
An array is a sequence of contiguous storage locations all of which can be access 
by the string array name followed by an integer subscript called the index of the array.
If a is the name of the array, than its elements are accessed using a[0], a[1],, a[2], a[3], etc.
The number of elements in the array is called its dimension. In C++, the array index always begins with 0.

In this case, we will use an initializer list to initialize an array
 */

#include <iostream>
using namespace std;

int main() {
    string a[] = {"Exxon", "Shell", "Texaco", "BP"};
    for (int i=0; i <4; i++) {
        cout << "a[" << i << "] = " << a[i] << "\n";
    }
}

/*
Remember that arrays are usually processed with for loops. Arrays can be initialized when they are declared 
using an initializer list. Also notice that the array dimension can be omitted when an initializer list is used.
The compiler will set the dimension(s) equal to the number of elements in the list.
*/