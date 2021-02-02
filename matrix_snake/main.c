
#include "matrix.h"

#include <stdlib.h>

int main(void)
{
	struct matrix snake;
	snake.rows = 3;
	snake.cols = 3;
	snake.data = calloc(snake.rows * snake.cols, sizeof(double));

	for (size_t i = 0; i < snake.rows * snake.cols; ++i)
	{
		snake.data[i] = i + 1;
	}

	double* vett = calloc(snake.rows * snake.cols, sizeof(double));

	vett = matrix_snake(&snake);

	free(vett);
	return 0;
}