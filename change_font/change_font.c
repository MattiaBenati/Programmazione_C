
#include <stdlib.h>

extern char* change_font(const char* s)
{
	if (s == NULL)
		return NULL;

	size_t dim_old = 0;		// dimensione vecchio vettore
	size_t dim_new = 0;		// dimensione nuovo vettore

	char* vett = calloc(dim_new + 1, sizeof(char));

	while (s[dim_old] != 0)
	{
		if (s[dim_old] == ' ')
		{
			vett = realloc(vett, (dim_new + 1) * sizeof(char));

			vett[dim_new] = ' ';

			dim_new += 1;
			dim_old += 1;
		}

		else if (s[dim_old] == 'S' && s[dim_old + 1] == 'E' && s[dim_old + 2] == 'I')
		{
			vett = realloc(vett, (dim_new + 1) * sizeof(char));

			vett[dim_new] = '6';

			dim_new += 1;
			dim_old += 3;
		}

		else if (s[dim_old] == 'P' && s[dim_old + 1] == 'E' && s[dim_old + 2] == 'R')
		{
			vett = realloc(vett, (dim_new + 1) * sizeof(char));

			vett[dim_new] = 'X';

			dim_new += 1;
			dim_old += 3;
		}

		else if (s[dim_old] == 'A')
		{
			vett = realloc(vett, (dim_new + 1) * sizeof(char));

			vett[dim_new] = '4';

			dim_new += 1;
			dim_old += 1;
		}

		else if (s[dim_old] == 'E')
		{
			vett = realloc(vett, (dim_new + 1) * sizeof(char));

			vett[dim_new] = '3';

			dim_new += 1;
			dim_old += 1;
		}

		else if (s[dim_old] == 'I')
		{
			vett = realloc(vett, (dim_new + 1) * sizeof(char));

			vett[dim_new] = '1';

			dim_new += 1;
			dim_old += 1;
		}

		else if (s[dim_old] == 'O')
		{
			vett = realloc(vett, (dim_new + 1) * sizeof(char));

			vett[dim_new] = '0';

			dim_new += 1;
			dim_old += 1;
		}

		else if (s[dim_old] == 'S')
		{
			vett = realloc(vett, (dim_new + 1) * sizeof(char));

			vett[dim_new] = '5';

			dim_new += 1;
			dim_old += 1;
		}

		else
		{
			vett = realloc(vett, (dim_new + 1) * sizeof(char));

			vett[dim_new] = s[dim_old];

			dim_new += 1;
			dim_old += 1;
		}
	}

	vett = realloc(vett, (dim_new + 1) * sizeof(char));

	vett[dim_new] = '\0';

	return vett;
}