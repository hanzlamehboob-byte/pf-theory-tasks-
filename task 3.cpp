#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout<<"enter the value of a and b: ";
    cin >> a >> b;
    if (a > b)
        cout << "Larger: " << a <<endl<< "Smaller: " << b;
    else
        cout << "Larger: " << b <<endl<< "Smaller: " << a;
    return 0;
}
