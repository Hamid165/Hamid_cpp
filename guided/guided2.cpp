#include <iostream>
using namespace std;
int main()
{
    int j = 10;
    int k;
    while (j >= 1)
    {
        k = 1;
        while (k <= j)
        {
            cout << k * j << " ";
            k++;
        }
        cout << endl;
        j--;
    }

    return 0;
}