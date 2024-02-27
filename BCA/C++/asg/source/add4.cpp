/*
 * Program to add 4 no with obj class
 */

#include <iostream>
using namespace std;
class addition {
    int a, b, c, d;
    public:
    void getno() {
        cout << "Enter 4 numbers\n";
        cin >> a >> b >> c >> d;
    }
    void add() {
        cout << a << "+" << b << "+"
             << c << "+" << d << "=" 
             << a+b+c+d << endl;
    }
};
int main()
{
    addition no;
    no.getno();
    no.add();

    return 0;
}
