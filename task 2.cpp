#include <iostream>
using namespace std;

int main() {
    int temperature;
    cout<<"enter temprature: ";
    cin >> temperature;
    if (temperature >= -50 && temperature <= 150)
        cout << "The number is valid";
	else
	cout<<"invalid number";
    return 0;
}
