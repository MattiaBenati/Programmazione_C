
#include <stdint.h>

void StazioniServizio(double m, const double* d, const double* p, size_t n);

int main(void)
{
	double m = 2020;
	double d[] = { 260.0000, 284.0000, 308.0000, 332.0000, 356.0000 };
	double p[] = { 35.0000, 35.0000, 33.0000, 29.0000, 23.0000 };
	size_t n = 5;

	StazioniServizio(m, d, p, n);

	return 0;
}