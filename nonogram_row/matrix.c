
#include "matrix.h"

#include <stdint.h>
#include <stdlib.h>

extern double* matrix_snake(const struct matrix* m)
{
    if (m == NULL)
        return 0;

    size_t tmp;

    // creazione vettore
    size_t pos = 0;
    double* vett = calloc(m->rows * m->cols, sizeof(double));

    // righe
    for (size_t i = 0; i < m->rows; ++i)
    {
        tmp = m->cols - 1;

        // colonne
        for (size_t j = 0; j < m->cols; ++j)
        {
            // riga pari 0, 2, 4, ...
            if (i % 2 == 0)
            {
                vett[pos] = m->data[pos];

                pos += 1;
            }

            // riga dispari 1, 3, 5, ...
            else if (i % 2 == 1)
            {
                vett[pos] = m->data[pos + tmp];

                tmp -= 2;
                pos += 1;
            }
        }
    }

    return vett;
}