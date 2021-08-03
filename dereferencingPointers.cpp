//
//  dereferencingPointers.cpp
//  cPP_Datastructures
//
//  Created by Sean O'Brien on 8/2/21.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int n=66;
    string s ="Goodbye";
    int* pn=&n;         // initializes the pointer pn with the address of n
    string* ps=&s;      // initializes the pointer ps with the address of s
    cout << "pn = " << pn << "\n";
    cout << "ps = " << ps << "\n";
    
    int m=*pn;          // initializes m with the into to which pn points
    string t=*ps;       // initializes t with the string to which ps points
    
    cout << "m = " << m << "\n";
    cout << "t = " << t << "\n";

}

/*
 
 The symbol * is called the dereference operator. When used as a prefix to the
 name p of a pointer, the resulting expression *p evaluates to the value of the
 variable or object to which p points.

 */
