
#include "torrecartoni.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/* ------------------------------------------------------------------ *\

	Cartone* c = struct cartoni
	n = numero cartoni

	vcurr[] = vettore true-false dei cartoni analizzati o meno
	ordine[] = vettore che indica l'ordinamento dei fattori "true"
	dim = dimensione vettore ordine[]

	peso = peso totale fino a quel momento registrato
		   (somma del peso dei pacchi soprastanti)
	altezza = altezza totale della pila analizzata

	ris = struct contenente l'ordinamento migliore

\* ------------------------------------------------------------------ */

// calcolo torre cartoni

static void TorreCartoniCalc(const Cartone* c, size_t n, bool vcurr[], int ordine[], size_t dim,
	unsigned peso, unsigned altezza, Best* ris)
{
	if (altezza > ris->altezza)
	{
		ris->altezza = altezza;
		ris->dim = dim;

		for (size_t i = 0; i < dim; ++i)
			ris->ordine[i] = ordine[i];
	}

	for (size_t i = 0; i < n; ++i)
	{
		if (peso <= c[i].l && vcurr[i] == false)
		{
			vcurr[i] = true;
			ordine[dim] = i;

			TorreCartoniCalc(c, n, vcurr, ordine, dim + 1, peso + c[i].p, altezza + c[i].a, ris);

			// reset
			vcurr[i] = false;
		}
	}
}

// funzione torre cartoni

extern void TorreCartoni(const Cartone* c, size_t n)
{
	if (c == NULL || n == 0)
		return;

	bool* vcurr = calloc(n, sizeof(bool));
	int* ordine = calloc(n, sizeof(int));
	Best ris = { .altezza = 0, .ordine = calloc(n,sizeof(int)), .dim = 0 };

	TorreCartoniCalc(c, n, vcurr, ordine, 0, 0, 0, &ris);

	for (size_t i = 0; i < ris.dim; ++i)
		printf("%d\n", ris.ordine[i]);

	printf("Altezza: %d", ris.altezza);

	free(vcurr);
	free(ordine);
	free(ris.ordine);
}