#include <iostream>
using namespace std;

void selectionsort_129(float array_129[], int panjang_129)
{
    for (int i = 0; i < panjang_129 - 1; i++)
    {
        float minimum_129 = array_129[i];
        int index_min_129 = i;
        for (int j = i + 1; j < panjang_129; j++)
        {
            if (minimum_129 > array_129[j])
            {
                minimum_129 = array_129[j];
                index_min_129 = j;
            }
        }
        float temp_129 = array_129[index_min_129];
        array_129[index_min_129] = array_129[i];
        array_129[i] = temp_129;
    }
}

int main()
{
    float array_129[] = {3.8, 2.9, 3.3, 4.0, 2.4};
    int panjang_129 = sizeof(array_129) / sizeof(array_129[0]);

    cout << "Sebelum diurutkan :" << endl;
    for (int i = 0; i < panjang_129; i++)
    {
        cout << array_129[i] << ", ";
    }
    cout << endl;

    selectionsort_129(array_129, panjang_129);

    cout << "Setelah diurutan :" << endl;
    for (int i = 0; i < panjang_129; i++)
    {
        cout << array_129[i] << ", ";
    }
    cout << endl;

    return 0;
}