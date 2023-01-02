#ifndef MENU_H_INCLUDED
#define MENU_H_INCLUDED
#include "kurir.h"
#include "paket.h"

void clearscreen();
int inputmenu();
void tampilmenu();
void showMenu(int inputmenu, int i, List_kurir &LK, List_paket &LP);
void insertDataKurir(List_kurir &L);
void insertDataPaket(List_paket &L);
void PrintSemuaDataKurir(List_kurir L);
void PrintSemuaDataPaket(List_paket L);

#endif // MENU_H_INCLUDED
