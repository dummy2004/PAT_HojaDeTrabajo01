#include "Ejercicio03.h"
#include <iostream>
using namespace std;

bool Ejercicio03::isPowerOfTwo(int n)
{
    if (n == 0) {
        return false;
    }
    if (n == 1) {
        return true;
    }
    if (n % 2 == 0) {
        return true;
    }
    return false;
}
