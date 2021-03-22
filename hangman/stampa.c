
#define _CRT_SECURE_NO_WORNINGS

#include "stampa.h"
#include <stdint.h>
#include <stdio.h>
#include <string.h>

// stampa lettere rimanenti

extern void stampa_lettere(char* lettere, char* simboli)
{
	// stampa lettere (sopra)
	printf("\n\t\t     ");

	for (size_t i = 0; i < strlen(lettere); ++i)
	{
		if (lettere[i + 1] == '\'')
			printf("%c", lettere[i]);
		else
			printf("%c ", lettere[i]);
	}

	// stampa simboli (sotto)
	printf("\n\t\t     ");

	for (size_t i = 0; i < strlen(simboli); ++i)
	{
		printf("%c ", simboli[i]);
	}

	printf("\n\n");
}

// stampa lettere alfabetiche

extern void stampa_alfabeto(char* alfabeto)
{
	printf("\n   ");

	for (size_t i = 0; i < 26; ++i)
	{
		if (i != 25)
			printf("%c ", alfabeto[i]);
		else
			printf("%c", alfabeto[i]);
	}

	printf("\n\n");
}