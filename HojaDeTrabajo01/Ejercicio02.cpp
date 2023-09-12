#include "Ejercicio02.h"
#include  <algorithm>

bool Ejercicio02::isPalindrome(string& s)
{
    int a = 0;
    int b = s.length() -  1;

    for (int i = 0; i < s.length(); i++) {
        if ((s[a]) == (s[b])) {
            a++;
            b--;
        }
        else {
            return false;
        }
    }
    return true;
}
