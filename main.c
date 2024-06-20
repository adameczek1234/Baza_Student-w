#include <stdio.h>
#include <stdlib.h>
#include "Studenci.h"

void menu() {
    printf("1 - Wpisz Ucznia: \n");
    printf("2 - Wyświetl zapisane osoby: \n");
    printf("3 - : \n");
    printf("4 - Wpisz kobieta(k) lub mezczyzna(m): \n");
    printf("5 - Zakończ program!!! \n");
}



int main(){
    struct student tab[SIZE];
    int liczba_studentow = 0;
    while (1){
        menu();
        int numer_menu = 0;
        scanf("%d",&numer_menu);
        int element_tablicy = 0;

        switch (numer_menu) {
            case 1:
                printf("1 - Wpisz Nazwisko: \n");
                scanf("%s",tab[0].Nazwisko);
                printf("2 - Wpisz Imię: \n");
                scanf("%s",tab[0].Imie);
                printf("3 - Wpisz Wiek: \n");
                scanf("%i",&tab[0].Wiek);
                printf("4 - Wpisz kobieta(k) lub mezczyzna(m): \n");
                scanf("%c\n",&tab[0].plec);

                break;
            case 2:
                pokaz_wszystkich_studentow(tab,liczba_studentow);
                break;
            case 3:

                break;
            case 4:

                break;
            case 5:
                exit(10);
                break;
            default:
                printf("Wybrałeś zły elemet!!!\n");
        }
    }
}

