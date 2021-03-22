
#define _CRT_SECURE_NO_WARNINGS

#include "inizializzazione.h"
#include <stdlib.h>
#include <string.h>

// inizializzazione lettere della parola

extern char* lettere(char* parola)
{
	char* letters = calloc(strlen(parola) + 1, sizeof(char));

	for (size_t i = 0; i < strlen(parola); ++i)
	{
		if (i == 0)
			letters[i] = parola[i];
		else
			letters[i] = ' ';
	}

	return letters;
}

// inizializzazione simboli per vocali e consonanti

extern char* simboli(char* parola)
{
	char* characters = calloc(strlen(parola) + 1, sizeof(char));

	for (size_t i = 0; i < strlen(parola); ++i)
	{
		// vocale '+'
		if (parola[i] == 'a' || parola[i] == 'e' || parola[i] == 'i' || parola[i] == 'o' || parola[i] == 'u')
			characters[i] = '+';

		// accento (non visibile)
		else if (parola[i] == '\'')
			characters[i] = ' ';

		// consonante '-'
		else
			characters[i] = '-';
	}

	return characters;
}

// inizializzazione lettere alfabetiche (disponibili)

extern char* alfabeto(void)
{
	char* alphabet = calloc(27, sizeof(char));

	for (size_t i = 0; i < 26; ++i)
	{
		alphabet[i] = i + 97;
	}

	return alphabet;
}