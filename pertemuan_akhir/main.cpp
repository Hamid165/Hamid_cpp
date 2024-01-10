#include <iostream>

using namespace std;

void selectionsort_128(double arr[], int n)
{
    int pos_min;
    double temp;
    for (int i = 0; i < n - 1; i++)
    {
        pos_min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[pos_min])
            {
                pos_min = j;
            }
        }
        if (pos_min != i)
        {
            temp = arr[i];
            arr[i] = arr[pos_min];
            arr[pos_min] = temp;
        }
    }
}
void print_array(double a[], int length)
{
    for (int i = 0; i < length; i++)
    {
        cout << a[i] << "\t";
    }
    cout << endl;
}

int main()
{
    int length = 5;
    double arr[length] = {3.8, 2.9, 3.3, 4.0, 2.4};
    cout << "Nilai IPS Mahasiswa Sebelum Diurutkan : " << endl;
    print_array(arr, length);

    cout << "Nilai IPS Mahasiswa Setelah Diurutkan : " << endl;
    selectionsort_128(arr, length);
    print_array(arr, length);

    return 0;
}
// #include <iostream>

// using namespace std;

// void bubbleSort(string arr[], int length) {
//     bool not_sorted = true;
//     int j=0;
//     string tmp;

//     while (not_sorted){
//         not_sorted = false;
//         j++;
//         for (int i = 0; i < length - j; i++) {
//             if (arr[i] > arr[i + 1]) {
//                 tmp = arr[i];
//                 arr[i] = arr[i + 1];
//                 arr[i + 1] = tmp;
//                 not_sorted = true;
//             }
//         }
//     }
// }

// void print_array(string a[], int length) {
//     for (int i = 0; i < length; i++) {
//         cout << a[i] << "\t";
//     }
//     cout << endl;
// }

// int main(){
//     int length = 10;
//     string a[] = {"siti", "situ", "sana", "ana", "ani", "caca", "cici", "dida", "dodo", "didi"};
//     cout << "Nama-nama warga sebelum diurutkan : " << endl;
//     print_array(a, length);

//     bubbleSort(a, length);

//     cout << "Nama-nama setelah diurutkan : " << endl;
//     print_array(a, length);
// }