#include "paket.h"

void createListPaket(List_paket &L){
    first(L) = NULL;
    last(L) = NULL;
}

adr_paket createNewElmPaket(infotypepaket x){
    adr_paket P;
    P = new elm_paket;
    info(P) = x;
    next(P) = NULL;
}

void insertPaket(List_paket &L, adr_paket P){

    if(first(L) == NULL){
        first(L) = P;
        last(L) = P;
    }else{
        next(last(L)) = P;
        last(L) = P;
    }
}

void printDataPaket(List_paket L){
    adr_paket P = first(L);
    int i = 1;
    cout << "No. Pengirim\t Penerima\t Jenis\t Berat(Kg)"<<endl<<endl;
    while(P != NULL){
        cout << i << ".) "
        << info(P).nama_pengirim << "  \t " << info(P).nama_penerima
        << "  \t  " << info(P).jenis_paket << " \t " << info(P).berat << endl;
        i++;
        P = next(P);
    }
}

adr_paket findPaket(List_paket L, infotypepaket x){
    adr_paket P = first(L);
    while(P != NULL){
        if(info(P).nama_pengirim == x.nama_pengirim && info(P).nama_penerima == x.nama_penerima && info(P).jenis_paket == x.jenis_paket){
            return P;
        }
        P = next(P);
    }
    return NULL;
}


void deletePaketTertentu(List_paket &LP, List_kurir &LK){
        if(first(LP) != NULL){
//            findPaket(LP,x);

        }
}

