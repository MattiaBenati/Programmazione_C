
#include <stdbool.h>

extern bool triangolare(int n)
{
	int i = 1;
	int j = 2;

	if (n <= 0)
		return false;

	while (i < n)
	{
		i += j;
		++j;
	}

	if (n == i)
		return true;
	else
		return false;
}