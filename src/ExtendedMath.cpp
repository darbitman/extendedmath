#include <iostream>
#include "ExtendedInteger.h"
#include "exceptions\BaseException.h"


using namespace std;
using namespace ExtendedIntegerMathOperations;


int main() {
    BaseException q;
    q.printException();
    uextint128_t a(109);
    extint128_t b(a);
    cout << b << endl;
    int x = -10;
    unsigned int c = x;
    cout << x << endl << c << endl;
    a++;
    logBase10(a);
    cout << pow(a, uextint128_t(2));
    while (1);
    return 0;
}
