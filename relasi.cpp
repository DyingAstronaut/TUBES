#include "relasi.h"

void printRelasi(List_kurir LK, List_paket LP){
    adr_kurir PK,Q;
    adr_paket PP;
    int i = 1;
    int j = 1;

    PK = first(LK);
    Q = next(PK);
    do{
        cout << "Nama Kurir ke- "<<j<< " : " << info(PK) << endl;
        PP = first(LP);
        while(next(next_kurir(PP)) != NULL){
            cout << "\tPaket- " << i << endl
            << "\t\tNama Pengirim : " << info(PP).nama_pengirim << endl
            << "\t\tNama Penerima : " << info(PP).nama_penerima << endl
            << "\t\tBerat : " << info(PP).berat << endl;
            PP = next(PP);
            i++;
        }
        PK = next(PK);
        Q = next(Q);
        j++;
    } while (Q != first(LK));
}


