
#define _CRT_SECURE_NO_WARNINGS

#include "comandi.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// conversione in lettere minuscole

extern void maiusc_minusc(char* nome)
{
	for (size_t i = 0; i < strlen(nome); ++i)
	{
		// da minuscola a MAIUSCOLA
		if (i == 0 && nome[i] <= 122 && nome[i] >= 97)
			nome[i] -= 32;

		// da MAIUSCOLA a minuscola
		if (i != 0 && nome[i] <= 90 && nome[i] >= 65)
			nome[i] += 32;
	}
}

// righe separatrici

extern void righe(void)
{
	for (size_t c = 0; c < 28; ++c)
	{
		printf(" -");

		if (c == 27)
			printf("\n");
	}
}

// uscita dal gioco

extern bool termina(void)
{
	int exit;

	char* input = calloc(100, sizeof(char));
	bool check = true;

	printf("\n Vuoi iniziare un nuovo match!?\n\n");
	printf(" - Inserisci '0' se vuoi uscire dal gioco..\n");
	printf(" - Inserisci '1' se vuoi riniziare!\n");

	do
	{
		printf("\n Inserisci il numero: ");
		scanf("%s", input);

		char* error;

		exit = strtoul(input, &error, 10);

		if (input == error)
		{
			printf(" Hai inserito un simbolo e non un numero, riprova\n");
			check = false;
		}

		else if (exit != 0 && exit != 1)
		{
			printf(" Hai inserito un numero diverso da '0' e '1', riprova\n");
			check = false;
		}

		else
			check = true;

	} while (check == false);

	free(input);

	if (exit == 1)
		return false;

	return true;
}