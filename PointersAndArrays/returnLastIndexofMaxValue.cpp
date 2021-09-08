#include <iostream>
using namespace std;

int lastIndexOfMax(int *, int);

int main()
{
    int a[] = {66, 44, 88, 11, 77, 33, 88, 55, 22};
    int j = lastIndexOfMax(a, 9);
    cout << "lastIndexOfMax(a,9) = " << j << "\n";
    cout << "a[lastIndexOfMax(a,9)] = " << a[j] << "\n";
}

int lastIndexOfMax(int *a, int n)
{
    int j = 0;
    for (int i = 1; i < n; i++)
        if (a[i] >= a[j])
            j = i;
    return j;
}
