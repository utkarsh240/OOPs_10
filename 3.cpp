// Write a function template to perform sort in an array.

#include <iostream>
using namespace std;

template <class T>

void sort(T a[], int n)
{
    T temp;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

int main()
{
    int a[] = {5, 4, 3, 2, 1};
    float b[] = {5.5, 4.4, 3.3, 2.2, 1.1};
    sort(a, 5);
    sort(b, 5);
    for (int i = 0; i < 5; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << b[i] << " ";
    }
    return 0;
}