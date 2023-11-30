#include <iostream>
using namespace std;
int main()
{
    string a = "hasil";
    int b;
    string *c = &a;
    string d = *c;

    cout << "alamat variable a : " << &a << endl;
    cout << "alamat variable b : " << &b << endl;

    cout << "c : " << c << endl;
    cout << "d : " << d << endl;
    return 0;
}