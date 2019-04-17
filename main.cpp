#include "club.h"

int main() {
    char n;
    list_player S;
    list_club C;
    address P,Q;
    address_club U,X;
    club T;
    player K;
    string nama_pemain;
    string posisi_pemain;
    string no_punggung;
    string klub_pemain;
    string add_nama_club,add_asal_club,add_stadium_club;

    create_list_player(S);
    create_list_club(C);

    while(n != '-') {
        cout << endl;
        cout << "=========================================================================================" << endl;
        cout << endl;
        cout << "1.tambah player" << endl;
        cout << "2.tambah club" << endl;
        cout << "3.menambahkan hubungan player dan club" << endl;
        cout << "4.hapus suatu pemain dari memori " << endl;
        cout << "5.club dan pemainnya" << endl;
        cout << "6.menghapus pemain dari suatu club" << endl;
        cout << "7.menampilkan pemain dan mantannya" << endl;
        cout << "8.nama pemain dengan terbanyak" << endl;
        cout << "-.keluar" << endl;
        cout << endl;
        cout << endl;
        cout << "==============================================================================================="
             << endl;
        cout << "pilihan anda: ";
        cin >> n;
        if(n == '1' ){
                cout << "masukkan nama pemain" << endl;
                cin >> nama_pemain;
                K.name = nama_pemain;
                P = alokasi_player(K);
                insert_first_player(S, P);
        }
        if(n == '2'){
            cout << "masukkan nama club" << endl;
            cin >> add_nama_club;
            T.name_club = add_nama_club;
            U = alokasi_club(T);
            insert_first_club(C,U);
        }

        if (n == '3'){
            cout << "masukkan nama pemain" << endl;
            cin >> nama_pemain;
            cout << "masukkan nama club" << endl;
            cin >> add_nama_club;
            set_player_club(S, C, add_nama_club, nama_pemain);
        }


        if (n == '4'){
            cout << "masukkan nama pemain" << endl;
            cin >> nama_pemain;
            delete_player_any_club(S,C,nama_pemain);
        }

        if (n == '5'){
            view_club(C,S);
        }

        if (n == '6'){
            cout << "masukkan nama pemain" << endl;
            cin >> nama_pemain;
            cout << "masukkan nama club" << endl;
            cin >> add_nama_club;
            set_player_ex(S,C,add_nama_club,nama_pemain);
        }
        if (n == '7'){
            cout << "masukkan nama pemain " << endl;
            cin >> nama_pemain;

            player_and_ex(S,C,nama_pemain);
        }
        if (n == '8'){
            search_the_most_player_have_ex(S,C);
        }

        }
        if (n == '9'){
            the_worst_ex_club(C);
        }

    }
