/*
 * Program to change Celsius to Fahrenheit with obj class
 */

#include <iostream>
using namespace std;
class temp {
    int a, b;
    public:
    void fah() {
        cout << "Enter temperature in °C : ";
        cin >> a;
        b = (a*9/5)+32;
        
        cout << "Temperature in °F : " << b << endl;
    }
};
int main()
{
    temp no;
    no.fah();

    return 0;
}
