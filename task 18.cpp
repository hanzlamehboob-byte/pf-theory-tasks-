#include <iostream>
using namespace std;
int main() 
{
    int choice, months;
    cout<<"enter choice: ";
    cin >> choice;
    if (choice == 4) 
    cout<<"enter month: ";
    cin >> months;
    if (choice == 1)
        cout << months * 40;
    else if (choice == 2)
        cout << months * 20;
    else if (choice == 3)
        cout << months * 30;
    return 0;
}
