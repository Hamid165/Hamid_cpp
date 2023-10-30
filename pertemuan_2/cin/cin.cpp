#include <iostream>
using namespace std;
int main()
{
    int bilangan;
    char karakter;
    string kata;
    cout << "Inputkan bilangan: ";
    cin >> bilangan;
    cout << "Inputkan karakter: ";
    cin >> karakter;
    cout << "Inputkan kata: ";
    cin >> kata;
    cout << endl
         << "Data yang Anda inputkan adalah: " << endl;
    cout << bilangan << endl;
    cout << karakter << endl;
    cout << kata << endl;
    return 0;
}