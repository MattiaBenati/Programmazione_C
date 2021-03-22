
#include "angoli.h"

int main(void)
{
	struct angolo ang_1;
	ang_1.secondi = 59;
	ang_1.primi = 58;
	ang_1.gradi = 10;

	struct angolo ang_2;
	ang_2.secondi = 01;
	ang_2.primi = 01;
	ang_2.gradi = 10;

	struct angolo risult;
	risult = somma_angoli(ang_1, ang_2);

	return 0;
}