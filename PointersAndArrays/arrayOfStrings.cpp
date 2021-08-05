//
//  arrayOfStrings.cpp
//  cPP_Datastructures
//
//  Created by Sean O'Brien on 8/2/21.
//
//
//  arrayOfStrings.cpp
//  cPP_Datastructures
//
//  Created by Sean O'Brien on 8/4/21.
//
/* 
An array is a sequence of contiguous storage locations all of which can be access 
by the string array name followed by an integer subscript called the index of the array.
If a is the name of the array, than its elements are accessed using a[0], a[1],, a[2], a[3], etc.
The number of elements in the array is called its dimension. In C++, the array index always begins with 0.
 */

#include <iostream>
using namespace std;

int main() {
    string a[4];    // an array of 4 strings
    a[0] = "Microsoft";
    a[1] = "Oracle";
    a[2] = "Inprise";
    a[3] = "IBM";

    for (int i=0; i<4; i++) {
        cout << "a[" << i << "] = "<< a[i] << "\n";
    }


}