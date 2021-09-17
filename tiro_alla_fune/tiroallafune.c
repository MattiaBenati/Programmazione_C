
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <limits.h>

/* -------------------------------------------------------------------- *\

	n = quanti numeri da analizzare
	num[] = numeri da analizzare
	
	vcurr[] = sequenza di true-false rispettivamente
	          di gruppo A e B
	i = posizione nell'albero

	num_tf = numero di true (cioè presi in considerazione)
	tot = somma di tutti i numeri analizzati
	best[] = sequenza di true-false migliore, rispettivamente
	         di gruppo A e B
	*dif = differenza minima della combinazione migliore registrata

\* -------------------------------------------------------------------- */

static void TiroAllaFuneCalc(int n, int num[], bool vcurr[], int i, int num_tf, int tot, bool best[], int* dif)
{
	if (num_tf == n / 2)
	{
		int somma_t = 0;
		int somma_f = 0;

		// somma dei true
		for (int j = 0; j < n; ++j)
		{
			if (vcurr[j] == true)
				somma_t += num[j];
		}

		// somma dei true
		somma_f = tot - somma_t;

		// differenza minore in valore assoluto
		if (abs(somma_t - somma_f) < *dif)
		{
			for (int j = 0; j < n; ++j)
				best[j] = vcurr[j];

			*dif = abs(somma_t - somma_f);
		}

		return;
	}

	if (i == n)
		return;

	vcurr[i] = 0;
	TiroAllaFuneCalc(n, num, vcurr, i + 1, num_tf, tot, best, dif);

	vcurr[i] = 1;
	TiroAllaFuneCalc(n, num, vcurr, i + 1, num_tf + 1, tot, best, dif);
	
	// reset
	vcurr[i] = 0;
}

static void TiroAllaFune(int argc, char** argv)
{
	bool* vcurr = calloc(argc, sizeof(bool));
	bool* best = calloc(argc, sizeof(bool));
	int* num = calloc(argc, sizeof(int));
	int tot = 0;
	int dif = INT_MAX;

	// conversione da char a int
	for (int i = 0; i < argc - 1; ++i)
		num[i] = atoi(argv[i + 1]);

	// calcolo somma totale dei numeri
	for (int i = 0; i < argc - 1; ++i)
		tot += num[i];

	TiroAllaFuneCalc(argc - 1, num, vcurr, 0, 0, tot, best, &dif);

	// stampa true
	int count = 0;

	printf("{ ");
	for (int i = 0; i < argc - 1; ++i)
	{
		if (best[i] == true)
			printf("%d%s", num[i], (count++ < argc / 2 - 2) ? ", " : " ");
	}
	printf("}, ");

	// stampa false
	count = 0;

	printf("{ ");
	for (int i = 0; i < argc - 1; ++i)
	{
		if (best[i] == false)
			printf("%d%s", num[i], (count++ < argc / 2 - 1) ? ", " : " ");
	}
	printf("}\n");

	free(vcurr);
	free(best);
	free(num);
}

int main(int argc, char** argv)
{
	TiroAllaFune(argc, argv);

	return 0;
}