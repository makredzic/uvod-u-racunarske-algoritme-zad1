#include "ura.hpp"

bool palindrome(const char* s, int n) {

	if (n <= 1) return true;

	if (s[0] == s[n-1]) {

		++s;
		n = n-2;

		return palindrome(s, n);

	} else return false;


}
