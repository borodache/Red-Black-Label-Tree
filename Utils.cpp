#pragma once
#include <iomanip>
#include <sstream>
#include "RedBlackNode.h"
#include "Utils.h"

using namespace std;

string util_int_to_ascii(int n)
{
	char buf[16];
	errno_t err = _itoa_s(n, buf, 10);
	if (err != 0)
		return string("Unexpected Error");
	else
		return string(buf);
}

string util_int_to_ascii_null(int n)
{
	char buf[16];
	if (n == valError)
		return string("NULL");
	errno_t err = _itoa_s(n, buf, 10);
	if (err != 0)
		return string("Unexpected Error");
	else
		return string(buf);
}
