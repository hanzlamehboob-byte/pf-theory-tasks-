#include <iostream>
using namespace std;

int main() {
    int r1, r2, r3;
    cout<<"enter r1, r2, r3: ";
    cin >> r1 >> r2 >> r3;
    if (r1 < r2 && r1 < r3)
        cout << "1st: Runner1"<<endl;
    else if (r2 < r1 && r2 < r3)
        cout << "1st: Runner2"<<endl;
    else
        cout << "1st: Runner3"<<endl;
    return 0;
}
