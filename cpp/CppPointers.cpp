#include<iostream>
using namespace std;

int main() 
{
    int n = 5;
    cout << &n << endl;

    int* ptr = &n;
    cout << ptr << endl;
    cout << *ptr << endl;

    *ptr = 10;
    cout << *ptr << endl;
    cout << n << endl;

    int v;
    int* ptr2;
    ptr2 = &v;
    v=7;
    cout << "v=" << *ptr2 << endl;

    return 0;
}
