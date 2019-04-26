//
// Created by rsof on 02/04/19.
//

#include "club.h"

void create_list_player(list_player &S){
    firstto(S) = NULL;



}
address alokasi_player(player X){
    address p = new element;
    infoto(p).name = X.name;
    nextto(p) = NULL;

    return p;

}
void insert_first_player(list_player &S, address P){
    nextto(P) = firstto(S);
    firstto(S) = P;
    P = NULL;


}
void view_player(list_player S){
    if(firstto(S) == NULL){
        cout << "player list empty \n";
    }
    else if(firstto(S) != NULL){
        address p = firstto(S);
        while (p != NULL){
            if(infoto(p).name != "") {
                cout << endl;
                cout << "Player Name: " << infoto(p).name << "  ||  Club saat ini:   " << infoto(p).remain_club << endl;
            }
            p = nextto(p);
        }
    }
}
void dealokasi_player(address P){
    delete P;

}
void delete_first_player(list_player &S){

     if (firstto(S) != NULL){
     address P  = firstto(S);
     firstto(S) = nextto(P);
     nextto(P) = NULL;
     dealokasi_player(P);
}

     else{
         cout << "list kosong" << endl;
     }

}
void insert_last_player(list_player &S, address P){
if (firstto(S) != NULL){
    address Q = firstto(S);
    while (nextto(Q) != NULL){
        Q = nextto(Q);
    }
    nextto(Q) = P;
    P = NULL;
}

else{
    insert_first_player(S,P);
}

}
void delete_last_player(list_player &S){
     if(firstto(S) != NULL){
         address P = firstto(S);
         if(nextto(P) == NULL){
             delete_first_player(S);
         }
         else {
             address Q = P;
             P = nextto(Q);
             while(nextto(P) != NULL){
                 Q = P;
                 P = nextto(Q);
             }
             nextto(Q) = NULL;
             dealokasi_player(P);
         }
     }
     else{
         cout << endl;
         cout << "list Kosong" << endl;
         cout << endl;
     }

}
void insert_after_player(list_player &S, address P, int R){
    if (firstto(S) != NULL){
        address p = firstto(S);
        int i = 1;
        while (p != NULL && i < R){
            p = nextto(p);
            i++;
        }
        if (p != NULL){
            nextto(P) = nextto(p);
            nextto(p) = P;
        } else{
            cout << "data tidak sampai ke  " << R << "  data" << endl;
        }
    }
    else{insert_first_player(S,P);

    }

}
void delete_after_player(list_player &S, int R){
    if(firstto(S) != NULL){

        address p = firstto(S);
        int i = 1;
        while (p != NULL && i < R){
            p = nextto(p);
            i++;

        }
        if (p != NULL){
            if(nextto(p) == NULL){
                delete_last_player(S);
            }
            else{
                address q = nextto(p);
                nextto(p) = nextto(q);
                nextto(q) = NULL;
                dealokasi_player(q);
            }
        } else{
            cout << "data tidak sampai " << R << " data" << endl;
        }
    }
    else{
        cout << "data kosong" << endl;
    }

}
address search_player(list_player S,string nama){
    if (firstto(S) != NULL ){
        address p = firstto(S);
        while (p != NULL && infoto(p).name != nama){
            p = nextto(p);

        }

        if(p != NULL){
            return p;
        }
        else{
            return NULL;
        }
    }
    else{
        return NULL;
    }

}
void update_player(address P,string name){

}

void create_list_club(list_club &S){
    firstto(S) = NULL;



}
address_club alokasi_club(club X){
    address_club p = new element_club;
    infoto(p).name_club = X.name_club;
    nextto(p) = NULL;

    return p;

}
void insert_first_club(list_club &S, address_club P){
    nextto(P) = firstto(S);
    firstto(S) = P;
    P = NULL;


}

void list_club_on_list(list_club C){
   address_club P = firstto(C);
   if (P != NULL){
       while (P != NULL){
           cout << "-" << infoto(P).name_club << endl;
           P = nextto(P);
       }
   }
}


void view_club(list_club S,list_player K){
    int pemain = 1;
    if(firstto(S) != NULL){
        address_club p = firstto(S);
        while (p != NULL){
            cout << endl;
            cout << endl;
            cout << "Club Name    : " << infoto(p).name_club << endl;
            cout << "Daftar Pemain: " << endl;
                address q = firstto(K);
                while (q != NULL) {
                    if(infoto(q).remain_club == infoto(p).name_club) {
                        if(infoto(q).name != "") {
                            cout << "- " << infoto(q).name << endl;
                        }
                    }
                    q = nextto(q);
                }
            p = nextto(p);
        }
    }

}
void dealokasi_club(address_club P){
    delete P;

}
void delete_first_club(list_club &S){

    if (firstto(S) != NULL){
        address_club P = firstto(S);
        firstto(S) = nextto(P);
        nextto(P) = NULL;
        dealokasi_club(P);
    }

    else{
        cout << "list kosong" << endl;
    }

}
void insert_last_club(list_club &S, address_club P){
    if (firstto(S) != NULL){
        address_club Q = firstto(S);
        while (nextto(Q) != NULL){
            Q = nextto(Q);
        }
        nextto(Q) = P;
        P = NULL;
    }

    else{
        insert_first_club(S,P);
    }

}
void delete_last_club(list_club &S){
    if(firstto(S) != NULL){
        address_club P = firstto(S);
        if(nextto(P) == NULL){
            delete_first_club(S);
        }
        else {
            address_club Q = P;
            P = nextto(Q);
            while(nextto(P) != NULL){
                Q = P;
                P = nextto(Q);
            }
            nextto(Q) = NULL;
            dealokasi_club(P);
        }
    }
    else{
        cout << endl;
        cout << "list Kosong" << endl;
        cout << endl;
    }

}


address_club search_club(list_club S,string nama_club){
    if (firstto(S) != NULL ){
        address_club p = firstto(S);
        while (p != NULL && infoto(p).name_club != nama_club){
            p = nextto(p);

        }

        if(p != NULL){
            return p;
        }
        else{
            return NULL;
        }

    }
    else{
        return NULL;
    }

}

void set_player_club(list_player L1,list_club L2,string nama_club_pemain,string nama_pemain){
    address P;
    address_club Q;

    P = search_player(L1,nama_pemain);
    Q = search_club(L2,nama_club_pemain);
    if(P == NULL || Q == NULL){
        cout << "pemain atau club tidak terdapat dalam data \n";
    }
    if (infoto(P).curr_club == 0) {
        if (P != NULL && Q != NULL) {
            relasi(Q) = P;
            infoto(P).remain_club = infoto(Q).name_club;
            infoto(P).curr_club += 1;
            cout << infoto(P).name << "berhasil bergabung dengan club  " << infoto(Q).name_club;
        }
    } else {
    cout << "maaf player telah memiliki club " << endl;
    }
}

void delete_player_any_club(list_player L1,list_club L2,string player){
    address prevP = firstto(L1);
    address P = search_player(L1,player);
    infoto(P).name = "";
    if(P != NULL) {
        if(P == firstto(L1) || nextto(P) == NULL){
            P = NULL;
            dealokasi_player(P);
        } else if(P != firstto(L1)) {
            while (nextto(prevP) != P) {
                prevP = nextto(prevP);
            }
            nextto(prevP) = nextto(P);
            P = NULL;
            dealokasi_player(P);
        }
    } else if(P == NULL){
        cout << "player not found \n";
    }
}

void set_player_ex(list_player L1,list_club L2,string nama_club_pemain,string nama_pemain){

    address P;
    address_club Q;

    P = search_player(L1,nama_pemain);
    Q = search_club(L2,nama_club_pemain);
        if (P != NULL && Q != NULL) {
            relasi(Q) = NULL;
            mantan(Q) = P;
            tanda(P) = Q;
            infoto(P).mantan += 1;
            infoto(P).curr_club -= 1;
            infoto(Q).jumlah_mantan += 1;
            infoto(P).remain_club = " ";
        }
        else if(mantan(Q) != NULL){
            cout << "tidak mungkin pemain menjadi mantan club disaat yang sama " << endl;
        }
        else{
            cout << "nama pemain / nama club mungkin tidak ditemukan" << endl;
        }


}

void player_and_ex(list_player L1,list_club L2,string namaplayer){
    address P;
    address_club Q = firstto(L2);
    P = search_player(L1,namaplayer);

    if (P != NULL && infoto(P).mantan > 0){
        cout << "Nama Pemain : " << namaplayer << endl;
        cout << "Club yang pernah dimaini pemain tersebut : " << endl;
        while( Q != NULL){
            if (tanda(P) == Q || mantan(Q) == P){
                cout << "-" << "." << infoto(Q).name_club << endl;
            }
            Q = nextto(Q);
        }
    }
}

void search_the_most_player_have_ex(list_player L1,list_club L2){

    int nilai_max = 0;
    string mantan_terbanyak;
    address P = firstto(L1);
    address E = firstto(L1);

    if(P != NULL){
        while (nextto(P) != NULL){
            if(infoto(P).mantan > nilai_max){
                nilai_max = infoto(P).mantan;
                E = P;
                infoto(E).name = infoto(P).name;
            }
            P = nextto(P);
        } player_and_ex(L1,L2,infoto(E).name);
          the_worst_ex_club(L2);
    }
}

void the_worst_ex_club(list_club L2){

   int nilai_min = 0;
   address_club Q = firstto(L2);
   address_club X = firstto(L2);
   nilai_min = infoto(Q).jumlah_mantan;

if(firstto(L2) != NULL){
       while (Q != NULL){
           if (infoto(Q).jumlah_mantan < nilai_min){
               X = Q;
               infoto(X).name_club = infoto(Q).name_club;}
               infoto(X).jumlah_mantan = infoto(Q).jumlah_mantan;
           Q = nextto(Q);
       }
       cout << "klub dengan mantan terendah adalah: " << infoto(X).name_club << endl;
       cout << "dengan jumlah mantan " << infoto(X).jumlah_mantan << endl;

   }

}
