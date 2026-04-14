#include <iostream>
using namespace std;
int main() {
    double sales, commission;
    cout<<"enter sales: ";
    cin >> sales;
    if (sales <= 10000)
        commission = 0.10;
    else if (sales <= 15000)
        commission = 0.15;
    else
        commission = 0.20;
    cout << commission;
    return 0;
};
