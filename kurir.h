#ifndef KURIR_H_INCLUDED
#define KURIR_H_INCLUDED
#include <iostream>
#include <conio.h>
using namespace std;

#define first(L) L.first
#define next(P) (P)-> next
#define info(P) (P)-> info
#define last(L) L.last

typedef string infotypekurir;
typedef struct elm_kurir *adr_kurir;

struct elm_kurir{
    infotypekurir info;
    adr_kurir next;
};

struct List_kurir{
    adr_kurir first;
    adr_kurir last;
};

void createListKurir(List_kurir &L);
adr_kurir createNewElmKurir(infotypekurir x);
void insertLastKurir(List_kurir &L, adr_kurir P);
void DeleteFirst(List_kurir &L, adr_kurir &P);
void printDataKurir(List_kurir L);
adr_kurir findElementKurir(List_kurir L, infotypekurir x);



#endif // KURIR_H_INCLUDED
