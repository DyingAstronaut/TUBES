#include "kurir.h"


void createListKurir(List_kurir &L){
    first(L) = NULL;
}

adr_kurir createNewElmKurir(infotypekurir x){
    adr_kurir P = new elm_kurir;
    info(P) = x;
    next(P) = NULL;
    return P;
}


void insertLastKurir(List_kurir &L, adr_kurir P){
    adr_kurir Q = first(L);

    if(first(L) == NULL){
        first(L) = P;
        next(P) = first(L);
    }else{
        while(next(Q) != first(L)){
            Q = next(Q);
        }
        next(Q) = P;
        next(P) = first(L);
    }

}

void deleteKurirdanPaket(List_kurir &L, adr_kurir &P){
    if(first(L) == NULL){
        cout << "List Kurir Kosong" << endl;
    }else {
        //blom beres
    }
}

void printDataKurir(List_kurir L){
    adr_kurir P = first(L);
    adr_kurir Q = next(P);
    int i = 1;
    if(first(L) == NULL){
        cout << "List Kurir Kosong" << endl;
    }else {
        while(Q != first(L)){
            cout << i << ".) "<< info(P) << endl;
            P = next(P);
            Q = P;
            i++;
        }
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

