/*
 * Program to subtract 2 no with obj class
 */

#include <iostream>
using namespace std;
class subtract {
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
