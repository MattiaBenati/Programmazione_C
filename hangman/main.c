
#define _CRT_SECURE_NO_WARNINGS

#include "input.h"
#include "inizializzazione.h"
#include "aggiornamento.h"
#include "stampa.h"
#include "verifica.h"
#include "grafico.h"
#include "comandi.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	bool exit = false;	// uscita dal gioco

	do
	{
		// variabili
		char* word = NULL;		// parola (finale)
		char* letters = NULL;	// lettere (utente)
		char* alphabet = NULL;	// lettere (alfabeto)
		char* symbols = NULL;	// simboli (vocali e consonanti)

		bool answer = false;	// verifica lettera
		bool check = false;		// verifica parola

		size_t errors = 0;		// errori (max 7)

		// allocazione memoria
		char** graphic = calloc(8, sizeof(char*));

		for (size_t i = 0; i < 8; ++i)
			graphic[i] = calloc(11, sizeof(char));

		// inizializzazione
		word = parola_input();		// input parola
		maiusc_minusc(word);		// aggiornamento formato

		letters = lettere(word);	// inizializzazione lettere
		symbols = simboli(word);	// inizializzazione simboli
		alphabet = alfabeto();		// inizializzazione alfabeto

		do
		{
			char* letter = NULL;

			creazione_grafico(graphic, errors);	// creazione grafico
			stampa_grafico(graphic);			// stampa grafico
			stampa_alfabeto(alphabet);			// stampa alfabeto
			righe();
			stampa_lettere(letters, symbols);	// stampa caratteri indovinati

			if (check == true)
				break;
			if (errors == 7)
				break;

			letter = lettera_input(alphabet);	// input lettera

			// aggiornamento e verifica singolo carattere immesso
			if (strlen(letter) == 1)
			{
				lettere_aggiornamento(word, letters, letter);
				alfabeto_aggiornamento(alphabet, letter);

				answer = lettera_verifica(word, letter);

				if (answer == true)
					check = parola_verifica(word, letters);
			}

			// verifica parola
			else if (strlen(letter) > 1)
			{
				maiusc_minusc(letter);		// aggiornamento formato
				answer = parola_verifica(word, letter);
				check = answer;

				if (answer == true)
				{
					lettere_aggiornamento(word, letters, letter);
					alfabeto_aggiornamento(alphabet, letter);
				}
			}

			// se errata
			if (answer == false)
				errors += 1;

			free(letter);
			system("cls");

		} while (true);

		// stampa esito del gioco
		if (errors != 7)
			printf(" Complimenti! hai indovinato la parola di questo gioco!\n\n");
		else
			printf(" Mi dispiace.. ritenta e sarai piu' fortunato\n\n");

		printf(" La parola era: %s\n\n", word);

		righe();
		exit = termina();

		if (exit == false)
			system("cls");

		// eliminazione memoria variabili
		free(word);
		free(letters);
		free(symbols);
		free(alphabet);

		// eliminazione memoria
		for (size_t i = 0; i < 8; ++i)
			free(graphic[i]);

		free(graphic);

	} while (exit == false);

	return 0;
}