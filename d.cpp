// WAP to do the following:
// function to read double type from the user
// a function to calculate the division of double type numbers
// a try block to through an exception when a wrong type of data is keyed in
// a try block to detect and throw an exception if condition "divided by zero" occurs 
// appropriate catch block to handle the exception thrown

#include <bits/stdc++.h>
using namespace std;

double readDouble() {
    double x;
    cin >> x;
    return x;
}

double divide(double x, double y) {
    if (y == 0) {
        throw "Divide by zero";
    }
    return x / y;
}

int main() {
    double x, y;
    cout << "Enter two numbers: ";
    try {
        x = readDouble();
        y = readDouble();
        cout << "Division: " << divide(x, y) << endl;
    } catch (const char *e) {
        cout << e << endl;
    }
    return 0;
}