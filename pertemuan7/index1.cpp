#include <iostream>
using namespace std;
string bulan[] = {"jan", "feb", "mar", "apr", "mei",
                  "jun", "jul", "agt", "sep", "okt", "nov", "des"};

int masukan;
int main()
{
    cout << "masukkan no bulan = ";
    cin >> masukan;
    cout << "bulan ke - " << masukan << " adalah : " << bulan[masukan - 1];

    return 0;
}