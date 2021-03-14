
#include "nonogram.h"

#include <stdlib.h>

int main(void)
{
    bool tmp;

    struct nonogram* nogram = malloc(sizeof(struct nonogram));

    tmp = nonogram_load(nogram, "nonogram1.txt");
    tmp = nonogram_load(nogram, "nonogram2.txt");
    tmp = nonogram_load(nogram, "nonogram3.txt");

    return 0;
}