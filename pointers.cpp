//
//  pointers2_1.cpp
//  cPP_Datastructures
//
//  Created by Sean O'Brien on 8/2/21.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {

    int n = 44;
    string s = "Hello";
    cout << "&n = " << &n << "\n";
    cout << "&s = " << &s << "\n";
    int* p;     // declares p to be a dangling pointer to int
    int* q=0;     // initializes the pointer q to be null
    int* pn=&n;     // initializes the pointer pn with the address on n
    string* ps=&s;     // initializes the pointer ps with the address of s
    cout << "p = " << p << "\n";
    cout << "q = " << q << "\n";
    cout << "pn = " << pn << "\n";
    cout << "ps = " << ps << "\n";
}

/*
 
 Pointers

 Example:
  The declarations
 int n=44;
 String s="Hello";

 Declare the variable n initialized to the value 44 and the string object s  initialized to the value "Hello". Variables and objects are sequences of bytes in memory that have associated names and types. The identifier n is the name of an integer of type int, and the identifier s is the name of an object type string. The address of a variable or object is the address of its first byte of memory storage. Addresses are usually expressed as hexadecimal numerals.

 A pointer is a variable whose value either is 0 or is the address of some other variable or object. If its value is 0, we say the pointer is null.Otherwise, we say that the pointer points to the variable or object whose address it stores. An uninitialized pointer is called a dangling pointer. Like any other uninitialize variable, its value if unpredictable.

 A pointer's type is "pointer to xxxx", where xxxx is the type of the variable or object to which it points. The identifier for "pointer xxxx" is xxxx*. For example:

 int* p;         // a dangling pointer
 int* q=0;         // a null pointer
 Int *pn=&n;         // points to n
 string* ps=&s;     // points to s
 
 */
