#ifndef STUDENCI_STUDENCI_H
#define STUDENCI_STUDENCI_H
#define SIZE 10

struct student{
    char Nazwisko[30];
    char Imie[20];
    int Wiek;
    char plec;
};

void pokaz_wszystkich_studentow(struct student *tab, int liczba_studentow);

#endif //STUDENCI_STUDENCI_H
