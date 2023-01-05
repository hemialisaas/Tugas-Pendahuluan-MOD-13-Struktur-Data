#ifndef CSLL_H_INCLUDED
#define CSLL_H_INCLUDED

#include <iostream>
using namespace std;

#define info(P) (P)->info
#define next(P) (P)->next
#define first(L) ((L).first)
#define last(L) ((L).last)
#define nil NULL

struct infotype{
    string artis, judul, genre;
    int playtime;
};

typedef struct elmlist *adr;

struct elmlist{
    infotype info;
    adr next;
};

struct List{
    adr first;
};

void createlist_1301210526(List &L);
void createElm_1301210526(infotype lagubaru, adr &P);
void insertLast_1301210526(List &L, adr P);
void deletefirst_1301210526(List &L, adr &P);
void show_1301210526(List &L);

#endif // CSLL_H_INCLUDED
