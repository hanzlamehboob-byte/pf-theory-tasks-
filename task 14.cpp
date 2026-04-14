#include <iostream>
using namespace std;
int main() {
    int m, d, y;
    cout<<"enter month, day, and the last 2 digit of year ";
    cin >> m >> d >> y;
    if (m * d == y)
        cout << "MAGIC";
    else
        cout << "NOT MAGIC";
    return 0;
}
