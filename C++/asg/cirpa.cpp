/*
 * Program calculate area and perimeter of a circle 
 * with obj class
 */

#include <iostream>
using namespace std;
#define PI 3.14

class circle {
    int x, y;
    public:
    void getno() {
        cout << "Enter 2 numbers\n";
        cin >> x >> y;
    }
    void suv() {
        cout << x << "-" << y << "=" << x - y;
    }
};
int main()
{
    subtract no;
    no.getno();
    no.suv();

    return 0;
}
