#include <iostream>
using namespace std;

int main() {
    double balance, fee = 10;
    int checks;
    cout<<"enter balane and checks: ";
    cin >> balance >> checks;
    if (checks < 20)
        fee += checks * 0.10;
    else if (checks <= 39)
        fee += checks * 0.08;
    else if (checks <= 59)
        fee += checks * 0.06;
    else
        fee += checks * 0.04;
    if (balance < 400)
        fee += 15;
    cout << "Fees: " << fee;
    return 0;
}
