#include "club.h"

int main() {
    char n;
    list_player S;
    list_club C;
    address P, Q;
    address_club U, X;
    club T;
    player K;
    string nama_pemain;
    string posisi_pemain;
    string no_punggung;
    string klub_pemain;
    string add_nama_club, add_asal_club, add_stadium_club;

    create_list_player(S);
    create_list_club(C);

    while (n != '9') {
        system("cls");
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
        cout << "8.nama pemain dengan terbanyak mantan terbanyak dan club dengan mantan terdikit" << endl;
        cout << "9.keluar" << endl;
        cout << endl;
        cout << endl;
        cout << "pemain saat ini ada didata: " << endl;
        view_player(S);
        cout << endl;
        cout << endl;
        cout << "club yang saat ini ada di data: " << endl;
        list_club_on_list(C);
        cout << "==============================================================================================="
             << endl;
        cout << "pilihan anda: ";
        cin >> n;
        if (n == '1') {
            system("cls");
            cout << "masukkan nama pemain" << endl;
            cin >> nama_pemain;
            K.name = nama_pemain;
            P = alokasi_player(K);
            insert_last_player(S, P);
        }
        if (n == '2') {
            system("cls");
            cout << "masukkan nama club" << endl;
            cin >> add_nama_club;
            T.name_club = add_nama_club;
            U = alokasi_club(T);
            insert_last_club(C, U);
        }

        if (n == '3') {
            system("cls");
            cout << "pemain saat ini ada didata: " << endl;
            view_player(S);
            cout << endl;
            cout << endl;
            cout << "club yang saat ini ada di data: " << endl;
            list_club_on_list(C);
            cout << endl;
            cout << "masukkan nama pemain" << endl;
            cin >> nama_pemain;
            cout << "masukkan nama club" << endl;
            cin >> add_nama_club;
            set_player_club(S, C, add_nama_club, nama_pemain);
        }


        if (n == '4') {
            system("cls");
            cout << "pemain saat ini ada didata: " << endl;
            view_player(S);
            cout << endl;
            cout << "masukkan nama pemain" << endl;
            cin >> nama_pemain;
            delete_player_any_club(S, C, nama_pemain);
        }

        if (n == '5') {
            while (n != '9') {
                system("cls");
                view_club(C, S);
                cout << "tekan sembarang untuk melihat lagi dan tekan 9 untuk kembali ke menu" << endl;
                cin >> n;
            }
            n = '0';
        }

        if (n == '6') {
            system("cls");
            cout << "pemain saat ini ada didata: " << endl;
            view_player(S);
            cout << "masukkan nama pemain" << endl;
            cin >> nama_pemain;
            cout << "masukkan nama club pemain " << endl;
            cin >> add_nama_club;
            set_player_ex(S, C, add_nama_club, nama_pemain);
        }
        if (n == '7') {
            while (n != '9') {
                system("cls");
                cout << "pemain saat ini ada didata: " << endl;
                view_player(S);
                cout << endl;
                cout << "masukkan nama pemain " << endl;
                cin >> nama_pemain;
                player_and_ex(S, C, nama_pemain);
                cout << "tekan sembarang untuk mencari lagi dan 9 untuk keluar" << endl;
                cin >> n;
            }
            n = '0';
        }
        if (n == '8') {
            while (n != '9') {
                system("cls");
                search_the_most_player_have_ex(S, C);
                cout << "tekan sembarang untuk mencari lagi dan 9 untuk keluar" << endl;
                cin >> n;
            }
            n = '0';

        }

    }
}
