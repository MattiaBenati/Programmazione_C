
#if !defined NONOGRAM_H
#define NONOGRAM_H

#include <stdbool.h>
#include <stdint.h>

struct nonogram {
    size_t n;
    char* schema;
};

extern bool nonogram_load(struct nonogram* ng, const char* filename);

#endif /* NONOGRAM_H */