#include <iostream>
#include "Complex.h"
using namespace std;

int main()
{
    Complex comp1(1, 1);
    cout << comp1 << endl;

    Complex comp2(2, 2);
    cout << comp2 << endl;

    Complex comp3 = comp1 + comp2;
    cout << comp3 << endl;

    comp3 += comp1;
    cout << comp3 << endl;

    comp3 = comp1 * comp2;
    cout << comp3 << endl;

    comp3 *= comp2;
    cout << comp3 << endl;

    Complex comp4(-8, 8);

    
    if (comp3 == comp4)
    {
        cout << "== works" << endl;
    }

    if (comp1 != comp2)
    {
        cout << "!= works" << endl;
    }

    comp1 = -comp1;
    cout << comp1 << endl;

    Complex comp6;

    cin >> comp6;
    cout << "You entered: " << comp6 << endl;

    

    return 0;
}