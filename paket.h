#ifndef PAKET_H_INCLUDED
#define PAKET_H_INCLUDED
#include <iostream>

using namespace std;

#define first(L) L.first
#define last(L) L.last
#define next(P) (P)-> next
#define info(P) (P)-> info
#define next_kurir(P) (P)->next_kurir

#include "kurir.h"

struct paket {
    int berat;
    string nama_pengirim;
    string nama_penerima;
    string jenis_paket;
};
typedef struct paket infotypepaket;
typedef struct elm_paket *adr_paket;
typedef struct elm_kurir *adr_kurir;

struct elm_paket{
    infotypepaket info;
    adr_paket next;
    adr_kurir next_kurir; ///Pointer Parent
};
struct List_paket{
    adr_paket first;
    adr_paket last;
};


void createListPaket(List_paket &L);
adr_paket createNewElmPaket(infotypepaket x);
void insertPaket(List_paket &L, adr_paket P);
void deletePaketTertentu(List_paket &LP, List_kurir &LK);
void connectPaket(List_kurir &LK, List_paket &LP);
void printDataPaket(List_paket L);
adr_paket findPaket(List_paket L, infotypepaket x);
#endif // PAKET_H_INCLUDED
