#include "menu.h"

using namespace std;

void clearscreen(){
    system("CLS");
}

int inputmenu(){
    int j=0;
    bool stop=false;
    clearscreen();
    cout << "=====================================================================" << endl;
    cout << "\t\t\tTugas Besar STD\n" << endl;
    cout << "\t\t\tFarras Rafif | 1301213020" << endl;
    cout << "\t\t\tToni Perkasa Darmawan | 1301194307" << endl;
    cout << "============================= MAIN MENU =============================" << endl;
    cout << " " <<endl;
    cout << "1. Menu Insert"<<"               "<<"3. Menu Find" <<"               "<< "0. Exit App" << endl;
    cout << "2. Menu Delete"<<"               "<<"4. Menu Print" << endl;
    cout << " " <<endl;
    cout << "Pilih menu : " ;
    do{
        cin>>j;
        if(j>=0 && j<=4){
            stop=true;
        }else{
            cout<<"Nomor Keliru!"<<endl
            << "Pilih menu : ";
        }
    }while(stop!=true);
    return j;
}

void showMenu(int inputmenu, int i, List_kurir &LK, List_paket &LP){
    bool stop = false;
    switch(inputmenu){
        case 1:
            cout << "Pilih yang akan di inputkan" << endl << endl;
            cout << "1. Insert Data Kurir" << endl;
            cout << "2. insert Data Paket" << endl;
            cout << "3. Menghubungkan Kurir Dengan Paket" << endl;
            cout << "0. Back To Menu" << endl;

        do{
        cout << "Pilih menu : ";
        cin >> i;
        if(i >= 0 && i <= 3){
            stop = true;
        }else{
            cout << "Input keliru" << endl
            << "Pilih menu : ";
        }
    }while(stop != true);
        switch(i){
            case 1:
                insertDataKurir(LK);
                getch();
            break;
            case 2:
                insertDataPaket(LP);
                getch();
            break;
            case 3:
                cout << "Connect Kurir Test" << endl;
                connectKurirToPaket(LK,LP);
                getch();
            break;
            }

        break;

        case 2:
            cout << "Pilih yang akan di hapuskan" << endl << endl;
            cout << "1. Hapus Kurir & Paketnya" << endl;
            cout << "2. Hapus Paket pada Kurir tertentu" << endl;
            cout << "0. Back To Menu" << endl;

            do{
        cout << "Pilih menu : ";
        cin >> i;
        if(i >= 0 && i <= 3){
            stop = true;
        }else{
            cout << "Input keliru" << endl
            << "Pilih menu : ";
        }
    }while(stop != true);
        switch(i){
            case 1:
                cout << "Menghapus Kurir dan Paketnya" << endl;
                getch();
            break;
            case 2:
                cout << "Menghapus Paket dan Kurir Tertentu" << endl;
                getch();
            break;
            }

        break;

        case 3:
            cout << "Pilih yang akan di cari" << endl;
            cout << "1. Mencari Data Kurir" << endl;
            cout << "2. Mencari Data Paket pada Kurir Tertentu" << endl;
            cout << "0. Back To Menu" << endl;

            do{
        cout << "Pilih menu : ";
        cin >> i;
        if(i >= 0 && i <= 2){
            stop = true;
        }else{
            cout << "Input keliru" << endl
            << "Pilih menu : ";
        }
    }while(stop != true);
        switch(i){
            case 1:
                findKurir(LK);
                getch();
            break;
            case 2:
                cout << "Mencari Data Paket pada Kurir Tertentu test" << endl;
                getch();
            break;
            }

        break;

        case 4:
            cout << "Pilih yang akan di cari" << endl;
            cout << "1. Tampilkan Semua Data Kurir" << endl;
            cout << "2. Tampilkan Semua Data Kurir dan Paketnya" << endl;
            cout << "3. Tampilkan Kurir dengan Paket paling sedikit" << endl;
            cout << "4. Tampilkan Semua Data Paket" << endl;
            cout << "0. Back To Menu" << endl;

            do{
        cout << "Pilih menu : ";
        cin >> i;
        if(i >= 0 && i <= 4){
            stop = true;
        }else{
            cout << "Input keliru" << endl
            << "Pilih menu : ";
        }
    }while(stop != true);
        switch(i){
            case 1:
                PrintSemuaDataKurir(LK);
                getch();
            break;
            case 2:
                cout << "Tampilkan Semua Data Kurir dan Paketnya" << endl;
                showKurirDanPaket(LK,LP);
                getch();
            break;
            case 3:
                cout << "Tampilkan Kurir dengan Paket paling sedikit" << endl;
            break;
            case 4:
                PrintSemuaDataPaket(LP);
                getch();
            break;
            }

        break;
    }
}

void tampilmenu(){
    List_kurir LK;
    List_paket LP;

    createListKurir(LK);
    createListPaket(LP);
    int X,Y;
    bool stop = false;
    do{
        X = inputmenu();
        if(X != 0){
            clearscreen();
            showMenu(X,Y,LK,LP);
        }else{
            stop = true;
        }
    }while(stop != true);
}

void insertDataKurir(List_kurir &L){
    infotypekurir x;
    clearscreen();
    cout << "== Input Kurir ==" << endl;
    cout << "Nama Kurir : ";
    cin >> x;
    insertLastKurir(L,createNewElmKurir(x));
    cout << "Data Kurir telah ditambahkan dalam list kurir" << endl<<endl;
    cout << "Tekan apa saja untuk Kembali.."<<endl<<endl;
}

void insertDataPaket(List_paket &L){
    infotypepaket x;
    clearscreen();
    cout << "== Input Paket ==" << endl;
    cout << "Nama Pengirim : ";
    cin >> x.nama_pengirim;
    cout << "Nama Penerima : ";
    cin >> x.nama_penerima;
    cout << "Jenis Paket : ";
    cin >> x.jenis_paket;
    cout << "Berat Paket(kg) : ";
    cin >> x.berat;
    insertPaket(L,createNewElmPaket(x));
    cout << "Data Paket telah ditambahkan dalam list paket" << endl<<endl;
    cout << "Tekan apa saja untuk Kembali.."<<endl<<endl;
}

void connectKurirToPaket(List_kurir &LK, List_paket &LP){
    clearscreen();

    cout << "Membuat Relasi antara Kurir dengan Paket" << endl;
    printDataKurir(LK);
    cout<<endl;
    infotypekurir x;
    cout << "Nama Kurir : ";
    cin >> x;
    adr_kurir PK = findElementKurir(LK,x);

    printDataPaket(LP);
    cout<<endl;
    infotypepaket p;
    cout << "Nama Pengirim : ";
    cin >> p.nama_pengirim;
    cout << "Nama Penerima : ";
    cin >> p.nama_penerima;
    cout << "Jenis : ";
    cin >> p.jenis_paket;
    adr_paket PP = findPaket(LP,p);

    next_kurir(PP) = PK;
    cout << "Relasi telah dibuat.."<<endl;
    cout << "Tekan apa saja untuk Kembali.."<<endl<<endl;
}

void PrintSemuaDataKurir(List_kurir L){
    cout << "========== Data Kurir ==========" << endl;
    printDataKurir(L);
    cout << "\n\nTekan apa saja untuk Kembali.."<<endl;
}

void PrintSemuaDataPaket(List_paket L){
    cout << "========== Data Paket ==========" << endl;
    printDataPaket(L);
    cout << "\n\nTekan apa saja untuk Kembali.."<<endl;
}

void hapusPaketTertentu(List_paket &LP, infotypepaket x){
    cout << "== Hapus Paket Tertentu ==" << endl;

}

void findKurir(List_kurir L){
    adr_kurir P;
    infotypekurir x;
    cout << "========== Data Kurir ==========" << endl;
    cout << endl;
    cout << "Nama Kurir : ";
    cin >> x;
    P = findElementKurir(L,x);
    if (P != NULL){
        cout << endl << "Kurir Ditemukan : " << info(P) << endl;
    }else {
        cout << "Kurir Tidak Ditemukan!" << endl << endl;
    }
}

void showKurirDanPaket(List_kurir LK, List_paket LP){

    cout << "========== Data Kurir beserta Paketnya ==========" << endl;
    cout << endl;
    printRelasi(LK,LP);
    cout << "\n\nTekan apa saja untuk Kembali.."<<endl;
}












