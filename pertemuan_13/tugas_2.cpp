#include <iostream>
using namespace std;

void bubbleshort_129(string arr_129[], int panjang_129)
{
    for (int i = 0; i < panjang_129 - 1; i++)
    {
        for (int j = 0; j < panjang_129 - i - 1; j++)
        {
            if (arr_129[j] > arr_129[j + 1])
            {
                string temp = arr_129[j];
                arr_129[j] = arr_129[j + 1];
                arr_129[j + 1] = temp;
            }
        }
    }
}

int main()
{
    string arr_129[] = {"siti", "situ", "sana", "ana", "ani", "caca", "cici", "dida", "dodo", "dadi"};
    int panjang_129 = sizeof(arr_129) / sizeof(arr_129[0]);

    cout << "Sebelum diurutkan" << endl;
    for (int i = 0; i < panjang_129; i++)
    {
        cout << arr_129[i] << ", ";
    }
    cout << endl;

    bubbleshort_129(arr_129, panjang_129);

    cout << "Sesudah diurutkan" << endl;
    for (int i = 0; i < panjang_129; i++)
    {
        cout << arr_129[i] << ", ";
    }
    cout << endl;

    return 0;
}