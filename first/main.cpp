#include <iostream>
using namespace std;

int addem(int, int);
int addem(int a, int b)
{
    int c;
    c = a + b;
    return c;
}
int main()
{
    int x = 5, y = 2, z;
    z = addem(x, y);
    cout << z << endl
    return 0;
}


