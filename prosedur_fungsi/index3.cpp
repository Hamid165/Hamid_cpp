#include <iostream>
using namespace std;

int bil1, bil2;
void banding(int a, int b)
{

    if (a > b)
    {
        cout << a << endl;
    }
    else if (a == b)
    {
        cout << "tidak ada" << endl;
    }
    else
    {
        cout << b << endl;
    }
}
int main()
{
    cout << "masukan bilangan pertama : ";
    cin >> bil1;
    cout << "masukan bilangan kedua : ";
    cin >> bil2;
    cout << "bilangan yang lebih besar :";
    banding(bil1, bil2);
    return 0;
}