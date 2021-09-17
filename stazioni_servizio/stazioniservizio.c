
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <limits.h>

#define PIENO 30
#define CONSUMO 0.05

/* ---------------------------------------------------------------------------------------- *\
	
	0.05 litri per km consumati
	30 litri di serbatoio

	m = km totali da percorrere
	d[] = distanze stazioni di servizio (una dall'altra)
	p[] = prezzo stazioni di servizio (al litro)

	vcurr[] = sequenza true-false per le stazioni servizio prese o saltate
	i = livello albero (stazione di servizio) analizzato

	perc = km percorsi fino al momento analizzato
	disp = litri ancora disponibili nel serbatoio
	spesa = euro spesi per fare il pieno alla sosta di ciascun distributore utilizzato

	best[] = sequenza true-false migliore
	*dim = dimensione sequenza best[]
	*spesa_best = spesa totale della sequenza migliore
	
\* ---------------------------------------------------------------------------------------- */

static void StazioniServizioCalc(double m, const double d[], const double p[], size_t n, bool vcurr[], int i, double perc, double disp, double spesa,
	bool best[], size_t* dim, double* spesa_best)
{
	// destinazione raggiunta
	if (perc + disp / CONSUMO >= m)
	{
		// aggiornamento
		if (spesa < *spesa_best)
		{
			*spesa_best = spesa;
			*dim = 0;

			for (size_t j = 0; j < n; ++j)
			{
				best[j] = vcurr[j];

				if (vcurr[j] == true)
					*dim += 1;
			}
		}

		return;
	}

	// gasolio terminato
	if (disp - d[i] * CONSUMO <= 0 || n == (size_t)i)
		return;

	vcurr[i] = 0;
	StazioniServizioCalc(m, d, p, n, vcurr, i + 1, perc + d[i], disp - d[i] * CONSUMO, spesa, best, dim, spesa_best);

	disp -= d[i] * CONSUMO;

	vcurr[i] = 1;
	StazioniServizioCalc(m, d, p, n, vcurr, i + 1, perc + d[i], PIENO, spesa + p[i] * (PIENO - disp), best, dim, spesa_best);

	// reset
	vcurr[i] = 0;
}

void StazioniServizio(double m, const double* d, const double* p, size_t n)
{
	bool* vcurr = calloc(n, sizeof(bool));
	bool* best = calloc(n, sizeof(bool));

	size_t dim = 0;
	double spesa_tot = INT_MAX;

	StazioniServizioCalc(m, d, p, n, vcurr, 0, 0, PIENO, 0, best, &dim, &spesa_tot);

	// stampa risultato
	if (dim == 0)
		printf("Non esistono soluzioni\n");

	else
	{
		size_t j = 0;

		for (size_t i = 0; i < n; ++i)
		{
			if (best[i] == true)
			{
				printf("%lu%s", i, (j < dim - 1) ? " " : "\n");
				j += 1;
			}
		}

		printf("Spesa totale: %f", spesa_tot);
	}

	free(vcurr);
	free(best);
}