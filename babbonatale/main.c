
#include <stdint.h>

extern void BabboNatale(const int* pacchi, size_t pacchi_size, int p);

int main(void)
{
	{
		int pacchi[] = { 10, 11, 1, 3, 3 };
		size_t pacchi_size = 5;

		BabboNatale(pacchi, pacchi_size, 20);
	}

	{
		int pacchi[] = { 1, 2, 20, 10, 15, 13, 100, 23, 49, 30, 5 };
		size_t pacchi_size = 11;

		BabboNatale(pacchi, pacchi_size, 100);
	}

	return 0;
}