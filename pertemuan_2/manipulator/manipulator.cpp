#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    cout << "Baris ini tanpa endl.";
    cout << "Manipulator endl" << endl;
    cout << dec << 10 << endl;
    cout << hex << 10 << endl;
    cout << oct << 10 << endl;
    cout << setiosflags(ios::fixed);
    cout << setprecision(4) << 123.4567891 << endl;
    return 0;
}