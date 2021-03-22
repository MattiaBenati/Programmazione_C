
#define _CRT_SECURE_NO_WARNINGS

#include "aggiornamento.h"
#include <stdint.h>
#include <string.h>

// aggiornamento lettere inserite dall'utente

extern void lettere_aggiornamento(char* parola, char* lettere, char* lettera)
{
	size_t length = strlen(parola) - 1;

	for (size_t i = 0; i < strlen(lettera); ++i)
	{
		for (size_t j = 0; j < strlen(parola); ++j)
		{
			if (parola[j] == lettera[i])
				lettere[j] = lettera[i];
		}

		if (parola[length] == '\'' && parola[length - 1] == lettera[i])
			lettere[length] = '\'';
	}
}

// aggiornamento lettere alfabeto inserite dall'utente

extern void alfabeto_aggiornamento(char* alfabeto, char* lettera)
{
	for (size_t i = 0; i < strlen(lettera); ++i)
	{
		for (size_t j = 0; j < 26; ++j)
		{
			if (alfabeto[j] == lettera[i])
			{
				alfabeto[j] = ' ';
				break;
			}
		}
	}
}