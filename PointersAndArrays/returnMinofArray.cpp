#include <iostream>
using namespace std;

int min(int *, int);

int main()
{
    int a[] = {66, 44, 88, 11, 77, 33, 99, 55, 22};
    cout << "min(a, 9) = " << min(a, 9) << "\n";
}

int min(int *a, int n)
{
    int m = a[0];
    for (int i = 1; i < n; i++)
        if (a[i] < m)
            m = a[i];
    return m;
}
