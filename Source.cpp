#include <iostream>
using namespace std;
int main()
{
    setlocale(0, "rus");
    int n, m;
    cout << "������� n ";
    cin >> n;
    cout << "������� m ";
    cin >> m;
    cout << "m = " << m << endl << "n = " << n << endl;
    cout << "m + --n = " << (m + --n) << endl;
    cout << "m = " << m << endl << "n = " << n << endl;
    cout << "m++ < ++n = " << (m++ < ++n) << endl;
    cout << "m = " << m << endl << "n = " << n << endl;
    cout << "n-- < --m = " << (n-- < --m) << endl;
    cout << "m = " << m << endl << "n = " << n << endl;
    return (0);
}