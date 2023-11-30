#include <iostream>
using namespace std;
void ubah_kata(char ubah[])
{
    ubah[0] = 'k';
}
int main()
{
    // string a = "hasil";
    // int b;
    // string *c = &a;
    // string d = *c;

    // cout << "alamat variable a : " << &a << endl;
    // cout << "alamat variable b : " << &b << endl;

    // cout << "c : " << c << endl;
    // cout << "d : " << d << endl;
    char kata[] = "code";

    cout << "kata lama" << kata << endl;
    ubah_kata(kata);

    cout << "kata baru" << kata << endl;
    return 0;
}