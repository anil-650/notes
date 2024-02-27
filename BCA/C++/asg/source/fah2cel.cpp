/*
 * Program to change Fahrenheit to Celsius with obj class
 */

#include <iostream>
using namespace std;
class temp {
    int a, b;
    public:
    void cel() {
        cout << "Enter temperature in °F : ";
        cin >> a;
        b = (a-32)*(5/9);
        
        cout << "Temperature in °C : " << b << endl;
    }
};
int main()
{
    temp no;
    no.cel();

    return 0;
}
