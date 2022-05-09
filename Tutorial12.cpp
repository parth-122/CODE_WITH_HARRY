// Swap two variables using pointer and function.

#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int a = 12;
    int b = 13;

    int *p;
    p = &b;
    int *x;
    x = &a;

    cout << "The Value of A is ::" << *p << endl;
    cout << "The Value of B is ::" << *x << endl;
    return 0;
}
