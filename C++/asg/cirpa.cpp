/*
 * Program calculate area and perimeter of a circle 
 * with obj class
 */

#include <iostream>
using namespace std;
#define PI 3.14

class circle {
    float r, a, p;
    public:
    void rad() {
        cout << "Enter radius od the circle\n";
        cin >> r;
        cout << "\nRadius of the circle : " << r << endl;
    }

    void area() {
        a = PI*r*r;
        cout << "Area of the circle : " << a << endl ;
    }

    void peri(){
        p = 2*PI*r;
        cout << "Perimeter of the circle : " << p << endl ;
    }
};
int main()
{
    circle o;
    o.rad();
    o.area();
    o.peri();

    return 0;
}
