

/**
Multidemensional arrays are declared the same way as one-dimensional arrays:
double m[5][4]; // a two-dimensional array
int x[4]5[2]3[4][3][2]; // a fice-dimnensional array

They can also be initialize the ame way:
    int c[2][3] = {{22,66,88}, {55,77,44}};

Notice that a two-dimensional array can be regarded as an array of arrays.
When processing a multidimensional array, it is usually helpful to use a typedef
do define the array type, expecially if it has to be passed to a function.

Example: 
*/

#include <iostream>
using namespace std;

const int ROWS = 2;
const int COLS = 3;
typedef int Array[ROWS][COLS]; // Defines the type Array

void swapCols(Array, int, int);
void print(const Array);

int main()
{
    Array a = {{11, 33, 55}, {22, 44, 66}};
    print(a);
    swapCols(a, 1, 2);
    print(a);
}

void swapCols(Array a, int c1, int c2)
{
    for (int i = 0; i < ROWS; i++)
    {
        int temp = a[i][c1];
        a[i][c1] = a[i][c2];
        a[i][c2] = temp;
    }
}

void print(const Array a)
{
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
            cout << a[i][j] << " ";
        cout << "\n";
    }
    cout << "\n";
}

/**
The typedef defines Array to be the type for arrays 
  of ints with ROWS rows and COLS colums. Those two constants
  are defined to be 2 and 3. THe call swapCols(a, 1, 2) function 
  interchanges column 1 wiht column 2 (which are the second and third colums
  since numbering begins with 0).
*/