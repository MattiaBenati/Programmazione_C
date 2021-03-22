
#define _CRT_SECURE_NO_WARNINGS

#include "matrix.h"

#include <stdlib.h>

int main(void)
{
	// creazione matrice iniziale
	struct matrix matrice;
	matrice.rows = 5;
	matrice.cols = 3;
	matrice.data = calloc(matrice.rows * matrice.cols, sizeof(double));

	// assegnazione valori ai "data"
	for (size_t i = 0; i < (matrice.rows * matrice.cols); ++i)
	{
		matrice.data[i] = i + 1;
	}

	// creazione matrice risultato
	struct matrix* risult;

	risult = mat_reset_cross(&matrice, 0, 1);

	return 0;
}