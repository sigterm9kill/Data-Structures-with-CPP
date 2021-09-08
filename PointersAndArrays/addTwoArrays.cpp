#include <iostream>
using namespace std;

int *sum(int *, int, int *, int);
void print(int *, int);

int main()
{
    int a[] = {11, 22, 33, 44, 55};
    int b[] = {88, 77, 66};
    print(a, 5);
    print(b, 3);
    int *c = sum(a, 5, b, 3);
    print(c, 5);
}

int *sum(int *a, int m, int *b, int n)
{
    int *aa, *bb; // aa is the shorter array
    int mm, nn;
    if (m < n)
    {
        aa = a,
        bb = b,
        mm = m,
        nn = n;
    }
    else
    {
        aa = b,
        bb = a,
        mm = n,
        nn = m;
    }
    int *c = new int[nn];
    for (int i = 0; i < mm; i++)
        c[i] = aa[i] + bb[i];
    for (int i = mm; i < nn; i++)
        c[i] = bb[i];
    return c;
}

void print(int *a, int n)
{
    cout << "{" << a[0];
    for (int i = 1; i < n; i++)
        cout << ", " << a[i];
    cout << "}\n";
}