// Write a class template to represent a generic vector. Include member functions to perform the following task
//  To create the vector
//  To modify the value of a given element
//  To multiply by a scalar value
//  To display the vector in the form (m1, m2, m3 etc) where m1, m2 and m3 represents magnitude

#include <iostream>
using namespace std;

template <class T>

class Vector
{
private:
    T *v;
    int n;

public:
    Vector(int n)
    {
        this->n = n;
        v = new T[n];
    }
    void modify(int i, T val)
    {
        v[i] = val;
    }
    void multiply(T val)
    {
        for (int i = 0; i < n; i++)
        {
            v[i] *= val;
        }
    }
    void display()
    {
        cout << "(";
        for (int i = 0; i < n; i++)
        {
            cout << v[i];
            if (i != n - 1)
            {
                cout << ", ";
            }
        }
        cout << ")" << endl;
    }
};


int main()
{
    Vector<int> v1(3);
    v1.modify(0, 1);
    v1.modify(1, 2);
    v1.modify(2, 3);
    v1.display();
    v1.multiply(2);
    v1.display();
    Vector<float> v2(3);
    v2.modify(0, 1.1);
    v2.modify(1, 2.2);
    v2.modify(2, 3.3);
    v2.display();
    v2.multiply(2);
    v2.display();
    return 0;
}
