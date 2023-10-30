#include <iostream>
using namespace std;
int main()
{
    int bil1, bil2;
    int sisa;
    cout << "masukan bilangan pertama = ";
    cin >> bil1;
    cout << "masukan bilangan kedua = ";
    cin >> bil2;
    if (bil1 < bil2)
    {
        int temp = bil1;
        bil1 = bil2;
        bil2 = temp;
    }
    do
    {
        sisa = bil1 % bil2;
        bil1 = bil2;
        bil2 = sisa;
    } while (sisa != 0);
    {
        cout << "\nFaktor Persekutuan terbesar :" << bil1;
    }
    
    return 0;
}
