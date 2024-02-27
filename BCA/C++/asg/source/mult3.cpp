/*
 * Program to multiply 3 no with obj class
 */

#include <iostream>
using namespace std;
class multi {
    int a, b, c, d;
    public:
    void getno() {
        cout << "Enter 3 numbers\n";
        cin >> a >> b >> c;
    }
    void mul() {
        d = a*b*c ;
        cout << a << "x" << b << "x"
             << c << "=" << d << endl;
    }
};
int main()
{
    multi no;
    no.getno();
    no.mul();

    return 0;
}
