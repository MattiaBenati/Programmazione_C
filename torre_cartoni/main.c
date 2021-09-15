
#include "torrecartoni.h"

int main(void)
{
	Cartone c[] = { {.p = 10, .a = 20, .l = 40},{.p = 10,.a = 10,.l = 8},{.p = 9, .a = 3,.l = 5} };
	size_t n = 3;

	TorreCartoni(c, n);

	return 0;
}