// WAP that demonstrates how certain exception types are not allowed to be thrown.

#include <iostream>
using namespace std;

int main()
{
    try
    {
        throw 1;
    }
    catch (int e)
    {
        cout << "Integer exception" << endl;
    }
    catch (double e)
    {
        cout << "Double exception" << endl;
    }
    return 0;
}