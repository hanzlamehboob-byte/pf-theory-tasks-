#include <iostream>
using namespace std;
int main() {
    double sales;
    cout<<"Enter Sales: ";
    cin >> sales;
    if (sales > 50000)
        sales = sales + (0.25 * sales) + 250;
    cout << sales;
    return 0;
}
