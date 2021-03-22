
#define _CRT_SECURE_NO_WARNINGS

#include "verifica.h"
#include <stdint.h>
#include <string.h>

// verifica lettera

extern bool lettera_verifica(char* parola, char* lettera)
{
	for (size_t i = 0; i < strlen(parola); ++i)
	{
		if (parola[i] == lettera[0])
			return true;
	}

	return false;
}

// verifica parola

extern bool parola_verifica(char* parola, char* lettere)
{
	for (size_t i = 0; i < strlen(parola); ++i)
	{
		if (parola[i] != lettere[i])
			return false;
	}

	return true;
}