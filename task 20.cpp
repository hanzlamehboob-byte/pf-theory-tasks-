#include <iostream>
using namespace std;
int main() 
{
    int sec;
    cout<<"enter seconds: ";
    cin >> sec;
    if (sec >= 86400)
        cout << "Days: " << sec / 86400 << endl;
    if (sec >= 3600)
        cout << "Hours: " << sec / 3600 << endl;
    if (sec >= 60)
        cout << "Minutes: " << sec / 60 << endl;
    return 0;
}
