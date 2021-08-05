
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

// calcolo ombrelloni

static void OmbrelloniCalc(int n, int k, bool vcurr[], int i, int cnt, int* nsol)
{
	// cnt = quanti '1' compaiono nella chiamata a funzione

	// caso finale
	if (i == n)
	{
		// non ci fossero ALMENO 2 posizioni occupate
		if (cnt != k)
			return;

		bool check = true;

		// verifica posizioni
		for (int j = 0; j < n; ++j)
		{
			if (vcurr[j] == true && vcurr[j + 1] == true && j + 1 != n)
			{
				check = false;
				break;
			}
		}

		if (check == true)
		{
			(*nsol)++;

			printf("%d) ", *nsol);

			for (int j = 0; j < n; ++j)
			{
				if (j == n - 1)
					printf("%d\n", vcurr[j]);
				else
					printf("%d ", vcurr[j]);
			}
		}

		return;
	}

	vcurr[i] = 0;
	OmbrelloniCalc(n, k, vcurr, i + 1, cnt, nsol);

	vcurr[i] = 1;
	OmbrelloniCalc(n, k, vcurr, i + 1, cnt + 1, nsol);

	// reset
	vcurr[i] = 0;
}

// inizializzazione ombrelloni

static int OmbrelloniIniz(int k, int n)
{
	bool* vcurr = calloc(n, sizeof(bool));
	int nsol = 0;

	OmbrelloniCalc(n, k, vcurr, 0, 0, &nsol);

	free(vcurr);
	return nsol;
}

// funzione ombrelloni

extern int Ombrelloni(int k, int n)
{
	if (k < 0 || n < 0)
		return 0;

	return OmbrelloniIniz(k, n);
}