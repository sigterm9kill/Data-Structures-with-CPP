//
//  references.cpp
//  cPP_Datastructures
//
//  Created by Sean O'Brien on 8/2/21.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
 
    int n=44;
    int& rn=n;           // declares rn to be a reference for n
    cout << "n = " << n << "\n";
    cout << "rn = " << rn << "\n";
    n *=2;              // double n, and rn
    cout << "n = " << n << "\n";
    cout << "rn = " << rn << "\n";
    rn /= 2;            // halves rn, and n
    cout << "n = " << n << "\n";
    cout << "rn = " << rn << "\n";
}

/*
 
 There is only one int in this program. It is declared on the first line to be
 named n. The second line declares rn to be a reference to n, which means that
 it is just another name for the same variable. Consequently, when n is doubled,
 so is rn, and when rn is halved, so is n.
 */
