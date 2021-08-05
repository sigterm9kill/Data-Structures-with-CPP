//
//  maxElementOfArray.cpp
//  cPP_Datastructures
//
//  Created by Sean O'Brien on 8/4/21.
//
/* 
For fun, passing an array to a function again, using an iterator to 
compare. Desk check the max function below. Why would this function 
act differently WITH for loop brackets inside of the max function?

i.e. 
int max(int* a, int n) {
    int m = a[0]; 
    for (int i = 1; i<n; i++) {
        if(a[i] > m) 
            m = a[i];
            return m; 
            }
}

versus: 

int max(int* a, int n) {
    int m = a[0]; 
    for (int i = 1; i<n; i++) 
        if(a[i] > m) 
            m = a[i];
            return m; 
       
}
*/

#include <iostream>
using namespace std; 

int max(int* a, int n); 

int main() {
    int rc = 0; 
    int a[] = { 44, 77, 33, 66, 55, 88, 22 };
    cout << "max(a, 7)= " << max(a,7) << "\n";
}

int max(int* a, int n) {
    int m = a[0]; 
    for (int i = 1; i<n; i++) 
        if(a[i] > m) 
            m = a[i];
            return m; 
       
}
