//
//  passingByConstantReference.cpp
//  cPP_Datastructures
//
//  Created by Sean O'Brien on 8/2/21.
//

/* Passing by value is safer than passing by reference because it prevents the unintentional
changing of the argument. But it has the disadvantage of having to duplicate the argument. When
an object is passed to a function that should not change it, it should be passed by constant
reference. This has the advantage of preventing unintentional changes ot the argument without
the disadvantage of duplicating it.
 */


#include <ctype.h>  // defines toupper() function
#include <iostream>
using namespace std;


string toUpper(const string&);

int main() {
    string name;
    cout << "Enter your name: ";
    cin >> name;
    // getline(cin, name);
    /*
     Important. 'cin' stops at whitespace. if you were to enter in a full name, the output will only
     give the first set of letters typed before the space.  If you want to get everything up to
     the newline, you will need to do something like this:
     
     getline(cin, name);

     */
     
    cout << "Hello, " << toUpper(name) << "!\n";;
}

string toUpper(const string& s) {
    string ss(s);
    for (int i=0; i<s.length(); i++)
        ss[i] = toupper(s[i]);  // copies the uppercase version of s[i]
        return ss;
}

