// WAP to demonstrate the concept of re-throwing an exception.

#include <iostream>
using namespace std;


int main()
{
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    try
    {
        if (b == 0)
        {
            throw "Division by zero is not possible";
        }
        else
        {
            cout << "Division: " << a / b << endl;
        }
    }
    catch (const char *msg)
    {
        cout << msg << endl;
    }
    return 0;
}