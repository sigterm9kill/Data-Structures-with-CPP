//
//  passingByReference.cpp
//  cPP_Datastructures
//
//  Created by Sean O'Brien on 8/2/21.
//

/*
 When a function parameter is declared to have a reference type, we say that its arguments are
 passed by reference. The effect is that the parameter becomes and alias for whatever argument is
 passed to it, and therefore any change made to the parameter is also made to that argument.
 
 If the parameter's type is not a reference type, then the parameter acts like a local variable.
 After being initialized with the value of the argument or expression passed to it, it is
 independent of the argument. Its scope is limited to the body of the function, and therefore
 any change made to it has not effect outside of the function. This is called bassing by value.
 */

#include <iostream>
using namespace std;

void f(int, int&);

int main(int argc, const char * argv[]) {
    int m=22;
    int n=44;
    cout << "m = " << m << "\n";
    cout << "n = " << n << "\n";
    
    f(m, n);
    cout << "m = " << m << "\n";
    cout << "n = " << n << "\n";
}

void f(int x, int& y) {
    x += 1000;      // adds 1000 to x
    y *= 1000;      // multiplies y by 1000
}

/*
 The function f() changes the values of both of its parameters, but only the change on y affects its
 argument because it is passed by reference.
 
 Passing by value is safer than passing by reference because it prevents the unintentional
 changing of the argument. But it has the disadvantage of having to duplicate the argument. When
 an object is passed to a function that should not change it, it should be passed by constant
 reference. This has the advantage of preventing unintentional changes ot the argument without
 the disadvantage of duplicating it.
 */
