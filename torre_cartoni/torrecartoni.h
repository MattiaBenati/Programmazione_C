
#if !defined TORRECARTONI_H
#define TORRECARTONI_H

#include <stdint.h>

typedef struct
{
	unsigned p;	// peso
	unsigned a;	// altezza
	unsigned l;	// limite
} Cartone;

typedef struct
{
	unsigned altezza; // altezza
	unsigned* ordine; // ordine
	size_t dim;		  // dimensione
} Best;

extern void TorreCartoni(const Cartone* c, size_t n);

#endif /* TORRECARTONI_H */