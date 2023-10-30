#include <iostream>
using namespace std;

int main()
{
    int bil;
    long faktorial = 1;
    cout << "Masukan bilangan yang akan dihitung : ";
    cin >> bil;
    int c = bil;
    cout << c << "! = ";
    while (c >= 1)
    {
        faktorial *= c;
        if (c != 1)
        {
            cout << c << "x";
        }
        else
        {
            cout << c << " = ";
        }
        c--;
    }
    cout << faktorial;
    return 0;
}