#include <stdio.h>

/**
Napisati program koji iz datog niza A, dužine N, ponalazi podniz uzastopnih elemenata niza A sa najvećom sumom elemenata.
 Ispisati sumu tog podniza.

NAPOMENA Podniz niza A čine uzastopni elementi niza A Bar jedan element niza A će biti pozitivan


Opis ulaza
Preko standardnog ulaza korisnik unosi:

Prva linija sadrži celobrojni tip N (broj elemenata u nizu)
Druga linija sadrži N razmakom odvojena broja koji opisuju niz A
Opis izlaza
Na standardni izlaz ispisati sumu najveceg podniza
*/



int main() {
    int n;
    scanf("%d", &n);

    int nizA[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &nizA[i]);
    }

    int trenutnaSuma = 0;
    int maksimalnaSuma = nizA[0];  // Inicijalizujemo je prvim elementom niza

    for (int i = 0; i < n; i++) {
        trenutnaSuma += nizA[i];

        if (trenutnaSuma > maksimalnaSuma) {
            maksimalnaSuma = trenutnaSuma;
        }

        // Ako trenutna suma postane negativna, resetujemo je
        if (trenutnaSuma < 0) {
            trenutnaSuma = 0;
        }
    }

    printf("%d\n", maksimalnaSuma);

    return 0;
}
