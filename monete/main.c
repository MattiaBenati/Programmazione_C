
#include <stdlib.h>

extern int* Monete(int* tagli, size_t tagli_size, int budget);

int main()
{
	{
		// il risultato in questo caso sarà quello corretto
		int tagli[] = { 50, 20, 10, 5, 2, 1 };
		size_t tagli_size = 6;
		int budget = 126;

		int* res = Monete(tagli, tagli_size, budget);
		free(res);
	}
	
	{
		// il risultato in questo caso NON sarà più quello corretto
		int tagli[] = { 50, 20, 6, 5, 1 };
		size_t tagli_size = 5;
		int budget = 10;

		int* res = Monete(tagli, tagli_size, budget);
		free(res);
	}
	

	return 0;
}