
#include <stdbool.h>

extern bool is_arithmetic(const int* v, int n);

int main(void)
{
	bool risposta;

	//int vett_1[10] = { 4, 2, 3, 5, 12, 4, 21, 43, 1, 123 };
	//int vett_2[3] = { 7, 7, 7 };
	int vett_3[5] = { 10, 8, 6, 4, 2 };

	//risposta = is_arithmetic(&vett_1, 10);
	//risposta = is_arithmetic(&vett_2, 3);
	risposta = is_arithmetic(&vett_3, 5);

	return 0;
}