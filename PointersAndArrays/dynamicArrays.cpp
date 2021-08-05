//
//  dynamicArrays.cpp
//  cPP_Datastructures
//
//  Created by Sean O'Brien on 8/4/21.
//
/* 
An array that is declared as a static array is called 
that because it is allocated at compile-time. The demension 
must be a constant integer.

The new operator can be used to create a dynamic array whose
dimension may be a variable integer. Dynamic arrays are allocated at 
run-time.
 */

#include <iostream>
using namespace std;

int main() {
    int n; 
    cout << "How many children do you have? ";
    cin >> n; 
    string* child = new string[n];
    cout << "Please give me the names of your " << n << " children:\n";
    for (int i=0; i<n; i++) {
        cout << "\t" << i+1 << ": ";
        cin >> child[i]; 
    }
    cout << "They are " << child[0];
    for (int i=1; i<n; i++) {
        cout << ", " << child[i];
    }
    cout << ".";
    cout << "\n";
}

/*
Notice that the name of a dynamic array is a pointer to its element type.

The syntax for declaring a dynamic array is:
    xxxx* a = new xxxx[n]; where xxxx is the element type, and n is the dimension
    of the array, which may be any integer expression.
*/
