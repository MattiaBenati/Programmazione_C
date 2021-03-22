
#define _CRT_SECURE_NO_WARNINGS

#include "input.h"
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// input parola (finale)

extern char* parola_input(void)
{
	char* input = calloc(100, sizeof(char));
	bool check;

	printf("\n");

	do
	{
		printf(" Inserisci la parola da indovinare: ");
		scanf("%s", input);

		check = true;

		// avesse inserito una parola troppo corta
		if (strlen(input) == 1)
		{
			printf(" Hai inserito una parola troppo corta, riprova\n\n");
			check = false;

			continue;
		}

		// avesse inserito dei simboli/numeri e NON lettere
		for (size_t i = 0; i < strlen(input); ++i)
		{
			if ((input[i] < 65 || (input[i] < 97 && input[i] > 90) || input[i] > 122) && input[i] != '\'')
			{
				printf(" Hai inserito dei simboli/numeri e NON lettere, riprova\n\n");
				check = false;

				break;
			}
		}

	} while (check == false);

	// copia risultato
	char* word = calloc(strlen(input) + 1, sizeof(char));

	for (size_t i = 0; i < strlen(input); ++i)
	{
		word[i] = input[i];
	}

	free(input);
	system("cls");

	return word;
}

// input lettera/parola (durante il gioco)

extern char* lettera_input(char* alfabeto)
{
	char* input = calloc(100, sizeof(char));
	bool check;

	do
	{
		printf(" Inserisci una lettera/parola: ");
		scanf("%s", input);

		check = true;

		// conversione lettere minuscole
		for (size_t i = 0; i < strlen(input); ++i)
		{
			if (input[i] >= 65 && input[i] <= 90)
				input[i] += 32;
		}

		// avesse inserito un simbolo/numero
		for (size_t i = 0; i < strlen(input); ++i)
		{
			if ((input[i] < 65 || (input[i] < 97 && input[i] > 90) || input[i] > 122) && input[i] != '\'')
			{
				printf(" Hai inserito un simbolo/numero e NON una lettera, riprova\n\n");
				check = false;
				break;
			}
		}

		if (check == false)
			continue;

		// avesse inserito un solo carattere e NON una parola
		if (strlen(input) == 1)
		{
			check = false;

			for (size_t i = 0; i < 26; ++i)
			{
				if (input[0] == alfabeto[i])
				{
					check = true;
					break;
				}
			}

			if (check == false)
				printf(" Hai gia' inserito questa lettera, riprova\n\n");
		}

	} while (check == false);

	return input;
}