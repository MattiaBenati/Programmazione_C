
#include <stdlib.h>
#include <string.h>

extern char* change_font(const char* s);

int main(void)
{
	char* frase = "QUATTRO PAPERE VISITARONO SEI MUSEI";

	frase = change_font(frase);

	free(frase);
	return 0;
}