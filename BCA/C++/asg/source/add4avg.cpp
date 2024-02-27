/*
 * Program to add 4 subject no & show avg with obj class
 */

#include <iostream>
using namespace std;
class avgmrk {
    int i;
    int a[4]={0}, b, c;
    public:
    void getno() {
        // loop for input

        cout << "Please input you 4 subjects marks\n";
        for(i=0 ; i < 4 ; i++){
            cout << "Subject-" << i+1 << " mark :";
            cin >> a[i];
        }
    }

    void add() {
        // loop for addition

        for(i= 0; i < 4 ; i++){
            b+=a[i];
        }
        cout << "total marks: " << b << endl;
    }

    void avrg() {
        // loop for average

        c = (b/4);
        cout << "average marks: " << c << endl;
    }

};

int main()
{
    avgmrk no;
    no.getno();
    no.add();
    no.avrg();

    return 0;
}
