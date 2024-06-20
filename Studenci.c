#include <stdio.h>
#include "Studenci.h"

void pokaz_wszystkich_studentow(struct student *tab, int liczba_studentow){
    for (int i = 0; i < liczba_studentow ; ++i) {
        printf("%s",tab[i].Nazwisko);
        printf("%s",tab[i].Imie);
        printf("%i",tab[i].Wiek);
        printf("%c",tab[i].plec);
    }
}

