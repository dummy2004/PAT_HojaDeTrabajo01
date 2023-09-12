#include "Ejercicio04.h"

void generateParenthesisHelper(vector<string>& result, string current, int remainingOpen, int remainingClose) {
    if (remainingOpen == 0 && remainingClose == 0) {
        result.push_back(current);
        return;
    }

    if (remainingOpen > 0) {
        generateParenthesisHelper(result, current + '(', remainingOpen - 1, remainingClose);
    }

    if (remainingClose > remainingOpen) {
        generateParenthesisHelper(result, current + ')', remainingOpen, remainingClose - 1);
    }
}

vector<string> Ejercicio04::generateParenthesis(int n)
{
    vector<string>result;
    generateParenthesisHelper(result, "", n, n);
    return vector<string>(result);
}
