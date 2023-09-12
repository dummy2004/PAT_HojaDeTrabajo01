#pragma once
#include <string>
#include <iostream>

using std::string;

class Ejercicio02
{
public:
	bool isPalindrome(string &s);
private:
    bool isPalindromeHelper(const string &s, int left, int right) {

        if (left >= right) {
            return true;
        }
        if (s[left] != s[right]) {
            return false;
        }
        return isPalindromeHelper(s, left + 1, right - 1);
        }
};








