// WAP that illustrates the application of multiple catch statements.

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
            throw 1;
        }
        else if (b == 1)
        {
            throw 2.0;
        }
        else if (b == 2)
        {
            throw 'a';
        }
        else
        {
            cout << "a / b = " << a / b << endl;
        }
    }
    catch (int e)
    {
        cout << "Division by zero is not possible" << endl;
    }
    catch (double e)
    {
        cout << "Division by one is not possible" << endl;
    }
    catch (char e)
    {
        cout << "Division by two is not possible" << endl;
    }
    return 0;
}