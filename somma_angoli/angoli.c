
#include "angoli.h"

extern struct angolo somma_angoli(struct angolo a, struct angolo b)
{
    size_t tmp;

    uint8_t secondi = 0;
    uint8_t primi = 0;
    uint16_t gradi = 0;

    struct angolo risult;

    // somma secondi
    if (a.secondi + b.secondi >= 60)
    {
        tmp = a.secondi + b.secondi;

        while (tmp >= 60)
        {
            tmp -= 60;
            ++primi;
        }

        secondi = a.secondi + b.secondi - primi * 60;
    }

    else
        secondi = a.secondi + b.secondi;

    // somma primi
    if (a.primi + b.primi + primi >= 60)
    {
        tmp = a.primi + b.primi + primi;

        while (tmp >= 60)
        {
            tmp -= 60;
            ++gradi;
        }

        primi += a.primi + b.primi - gradi * 60;
    }

    else
        primi += a.primi + b.primi;

    // somma secondi
    gradi += a.gradi + b.gradi;

    // inserimento in risultato
    risult.secondi = secondi;
    risult.primi = primi;
    risult.gradi = gradi;

    return risult;
}