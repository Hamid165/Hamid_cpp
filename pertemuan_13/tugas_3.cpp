#include <iostream>
using namespace std;

void ascending_129(char arr_129[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr_129[j] > arr_129[j + 1])
            {
                char temp = arr_129[j];
                arr_129[j] = arr_129[j + 1];
                arr_129[j + 1] = temp;
            }
        }
    }
}

void descending_129(char arr_129[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr_129[j] < arr_129[j + 1])
            {
                char temp = arr_129[j];
                arr_129[j] = arr_129[j + 1];
                arr_129[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int n;
    cout << "Input <n> : ";
    cin >> n;

    char huruf_129[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Karakter ke-" << i + 1 << " : ";
        cin >> huruf_129[i];
    }
    cout << "Ururtan Karakter sebelum di sorting :" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << huruf_129[i] << ", ";
    }
    cout << endl;

    ascending_129(huruf_129, n);
    cout << "Ururtan Karakter setelah ascending sort :" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << huruf_129[i] << ", ";
    }
    cout << endl;

    descending_129(huruf_129, n);
    cout << "Ururtan Karakter setelah descending sort :" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << huruf_129[i] << ", ";
    }
    cout << endl;

    return 0;
}