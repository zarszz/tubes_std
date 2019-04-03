#include "tubes.h"
#include <iostream>

int main() {
    int n;
    list S;
    address P;
    player K;
    string nama_pemain,posisi_pemain,no_punggung,klub;

    create_list(S);

    while(n != 0){
        cout << "1.tambah pemain" << endl;
        cout << "2.view pemain" << endl;
        cout << "0.keluar" << endl;
        cout << endl;
        cout << "pilihan anda: ";
        cin >> n;

        if(n == 1){
            cout << "masukkan nama pemain: ";
            cin >> nama_pemain;
            cout << "masukkan posisi pemain: ";
            cin >> posisi_pemain;
            K.name = nama_pemain;
            K.posisi = posisi_pemain;
            P = alokasi(K);
            insert_first(S,P);
        }

        if(n == 2){
            view(S);
        }

    }
    return 0;
}