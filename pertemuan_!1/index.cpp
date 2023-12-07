#include <iostream>
using namespace std;

int main()
{
    int data[] = {5, 7, 3, 2};
    int j = sizeof(data) / sizeof(*data);
    int temp;
    cout << "Deret Data = ";
    for (int i = 0; i < j; i++)
    {
        cout << data[i] << " ";
    }

    cout << endl;
    // Proses sorting
    for (int i = 0; i < j; i++)
    {
        for (int h = 0; h < j; h++)
        {
            if (data[h] > data[h + 1])
            {
                temp = data[h];
                data[h] = data[h + 1];
                data[h + 1] = temp;
            }
        }
        cout << endl;
        cout << "Tahap: " << i + 1 << " : ";
        // Menhasilkan tahapan proses step by step
        for (int a = 0; a < j; a++)
        {
            cout << data[a] << " ";
        }
    }
    cout << endl;
    cout << "Hasil akhir: ";
    for (int a = 0; a < j; a++)
    {
        cout << data[a] << " ";
    }
    return 0;
}
