#include <iostream>
using namespace std;
int main()

{
    int A[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    for (int j = 0; j < 3; j++)
    {
        for (int k = 0; k < 3; k++)
        {
            cout << "A [" << j << "][" << k << "] = " << A[j][k] << endl;
        }
        cout << endl;
    }

    // int data[10] = {4,
    //                 1,
    //                 0,
    //                 -9,
    //                 8,
    //                 5,
    //                 -1,
    //                 2,
    //                 3,
    //                 -7};
    // int element,
    //     max;
    // max = data[0];
    // for (element = 0; element <= 9; ++element)
    // {
    //     if (data[element] > max)
    //         max = data[element];
    //     else
    //         max = max;
    // }
    // cout << "The maximum value in the array is: " << max << endl;
    return 0;

    // int tab[10];
    // int i;
    // for (i = 0; i < 10; i++)
    // {
    //     tab[i] = i * 10;
    //     cout << tab[i] << endl;
    // }
    // return 0;
}