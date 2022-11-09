#include <bits/stdc++.h>
using namespace std;

double readDouble()
{
    double num;
    cin >> num;
    return num;
}

double divide(double a, double b)
{
    if (b == 0)
    {
        throw "Division by zero is not possible";
    }
    else
    {
        return a / b;
    }
}

int main()
{
    double a, b;
    cout << "Enter two numbers: ";
    try
    {
        a = readDouble();
        b = readDouble();
        cout << "Division: " << divide(a, b) << endl;
    }
    catch (const char *msg)
    {
        cout << msg << endl;
    }
    return 0;
}