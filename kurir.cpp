#include "kurir.h"

void createListKurir(List_kurir &L){
    first(L) = NULL;
    last(L) = NULL;
}

adr_kurir createNewElmKurir(infotypekurir x){
    adr_kurir P = new elm_kurir;
    info(P) = x;
    next(P) = NULL;
    return P;
}


void insertLastKurir(List_kurir &L, adr_kurir P){

    if(first(L) == NULL){
        first(L) = P;
        last(L) = P;
    }else {
        next(last(L)) = P;
        last(L) = P;
    }

}

void DeleteFirst(List_kurir &L, adr_kurir &P){
    P = first(L);
    if(P != NULL){
        first(L) = next(P);
        next(P) = NULL;
    }
}

void printDataKurir(List_kurir L){
    adr_kurir P = first(L);
    int i = 1;
    while(P != NULL){
        cout << i << ".) "<< info(P) << endl;
        i++;
        P = next(P);
    }
}

adr_kurir findElementKurir(List_kurir L, infotypekurir x){
    adr_kurir P = first(L);
    while(P != NULL){
        if(info(P) == x){
            return P;
        }
        P = next(P);
    }
    return NULL;
}

