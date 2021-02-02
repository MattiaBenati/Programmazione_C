
#include <stdint.h>
#include <stdlib.h>

extern uint8_t* nonogram_row(const char* s, size_t* n);

int main(void)
{
	size_t n = 21;
	char frase[] = "  *  *** ***    ****";

	uint8_t* nonogram = calloc(n, sizeof(uint8_t));

	nonogram = nonogram_row(frase, &n);

	free(nonogram);
	return 0;
}