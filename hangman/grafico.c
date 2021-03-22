
#define _CRT_SECURE_NO_WARNINGS

#include "grafico.h"
#include <stdio.h>

/* ------------- *\
	  _____
	 /     \_
	/ 	   |_|
	|     --|--
	|       |
	|      / \
	|
	|___

\* ------------- */

size_t rows = 8;	// 8 righe
size_t cols = 11;	// 11 colonne

// stampa grafico

extern void stampa_grafico(char** grafico)
{
	for (int r = rows - 1; r >= 0; --r)
	{
		printf("\t\t     ");

		for (int c = 0; c < cols; ++c)
		{
			printf("%c", grafico[r][c]);

			if (c == cols - 1)
				printf("\n");
		}
	}

	printf("\n");
}

// creazione grafico

extern void creazione_grafico(char** grafico, size_t errori)
{
	if (errori == 0)
		errori_0(grafico);
	else if (errori == 1)
		errori_1(grafico);
	else if (errori == 2)
		errori_2(grafico);
	else if (errori == 3)
		errori_3(grafico);
	else if (errori == 4)
		errori_4(grafico);
	else if (errori == 5)
		errori_5(grafico);
	else if (errori == 6)
		errori_6(grafico);
	else if (errori == 7)
		errori_7(grafico);
}

// errore = 0

extern void errori_0(char** grafico)
{
	for (size_t r = 0; r < rows; ++r)
	{
		for (size_t c = 0; c < cols; ++c)
		{
			grafico[r][c] = ' ';
		}
	}
}

// errore = 1

extern void errori_1(char** grafico)
{
	// 0° riga
	grafico[0][0] = '|'; grafico[0][1] = '_'; grafico[0][2] = '_';
	grafico[0][3] = ' '; grafico[0][4] = ' '; grafico[0][5] = ' '; grafico[0][6] = ' ';
	grafico[0][7] = ' '; grafico[0][8] = ' '; grafico[0][9] = ' '; grafico[0][10] = ' ';
	// 1° riga
	grafico[1][0] = '|'; grafico[1][1] = ' '; grafico[1][2] = ' ';
	grafico[1][3] = ' '; grafico[1][4] = ' '; grafico[1][5] = ' '; grafico[1][6] = ' ';
	grafico[1][7] = ' '; grafico[1][8] = ' '; grafico[1][9] = ' '; grafico[1][10] = ' ';
	// 2° riga
	grafico[2][0] = '|'; grafico[2][1] = ' '; grafico[2][2] = ' ';
	grafico[2][3] = ' '; grafico[2][4] = ' '; grafico[2][5] = ' '; grafico[2][6] = ' ';
	grafico[2][7] = ' '; grafico[2][8] = ' '; grafico[2][9] = ' '; grafico[2][10] = ' ';
	// 3° riga
	grafico[3][0] = '|'; grafico[3][1] = ' '; grafico[3][2] = ' ';
	grafico[3][3] = ' '; grafico[3][4] = ' '; grafico[3][5] = ' '; grafico[3][6] = ' ';
	grafico[3][7] = ' '; grafico[3][8] = ' '; grafico[3][9] = ' '; grafico[3][10] = ' ';
	// 4° riga
	grafico[4][0] = '|'; grafico[4][1] = ' '; grafico[4][2] = ' ';
	grafico[4][3] = ' '; grafico[4][4] = ' '; grafico[4][5] = ' '; grafico[4][6] = ' ';
	grafico[4][7] = ' '; grafico[4][8] = ' '; grafico[4][9] = ' '; grafico[4][10] = ' ';

	for (size_t r = 5; r < rows; ++r)
	{
		for (size_t c = 0; c < cols; ++c)
		{
			grafico[r][c] = ' ';
		}
	}
}

// errore = 2

extern void errori_2(char** grafico)
{
	// 0° riga
	grafico[0][0] = '|'; grafico[0][1] = '_'; grafico[0][2] = '_';
	grafico[0][3] = ' '; grafico[0][4] = ' '; grafico[0][5] = ' '; grafico[0][6] = ' ';
	grafico[0][7] = ' '; grafico[0][8] = ' '; grafico[0][9] = ' '; grafico[0][10] = ' ';
	// 1° riga
	grafico[1][0] = '|'; grafico[1][1] = ' '; grafico[1][2] = ' ';
	grafico[1][3] = ' '; grafico[1][4] = ' '; grafico[1][5] = ' '; grafico[1][6] = ' ';
	grafico[1][7] = ' '; grafico[1][8] = ' '; grafico[1][9] = ' '; grafico[1][10] = ' ';
	// 2° riga
	grafico[2][0] = '|'; grafico[2][1] = ' '; grafico[2][2] = ' ';
	grafico[2][3] = ' '; grafico[2][4] = ' '; grafico[2][5] = ' '; grafico[2][6] = ' ';
	grafico[2][7] = ' '; grafico[2][8] = ' '; grafico[2][9] = ' '; grafico[2][10] = ' ';
	// 3° riga
	grafico[3][0] = '|'; grafico[3][1] = ' '; grafico[3][2] = ' ';
	grafico[3][3] = ' '; grafico[3][4] = ' '; grafico[3][5] = ' '; grafico[3][6] = ' ';
	grafico[3][7] = ' '; grafico[3][8] = ' '; grafico[3][9] = ' '; grafico[3][10] = ' ';
	// 4° riga
	grafico[4][0] = '|'; grafico[4][1] = ' '; grafico[4][2] = ' ';
	grafico[4][3] = ' '; grafico[4][4] = ' '; grafico[4][5] = ' '; grafico[4][6] = ' ';
	grafico[4][7] = ' '; grafico[4][8] = ' '; grafico[4][9] = ' '; grafico[4][10] = ' ';
	// 5° riga
	grafico[5][0] = '/'; grafico[5][1] = ' '; grafico[5][2] = ' ';
	grafico[5][3] = ' '; grafico[5][4] = ' '; grafico[5][5] = ' '; grafico[5][6] = ' ';
	grafico[5][7] = ' '; grafico[5][8] = ' '; grafico[5][9] = ' '; grafico[5][10] = ' ';
	// 6° riga
	grafico[6][0] = ' '; grafico[6][1] = '/'; grafico[6][2] = ' ';
	grafico[6][3] = ' '; grafico[6][4] = ' '; grafico[6][5] = ' '; grafico[6][6] = ' ';
	grafico[6][7] = '\\'; grafico[6][8] = ' '; grafico[6][9] = ' '; grafico[6][10] = ' ';
	// 7° riga
	grafico[7][0] = ' '; grafico[7][1] = ' '; grafico[7][2] = '_';
	grafico[7][3] = '_'; grafico[7][4] = '_'; grafico[7][5] = '_'; grafico[7][6] = '_';
	grafico[7][7] = ' '; grafico[7][8] = ' '; grafico[7][9] = ' '; grafico[7][10] = ' ';
}

// errore = 3

extern void errori_3(char** grafico)
{
	// 0° riga
	grafico[0][0] = '|'; grafico[0][1] = '_'; grafico[0][2] = '_';
	grafico[0][3] = ' '; grafico[0][4] = ' '; grafico[0][5] = ' '; grafico[0][6] = ' ';
	grafico[0][7] = ' '; grafico[0][8] = ' '; grafico[0][9] = ' '; grafico[0][10] = ' ';
	// 1° riga
	grafico[1][0] = '|'; grafico[1][1] = ' '; grafico[1][2] = ' ';
	grafico[1][3] = ' '; grafico[1][4] = ' '; grafico[1][5] = ' '; grafico[1][6] = ' ';
	grafico[1][7] = ' '; grafico[1][8] = ' '; grafico[1][9] = ' '; grafico[1][10] = ' ';
	// 2° riga
	grafico[2][0] = '|'; grafico[2][1] = ' '; grafico[2][2] = ' ';
	grafico[2][3] = ' '; grafico[2][4] = ' '; grafico[2][5] = ' '; grafico[2][6] = ' ';
	grafico[2][7] = ' '; grafico[2][8] = ' '; grafico[2][9] = ' '; grafico[2][10] = ' ';
	// 3° riga
	grafico[3][0] = '|'; grafico[3][1] = ' '; grafico[3][2] = ' ';
	grafico[3][3] = ' '; grafico[3][4] = ' '; grafico[3][5] = ' '; grafico[3][6] = ' ';
	grafico[3][7] = ' '; grafico[3][8] = '|'; grafico[3][9] = ' '; grafico[3][10] = ' ';
	// 4° riga
	grafico[4][0] = '|'; grafico[4][1] = ' '; grafico[4][2] = ' ';
	grafico[4][3] = ' '; grafico[4][4] = ' '; grafico[4][5] = ' '; grafico[4][6] = ' ';
	grafico[4][7] = ' '; grafico[4][8] = '|'; grafico[4][9] = ' '; grafico[4][10] = ' ';
	// 5° riga
	grafico[5][0] = '/'; grafico[5][1] = ' '; grafico[5][2] = ' ';
	grafico[5][3] = ' '; grafico[5][4] = ' '; grafico[5][5] = ' '; grafico[5][6] = ' ';
	grafico[5][7] = '|'; grafico[5][8] = '_'; grafico[5][9] = '|'; grafico[5][10] = ' ';
	// 6° riga
	grafico[6][0] = ' '; grafico[6][1] = '/'; grafico[6][2] = ' ';
	grafico[6][3] = ' '; grafico[6][4] = ' '; grafico[6][5] = ' '; grafico[6][6] = ' ';
	grafico[6][7] = '\\'; grafico[6][8] = '_'; grafico[6][9] = ' '; grafico[6][10] = ' ';
	// 7° riga
	grafico[7][0] = ' '; grafico[7][1] = ' '; grafico[7][2] = '_';
	grafico[7][3] = '_'; grafico[7][4] = '_'; grafico[7][5] = '_'; grafico[7][6] = '_';
	grafico[7][7] = ' '; grafico[7][8] = ' '; grafico[7][9] = ' '; grafico[7][10] = ' ';
}

// errore = 4

extern void errori_4(char** grafico)
{
	// 0° riga
	grafico[0][0] = '|'; grafico[0][1] = '_'; grafico[0][2] = '_';
	grafico[0][3] = ' '; grafico[0][4] = ' '; grafico[0][5] = ' '; grafico[0][6] = ' ';
	grafico[0][7] = ' '; grafico[0][8] = ' '; grafico[0][9] = ' '; grafico[0][10] = ' ';
	// 1° riga
	grafico[1][0] = '|'; grafico[1][1] = ' '; grafico[1][2] = ' ';
	grafico[1][3] = ' '; grafico[1][4] = ' '; grafico[1][5] = ' '; grafico[1][6] = ' ';
	grafico[1][7] = ' '; grafico[1][8] = ' '; grafico[1][9] = ' '; grafico[1][10] = ' ';
	// 2° riga
	grafico[2][0] = '|'; grafico[2][1] = ' '; grafico[2][2] = ' ';
	grafico[2][3] = ' '; grafico[2][4] = ' '; grafico[2][5] = ' '; grafico[2][6] = ' ';
	grafico[2][7] = ' '; grafico[2][8] = ' '; grafico[2][9] = '\\'; grafico[2][10] = ' ';
	// 3° riga
	grafico[3][0] = '|'; grafico[3][1] = ' '; grafico[3][2] = ' ';
	grafico[3][3] = ' '; grafico[3][4] = ' '; grafico[3][5] = ' '; grafico[3][6] = ' ';
	grafico[3][7] = ' '; grafico[3][8] = '|'; grafico[3][9] = ' '; grafico[3][10] = ' ';
	// 4° riga
	grafico[4][0] = '|'; grafico[4][1] = ' '; grafico[4][2] = ' ';
	grafico[4][3] = ' '; grafico[4][4] = ' '; grafico[4][5] = ' '; grafico[4][6] = ' ';
	grafico[4][7] = ' '; grafico[4][8] = '|'; grafico[4][9] = ' '; grafico[4][10] = ' ';
	// 5° riga
	grafico[5][0] = '/'; grafico[5][1] = ' '; grafico[5][2] = ' ';
	grafico[5][3] = ' '; grafico[5][4] = ' '; grafico[5][5] = ' '; grafico[5][6] = ' ';
	grafico[5][7] = '|'; grafico[5][8] = '_'; grafico[5][9] = '|'; grafico[5][10] = ' ';
	// 6° riga
	grafico[6][0] = ' '; grafico[6][1] = '/'; grafico[6][2] = ' ';
	grafico[6][3] = ' '; grafico[6][4] = ' '; grafico[6][5] = ' '; grafico[6][6] = ' ';
	grafico[6][7] = '\\'; grafico[6][8] = '_'; grafico[6][9] = ' '; grafico[6][10] = ' ';
	// 7° riga
	grafico[7][0] = ' '; grafico[7][1] = ' '; grafico[7][2] = '_';
	grafico[7][3] = '_'; grafico[7][4] = '_'; grafico[7][5] = '_'; grafico[7][6] = '_';
	grafico[7][7] = ' '; grafico[7][8] = ' '; grafico[7][9] = ' '; grafico[7][10] = ' ';
}

// errore = 5

extern void errori_5(char** grafico)
{
	// 0° riga
	grafico[0][0] = '|'; grafico[0][1] = '_'; grafico[0][2] = '_';
	grafico[0][3] = ' '; grafico[0][4] = ' '; grafico[0][5] = ' '; grafico[0][6] = ' ';
	grafico[0][7] = ' '; grafico[0][8] = ' '; grafico[0][9] = ' '; grafico[0][10] = ' ';
	// 1° riga
	grafico[1][0] = '|'; grafico[1][1] = ' '; grafico[1][2] = ' ';
	grafico[1][3] = ' '; grafico[1][4] = ' '; grafico[1][5] = ' '; grafico[1][6] = ' ';
	grafico[1][7] = ' '; grafico[1][8] = ' '; grafico[1][9] = ' '; grafico[1][10] = ' ';
	// 2° riga
	grafico[2][0] = '|'; grafico[2][1] = ' '; grafico[2][2] = ' ';
	grafico[2][3] = ' '; grafico[2][4] = ' '; grafico[2][5] = ' '; grafico[2][6] = ' ';
	grafico[2][7] = '/'; grafico[2][8] = ' '; grafico[2][9] = '\\'; grafico[2][10] = ' ';
	// 3° riga
	grafico[3][0] = '|'; grafico[3][1] = ' '; grafico[3][2] = ' ';
	grafico[3][3] = ' '; grafico[3][4] = ' '; grafico[3][5] = ' '; grafico[3][6] = ' ';
	grafico[3][7] = ' '; grafico[3][8] = '|'; grafico[3][9] = ' '; grafico[3][10] = ' ';
	// 4° riga
	grafico[4][0] = '|'; grafico[4][1] = ' '; grafico[4][2] = ' ';
	grafico[4][3] = ' '; grafico[4][4] = ' '; grafico[4][5] = ' '; grafico[4][6] = ' ';
	grafico[4][7] = ' '; grafico[4][8] = '|'; grafico[4][9] = ' '; grafico[4][10] = ' ';
	// 5° riga
	grafico[5][0] = '/'; grafico[5][1] = ' '; grafico[5][2] = ' ';
	grafico[5][3] = ' '; grafico[5][4] = ' '; grafico[5][5] = ' '; grafico[5][6] = ' ';
	grafico[5][7] = '|'; grafico[5][8] = '_'; grafico[5][9] = '|'; grafico[5][10] = ' ';
	// 6° riga
	grafico[6][0] = ' '; grafico[6][1] = '/'; grafico[6][2] = ' ';
	grafico[6][3] = ' '; grafico[6][4] = ' '; grafico[6][5] = ' '; grafico[6][6] = ' ';
	grafico[6][7] = '\\'; grafico[6][8] = '_'; grafico[6][9] = ' '; grafico[6][10] = ' ';
	// 7° riga
	grafico[7][0] = ' '; grafico[7][1] = ' '; grafico[7][2] = '_';
	grafico[7][3] = '_'; grafico[7][4] = '_'; grafico[7][5] = '_'; grafico[7][6] = '_';
	grafico[7][7] = ' '; grafico[7][8] = ' '; grafico[7][9] = ' '; grafico[7][10] = ' ';
}

// errore = 6

extern void errori_6(char** grafico)
{
	// 0° riga
	grafico[0][0] = '|'; grafico[0][1] = '_'; grafico[0][2] = '_';
	grafico[0][3] = ' '; grafico[0][4] = ' '; grafico[0][5] = ' '; grafico[0][6] = ' ';
	grafico[0][7] = ' '; grafico[0][8] = ' '; grafico[0][9] = ' '; grafico[0][10] = ' ';
	// 1° riga
	grafico[1][0] = '|'; grafico[1][1] = ' '; grafico[1][2] = ' ';
	grafico[1][3] = ' '; grafico[1][4] = ' '; grafico[1][5] = ' '; grafico[1][6] = ' ';
	grafico[1][7] = ' '; grafico[1][8] = ' '; grafico[1][9] = ' '; grafico[1][10] = ' ';
	// 2° riga
	grafico[2][0] = '|'; grafico[2][1] = ' '; grafico[2][2] = ' ';
	grafico[2][3] = ' '; grafico[2][4] = ' '; grafico[2][5] = ' '; grafico[2][6] = ' ';
	grafico[2][7] = '/'; grafico[2][8] = ' '; grafico[2][9] = '\\'; grafico[2][10] = ' ';
	// 3° riga
	grafico[3][0] = '|'; grafico[3][1] = ' '; grafico[3][2] = ' ';
	grafico[3][3] = ' '; grafico[3][4] = ' '; grafico[3][5] = ' '; grafico[3][6] = ' ';
	grafico[3][7] = ' '; grafico[3][8] = '|'; grafico[3][9] = ' '; grafico[3][10] = ' ';
	// 4° riga
	grafico[4][0] = '|'; grafico[4][1] = ' '; grafico[4][2] = ' ';
	grafico[4][3] = ' '; grafico[4][4] = ' '; grafico[4][5] = ' '; grafico[4][6] = ' ';
	grafico[4][7] = ' '; grafico[4][8] = '|'; grafico[4][9] = '-'; grafico[4][10] = '-';
	// 5° riga
	grafico[5][0] = '/'; grafico[5][1] = ' '; grafico[5][2] = ' ';
	grafico[5][3] = ' '; grafico[5][4] = ' '; grafico[5][5] = ' '; grafico[5][6] = ' ';
	grafico[5][7] = '|'; grafico[5][8] = '_'; grafico[5][9] = '|'; grafico[5][10] = ' ';
	// 6° riga
	grafico[6][0] = ' '; grafico[6][1] = '/'; grafico[6][2] = ' ';
	grafico[6][3] = ' '; grafico[6][4] = ' '; grafico[6][5] = ' '; grafico[6][6] = ' ';
	grafico[6][7] = '\\'; grafico[6][8] = '_'; grafico[6][9] = ' '; grafico[6][10] = ' ';
	// 7° riga
	grafico[7][0] = ' '; grafico[7][1] = ' '; grafico[7][2] = '_';
	grafico[7][3] = '_'; grafico[7][4] = '_'; grafico[7][5] = '_'; grafico[7][6] = '_';
	grafico[7][7] = ' '; grafico[7][8] = ' '; grafico[7][9] = ' '; grafico[7][10] = ' ';
}

// errore = 7

extern void errori_7(char** grafico)
{
	// 0° riga
	grafico[0][0] = '|'; grafico[0][1] = '_'; grafico[0][2] = '_';
	grafico[0][3] = ' '; grafico[0][4] = ' '; grafico[0][5] = ' '; grafico[0][6] = ' ';
	grafico[0][7] = ' '; grafico[0][8] = ' '; grafico[0][9] = ' '; grafico[0][10] = ' ';
	// 1° riga
	grafico[1][0] = '|'; grafico[1][1] = ' '; grafico[1][2] = ' ';
	grafico[1][3] = ' '; grafico[1][4] = ' '; grafico[1][5] = ' '; grafico[1][6] = ' ';
	grafico[1][7] = ' '; grafico[1][8] = ' '; grafico[1][9] = ' '; grafico[1][10] = ' ';
	// 2° riga
	grafico[2][0] = '|'; grafico[2][1] = ' '; grafico[2][2] = ' ';
	grafico[2][3] = ' '; grafico[2][4] = ' '; grafico[2][5] = ' '; grafico[2][6] = ' ';
	grafico[2][7] = '/'; grafico[2][8] = ' '; grafico[2][9] = '\\'; grafico[2][10] = ' ';
	// 3° riga
	grafico[3][0] = '|'; grafico[3][1] = ' '; grafico[3][2] = ' ';
	grafico[3][3] = ' '; grafico[3][4] = ' '; grafico[3][5] = ' '; grafico[3][6] = ' ';
	grafico[3][7] = ' '; grafico[3][8] = '|'; grafico[3][9] = ' '; grafico[3][10] = ' ';
	// 4° riga
	grafico[4][0] = '|'; grafico[4][1] = ' '; grafico[4][2] = ' ';
	grafico[4][3] = ' '; grafico[4][4] = ' '; grafico[4][5] = ' '; grafico[4][6] = '-';
	grafico[4][7] = '-'; grafico[4][8] = '|'; grafico[4][9] = '-'; grafico[4][10] = '-';
	// 5° riga
	grafico[5][0] = '/'; grafico[5][1] = ' '; grafico[5][2] = ' ';
	grafico[5][3] = ' '; grafico[5][4] = ' '; grafico[5][5] = ' '; grafico[5][6] = ' ';
	grafico[5][7] = '|'; grafico[5][8] = '_'; grafico[5][9] = '|'; grafico[5][10] = ' ';
	// 6° riga
	grafico[6][0] = ' '; grafico[6][1] = '/'; grafico[6][2] = ' ';
	grafico[6][3] = ' '; grafico[6][4] = ' '; grafico[6][5] = ' '; grafico[6][6] = ' ';
	grafico[6][7] = '\\'; grafico[6][8] = '_'; grafico[6][9] = ' '; grafico[6][10] = ' ';
	// 7° riga
	grafico[7][0] = ' '; grafico[7][1] = ' '; grafico[7][2] = '_';
	grafico[7][3] = '_'; grafico[7][4] = '_'; grafico[7][5] = '_'; grafico[7][6] = '_';
	grafico[7][7] = ' '; grafico[7][8] = ' '; grafico[7][9] = ' '; grafico[7][10] = ' ';
}