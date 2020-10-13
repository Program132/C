#include <iostream>
#include "math.h"
#include "code.h"

using namespace std;

int main()
{
    cout << "Loading Modules : Math" << endl;

    int result = add(5, 10);
    cout << result << endl;

    int result2 = remove(50, 10);
    cout << result2 << endl;

    int result3 = divi(15, 10);
    cout << result3 << endl;

    int result4 = multi(5, 10);
    cout << result4 << endl;

    int carrerr = doubleNbr(10);
    cout << carrerr << endl;

    int triple = tripleNbr(10);
    cout << triple << endl;

    cout << "\nLoading Modules : Code" << endl;

    info();
    math();
    code();
    learn_cpp();
}