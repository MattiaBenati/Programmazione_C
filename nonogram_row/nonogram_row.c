
/*
	nel file "nonogram_row.c" implementare la definizione della funzione:

		extern uint8_t* nonogram_row(const char* s, size_t* n);

	la funzione riceve in input una stringa C "s" e un puntatore ad intero a 32bit "n".
	La stringa "s" contiene soltanto i caratteri ' ' (spazio) e '*' (asterisco)

*/

#include <stdint.h>
#include <stdlib.h>

extern uint8_t* nonogram_row(const char* s, size_t* n)
{
	// *s	vettore contenente i numeri
	// n	dimensione di questo vettore

	// ' * **** **'
	// s = { 1, 4, 2 }
	// n = 3

	if (s == NULL)
		return NULL;

	size_t dim = 0;

	size_t num_asterisc = 0;			// numero di asterischi per ciascun insieme
	size_t num_insiem_asterisc = 0;		// numero di insiemi asterisco

	// creazione vettore risultato
	uint8_t* vett = calloc(0, sizeof(uint8_t));

	while (s[dim] != 0)
	{
		// se il carattere analizzato è uno SPAZIO
		if (s[dim] == ' ')
		{
			++dim;
		}

		// se il carattere analizzato è un ASTERICO
		else if (s[dim] == '*')
		{
			while (s[dim] == '*')
			{
				++num_asterisc;
				++dim;
			}

			vett = realloc(vett, (num_insiem_asterisc + 1) * sizeof(uint8_t));

			vett[num_insiem_asterisc] = num_asterisc;
			++num_insiem_asterisc;

			num_asterisc = 0;
		}
	}

	vett = realloc(vett, (num_insiem_asterisc + 1) * sizeof(uint8_t));
	vett[num_insiem_asterisc] = 0;

	*n = num_insiem_asterisc;

	return vett;
}