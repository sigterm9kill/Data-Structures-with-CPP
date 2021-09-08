#include <iostream>
using namespace std;

int *append(int *, int, int *, int);
void print(int *, int);

int main()
{
    int a[] = {11, 22, 33, 44, 55};
    int b[] = {66, 77, 88, 99};
    print(a, 5);
    print(b, 4);
    int *c = append(a, 5, b, 4);
    print(c, 9);
}

int *append(int *a, int m, int *b, int n)
{
    int *c = new int[m + n];
    for (int i = 0; i < m; i++)
        c[i] = a[i];
    for (int i = m; i < m + n; i++)
        c[i] = b[i - m];
    return c;
}

void print(int *a, int n)
{
    cout << "{" << a[0];
    for (int i = 1; i < n; i++)
        cout << ", " << a[i];
    cout << "}\n";
}
