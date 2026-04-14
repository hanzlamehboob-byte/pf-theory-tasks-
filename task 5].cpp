#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    cout<<"enter numbers: ";
    cin >> num1 >> num2;
    if (num2 != 0)
        cout << "Result: " << (float)num1 / num2;
    else
        cout << "Division by zero is not possible.";
    return 0;
}
