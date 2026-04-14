#include <iostream>
using namespace std;
int main() {
    int model;
    cout<<"enter Model number: ";
    cin >> model;
    if (model == 300)
        cout << "Picture-in-picture, Stereo sound, Remote control";
    else if (model == 200)
        cout << "Stereo sound, Remote control";
    else if (model == 100)
        cout << "Remote control only";
    else 
    	cout<<"enter valid number";
    return 0;
}
