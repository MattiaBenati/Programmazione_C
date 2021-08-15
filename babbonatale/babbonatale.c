
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/* ----------------------------------------------------------------------------- *\

	n = peso massimo della slitta
	k = numero di pacchi da posizionare
	vcurr[] = vettore contenente la soluzione corrente, di dimensione "n"
	pacchi[] = vettore contenente i pacchi da posizionare, di dimensione "k"
	i = livello dell'albero analizzato in questo momento
	peso_pacchi = peso totale dei pacchi della combinazione migliore
	num_pacchi = numero di pacchi della combinazione migliore
	stampa_pacchi[] = vettore contenente i pacchi della combinazione migliore

\* ----------------------------------------------------------------------------- */

static void BabboNataleCalc(int n, int k, bool vcurr[], const int pacchi[], int i, int* peso_pacchi, int* num_pacchi, bool stampa_pacchi[])
{
	// 0 = pacco NON caricato
	// 1 = pacco caricato

	if (i == k)
	{
		// peso più VICINO al limite e più pacchi POSSIBILI
		int peso = 0;
		int numero_pacchi = 0;

		// calcolo peso della combinazione
		for (int j = 0; j < k; ++j)
		{
			if (vcurr[j] == true)
			{
				peso += pacchi[j];
				numero_pacchi += 1;
			}
		}

		// superasse il peso massimo, ci fossero meno pacchi o il numero di pacchi fosse uguale, ma pesasse meno/uguale
		if (peso > n || numero_pacchi < *num_pacchi || (numero_pacchi == *num_pacchi && peso <= *peso_pacchi))
			return;

		// sostituzione combinazione migliore
		*peso_pacchi = peso;
		*num_pacchi = numero_pacchi;

		for (int j = 0; j < k; ++j)
			stampa_pacchi[j] = vcurr[j];

		// reset
		i = 0;

		return;
	}

	vcurr[i] = 0;
	BabboNataleCalc(n, k, vcurr, pacchi, i + 1, peso_pacchi, num_pacchi, stampa_pacchi);

	vcurr[i] = 1;
	BabboNataleCalc(n, k, vcurr, pacchi, i + 1, peso_pacchi, num_pacchi, stampa_pacchi);
}

extern void BabboNatale(const int* pacchi, size_t pacchi_size, int p)
{
	bool* vcurr = calloc(p, sizeof(bool));
	bool* stampa_pacchi = calloc(p, sizeof(bool));

	int peso_pacchi = 0;
	int num_pacchi = 0;

	BabboNataleCalc(p, pacchi_size, vcurr, pacchi, 0, &peso_pacchi, &num_pacchi, stampa_pacchi);

	// stampa combinazione migliore
	for (size_t i = 0; i < pacchi_size; ++i)
	{
		if (i == pacchi_size - 1)
			printf("%d", stampa_pacchi[i]);
		else
			printf("%d ", stampa_pacchi[i]);
	}

	free(vcurr);
	free(stampa_pacchi);
}