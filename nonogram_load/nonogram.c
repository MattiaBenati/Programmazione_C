
#define _CRT_SECURE_NO_WARNINGS

#include "nonogram.h"

#include <stdio.h>
#include <stdlib.h>

extern bool nonogram_load(struct nonogram* ng, const char* filename)
{
    if (filename == NULL)
        return NULL;

    // apertura e verifica file
    FILE* file = fopen(filename, "r");

    if (file == NULL)
        return false;

    size_t num;
    size_t pos = 0;
    char simb;

    // lettura numero e \n (che viene saltato)
    fscanf(file, "%lu", &num);
    ng->n = num;

    fgetc(file);

    // allocazione memoria
    ng->schema = calloc(num * num + 1, sizeof(char));   // + 1 = terminatore

    // righe
    for (size_t r = 0; r < num; ++r)
    {
        // colonne
        for (size_t c = 0; c < num + 1; ++c)
        {
            simb = fgetc(file);

            if (simb != '\n')
            {
                ng->schema[pos] = simb;
                pos += 1;
            }
        }
    }

    fclose(file);

    return true;
}