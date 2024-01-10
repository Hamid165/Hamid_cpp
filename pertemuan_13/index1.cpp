#include <iostream>
using namespace std;
void insertion_sort(char arr[], char length)
{
    char i, j, tmp;
    for (i = 1; i < length; i++)
    {
        j = i;
        while (j > 0 && arr[j - 1] > arr[j])
        {
            tmp = arr[j];
            arr[j] = arr[j - 1];
            arr[j - 1] = tmp;
            j--;
        } // end of while loop
    }     // end of for loop
}
void bubble_sort(char arr[], char length)
{
    bool not_sorted = true;
    char j = 0, tmp;
    while (not_sorted)
    {
        not_sorted = false;
        j++;
        for (char i = 0; i < length - j; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                tmp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = tmp;
                not_sorted = true;
            } // end of if
        }     // end of for loop
    }         // end of while loop
} // end of bubble_sort

void selectSort(char arr[], char n)
{
    char pos_min, temp;
    for (char i = 0; i < n - 1; i++)
    {
        pos_min = i;
        for (char j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[pos_min])
                pos_min = j;
        }
        if (pos_min != i)
        {
            temp = arr[i];
            arr[i] = arr[pos_min];
            arr[pos_min] = temp;
        }
    }
}
void prchar_array(char a[], char length)
{
    for (char i = 0; i < length; i++)
    {
        cout << a[i] << "\t";
    }
    cout << endl;
}
int main()
{
    char length = 6;
    char a[length] = {'a', 'b', 'c', 'd', 'e', 'f'};
    insertion_sort(a, length);
    bubble_sort(a, length);
    selectSort(a, length);
    prchar_array(a, length);
}