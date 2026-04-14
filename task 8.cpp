#include <iostream>
using namespace std;
int main() {
    int choice;
    cout << "1.Circle\n2.Rectangle\n3.Triangle\n";
    cin >> choice;
    if (choice == 1) {
        double r;
        cout<<"you chose circle"<<endl;
        cout<<"enter value of r: ";
        cin >> r;
        cout << 3.14159 * r * r;
    }
    else if (choice == 2) {
        double l, w;
        cout<<"you chose Rectangle"<<endl;
        cout<<"enter length and width: ";
        cin >> l >> w;
        cout << l * w;
    }
    else if (choice == 3) {
        double b, h;
        cout<<"you chose Triangle"<<endl;
        cout<<"enter base and heigt: ";
        cin >> b >> h;
        cout << 0.5 * b * h;
    }
    return 0;
}
