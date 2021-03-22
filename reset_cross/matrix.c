
#include "matrix.h"

#include <stdlib.h>

extern struct matrix* mat_reset_cross(const struct matrix* m, size_t ir, size_t ic)
{
    // ir = riga di 0
    // ic = colonna di 0

    if (m == NULL)
        return NULL;

    else if (ir > m->rows - 1 || ic > m->cols - 1)
        return NULL;

    size_t dim = 0;

    // creazione matrice
    struct matrix* risult = malloc(sizeof(struct matrix));
    risult->rows = m->rows;
    risult->cols = m->cols;
    risult->data = calloc(dim, sizeof(double));

    if (m->rows == 0 || m->cols == 0)
        return NULL;

    // righe
    for (size_t i = 0; i < m->rows; ++i)
    {
        // colonne
        for (size_t j = 0; j < m->cols; ++j)
        {
            risult->data = realloc(risult->data, (dim + 1) * sizeof(double));

            // riga == sostituzione riga
            if (i == ir)
            {
                // se colonna == sostituzione colonna (rimane uguale a prima)
                if (j == ic)
                    risult->data[dim] = m->data[dim];

                // se colonna != sostituzione colonna (viene sostituito con zero)
                if (j != ic)
                    risult->data[dim] = 0;
            }

            // riga != sostituzione riga
            else if (i != ir)
            {
                // se colonna == sostituzione colonna (viene sostituito con zero)
                if (j == ic)
                    risult->data[dim] = 0;

                // se colonna != sostituzione colonna (rimane uguale a prima)
                else if (j != ic)
                    risult->data[dim] = m->data[dim];
            }

            dim += 1;
        }
    }

    return risult;
}