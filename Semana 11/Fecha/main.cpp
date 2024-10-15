#include <iostream>
#include "Fecha.h"
using namespace std;

int main()
{

    Fecha f1(29, 2, 2020);

    Fecha f2;

    cout << f1.toString() << endl;
    cout << endl;
    cout << f2.toString() << endl;

    return 0;
}
