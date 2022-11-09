/*Write a function template for finding the max, min, total, average value in
the array. Include functions to perform each task.*/

#include <iostream>
using namespace std;

template <class T>
T max(T a[], int n)
{
    T max = a[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i] > max)
            max = a[i];
    }
    return max;
}

template <class T>
T min(T a[], int n)
{
    T min = a[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i] < min)
            min = a[i];
    }
    return min;
}

template <class T>
T total(T a[], int n)
{
    T sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
    }
    return sum;
}

template <class T>
T average(T a[], int n)
{
    T sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
    }
    return sum / n;
}

int main()
{
    int a[] = {1, 2, 3, 4, 5};
    float b[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    cout << "Max of a: " << max(a, 5) << endl;
    cout << "Min of a: " << min(a, 5) << endl;
    cout << "Total of a: " << total(a, 5) << endl;
    cout << "Average of a: " << average(a, 5) << endl;
    cout << "Max of b: " << max(b, 5) << endl;
    cout << "Min of b: " << min(b, 5) << endl;
    cout << "Total of b: " << total(b, 5) << endl;
    cout << "Average of b: " << average(b, 5) << endl;
    return 0;
}

