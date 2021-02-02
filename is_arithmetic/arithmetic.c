
#include <stdbool.h>

extern bool is_arithmetic(const int* v, int n)
{
	int resto;

	if (n == 1)
		return false;

	resto = v[0] - v[1];

	for (int i = 2; i < n; ++i)
	{
		if (v[i] + resto != v[i - 1])
			return false;
	}

	return true;
}