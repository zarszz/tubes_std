#include "club.h"
#include "player.h"

int main() {
    address cek_pemain;
    address_club cek_club;
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
        system("clear");
        cout << endl;
        cout << "=========================================================================================" << endl;
        cout << endl;
        cout << "1.tambah player" << endl;
        cout << "2.tambah club" << endl;
        cout << "3.menambahkan hubungan player dan club" << endl;
        cout << "4.hapus suatu pemain tertentu " << endl;
        cout << "5.club dan pemainnya" << endl;
        cout << "6.menghapus pemain dari suatu club" << endl;
        cout << "7.menampilkan pemain dan mantannya" << endl;
        cout << "8.nama pemain dengan mantan club terbanyak dan club dengan mantan terdikit" << endl;
        cout << "9.keluar" << endl;
        cout << endl;
        cout << endl;
        cout << "pemain saat ini ada didata: " << endl;
        view_player(S);
        cout << endl;
        cout << "club yang saat ini ada di data: " << endl;
        list_club_on_list(C);
        cout << "==========================================================================================" << endl;
        cout << "masukkan pilihan(1-9) -> ";
        cin >> n;
        if (n == '1') {
            while (n != '9') {
                system("clear");
                cout << "\t\tINPUT NAMA PEMAIN\t\t \n\n";
                cout << "masukkan nama pemain : ";
                getline(cin >> ws, nama_pemain);
                cek_pemain = search_player(S, nama_pemain);
                if(cek_pemain != NULL){
                    cout << "player sudah ada di dalam data !! \n";
                } else if(cek_pemain == NULL) {
                    K.name = nama_pemain;
                    P = alokasi_player(K);
                    insert_last_player(S, P);
                    cout << "nama player berhasil dimasukkan !! \n";
                }
                cout << "\n   --> tekan sembarang untuk INPUT kembali\n"
                        "   --> tekan 9 untuk kembali ke menu\n" << endl;
                cout << "pilihan -> ";
                cin >> n;
            }
            n = 'x';
        }
        if (n == '2') {
            system("clear");
            cout << "masukkan nama club" << endl;
            getline(cin>>ws, add_nama_club);
            T.name_club = add_nama_club;
            U = alokasi_club(T);
            insert_last_club(C, U);
        }

        if (n == '3') {
            system("clear");
            cout << "\t\t MENAMBAHKAN HUBUNGAN PLAYER DAN CLUB \t\t \n\n";
            cout << "pemain saat ini ada didata: " << endl;
            view_player(S);
            cout << endl;
            cout << endl;
            cout << "club yang saat ini ada di data: " << endl;
            list_club_on_list(C);
            cout << endl;
            cout << "masukkan nama pemain : ";
            getline(cin>>ws, nama_pemain);
            cek_pemain = search_player(S, nama_pemain);
            cout << "masukkan nama club : ";
            getline(cin>>ws, add_nama_club);
            cek_club = search_club(C, add_nama_club);
            if(cek_pemain != NULL && cek_club != NULL) {
                set_player_club(S, C, add_nama_club, nama_pemain);
                cout << "\n penyettingan berhasil \n";
            } else if((cek_pemain == NULL && cek_club == NULL) || (cek_pemain != NULL && cek_club == NULL)||
                    ((cek_club != NULL && cek_pemain == NULL)))  {
                cout << "\n club atau permain tidak terdapat dalam data \n";
            }

        }


        if (n == '4') {
            system("clear");
            cout << "\t\t MENGHAPUS PLAYER TERTENTU \t\t\n\n";
            cout << "pemain saat ini ada didata: " << endl;
            view_player(S);
            cout << endl;
            cout << "masukkan nama pemain : ";
            getline(cin>>ws, nama_pemain);
            delete_player_any_club(S,nama_pemain);
        }

        if (n == '5') {
            while (n != '9') {
                system("clear");
                view_club(C, S);
                cout << "tekan sembarang untuk melihat lagi dan tekan 9 untuk kembali ke menu" << endl;
                cin >> n;
            }
            n = '0';
        }

        if (n == '6') {
            system("clear");
            cout << "\t\t MENGHAPUS PERMAIN DARI CLUB \t\t\n\n";
            cout << "pemain saat ini ada didata: " << endl;
            view_player(S);
            cout << "masukkan nama pemain : ";
            getline(cin>>ws, nama_pemain);
            cek_pemain = search_player(S, nama_pemain);
            cout << "masukkan nama club : " ;
            getline(cin>>ws, add_nama_club);
            cek_club = search_club(C, add_nama_club);
            if(cek_pemain != NULL && cek_club != NULL) {
                set_player_ex(S, C, add_nama_club, nama_pemain);
                cout << "\n penyettingan berhasil \n";
            } else if((cek_pemain == NULL && cek_club == NULL) || (cek_pemain != NULL && cek_club == NULL)||
                      ((cek_club != NULL && cek_pemain == NULL)))  {
                cout << "\n club atau permain tidak terdapat dalam data \n";
            }

        }
        if (n == '7') {
            while (n != '9') {
                system("clear");
                cout << "\t\t MENAMPILKAN PEMAIN DAN MANTAN CLUBNYA \t\t \n\n";
                cout << "pemain saat ini ada didata: " << endl;
                view_player(S);
                cout << endl;
                cout << "masukkan nama pemain " << endl;
                getline(cin>>ws, nama_pemain);
                player_and_ex(S, C, nama_pemain);
                cout << "tekan sembarang untuk mencari lagi dan 9 untuk keluar" << endl;
                cin >> n;
            }
            n = '0';
        }
        if (n == '8') {
            while (n != '9') {
                system("clear");
                cout << "\t\t MENAMPILKAN PEMAIN DENGAN MANTAN CLUB TERBANYAK DAN\n";
                cout << "\t\t CLUB DENGAN MANTAN PEMAIN PALING SEDIKIT  \n\n";
                search_the_most_player_have_ex(S, C);
                cout << "tekan sembarang untuk mencari lagi dan 9 untuk keluar" << endl;
                cin >> n;
            }
            n = '0';

        }

    }
}
