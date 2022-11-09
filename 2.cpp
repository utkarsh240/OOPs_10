// Write a function template to perform binary search in an array.

#include <iostream>
using namespace std;

template <class T>

int binarySearch(T a[], int n, T key)
{
    int low = 0, high = n - 1, mid;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (a[mid] == key)
            return mid;
        else if (a[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}

int main()
{
    int a[] = {1, 2, 3, 4, 5};
    float b[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    cout << "Index of 3 in a: " << binarySearch(a, 5, 3) << endl;
    cout << "Index of 3.3 in b: " << binarySearch(b, 5, 3.3) << endl;
    return 0;
}