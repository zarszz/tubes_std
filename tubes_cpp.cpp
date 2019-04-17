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
    if(firstto(S) != NULL){
        address p = firstto(S);
        while (p != NULL){
            cout << endl;
            cout << endl;
            cout << "PLayer Name: "     << infoto(p).name << endl;

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
           cout << infoto(P).name_club << endl;
           P = nextto(P);
       }
   }
}


void view_club(list_club S,list_player K){
    if(firstto(S) != NULL){
        address_club p = firstto(S);
        while (p != NULL){
            cout << endl;
            cout << endl;
            cout << "Club Name: "     << infoto(p).name_club << endl;
            cout << "         PEMAINNYA        " << endl;
            if(relasi(p) != NULL){
                address q = firstto(K);
                while (q != NULL) {
                    if(tanda(q) != NULL) {
                        cout << endl;
                        cout << "Nama Pemain: " << infoto(q).name << endl;
                    }

                    q = nextto(q);
                }
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
void insert_after_club(list_club &S, address_club P, int R){
    if (firstto(S) != NULL){
        address_club p = firstto(S);
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
    else{insert_first_club(S,P);

    }

}
void delete_after_club(list_club &S, int R){
    if(firstto(S) != NULL){

        address_club p = firstto(S);
        int i = 1;
        while (p != NULL && i < R){
            p = nextto(p);
            i++;

        }
        if (p != NULL){
            if(nextto(p) == NULL){
                delete_last_club(S);
            }
            else{
                address_club q = nextto(p);
                nextto(p) = nextto(q);
                nextto(q) = NULL;
                dealokasi_club(q);
            }
        } else{
            cout << "data tidak sampai " << R << " data" << endl;
        }
    }
    else{
        cout << "data kosong" << endl;
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
if (infoto(P).curr_club == 0) {
    if (P != NULL && Q != NULL) {
        relasi(Q) = P;
        tanda(P) = relasi(Q);
        infoto(P).curr_club += 1;
    }
}
else{
    cout << "sorry player already have a club " << endl;
}

}

void delete_player_any_club(list_player L1,list_club L2,string player){
    address P;
    address_club Q;

    P = search_player(L1,player);
    if (P != NULL){
        Q = firstto(L2);
        while (Q != NULL){
            if (relasi(Q) = P){
                relasi(Q) = NULL;
            }
            Q = nextto(Q);
        }
        dealokasi_player(P);
    }
}

void set_player_ex(list_player L1,list_club L2,string nama_club_pemain,string nama_pemain){

    address P;
    address_club Q;

    P = search_player(L1,nama_pemain);
    Q = search_club(L2,nama_club_pemain);
        if (P != NULL && Q != NULL && mantan(Q) == NULL) {
            relasi(Q) = NULL;
            mantan(Q) = P;
            infoto(P).mantan += 1;
            infoto(P).curr_club -= 1;
            infoto(Q).jumlah_mantan += 1;
        }
        else if(mantan(Q) != NULL){
            cout << "tidak mungkin pemain menjadi mantan club disaat yang sama " << endl;
        }


}

void player_and_ex(list_player L1,list_club L2,string namaplayer){
    address P;
    address_club Q = firstto(L2);
    P = search_player(L1,namaplayer);

    if (P != NULL && infoto(P).mantan > 0){
        cout << namaplayer << endl;
        cout << "deretan mantan clubnya" << endl;
        while( Q != NULL){
            if (mantan(Q) == P){
                cout << infoto(Q).name_club << endl;
            }
            Q = nextto(Q);
        }
    }
}

void search_the_most_player_have_ex(list_player L1,list_club L2){

    int nilai_max = 0;
    string mantan_terbanyak;
    address P = firstto(L1);

    if(P != NULL){
        while (nextto(P) != NULL){
            if(infoto(P).mantan > nilai_max){
                nilai_max = infoto(P).mantan;
                mantan_terbanyak = infoto(P).name;
            }
            P = nextto(P);
        } player_and_ex(L1,L2,infoto(P).name);
          the_worst_ex_club(L2);
    }
}

void the_worst_ex_club(list_club L2){

   int nilai_min = 0;
   address_club Q = firstto(L2);
   address_club X = firstto(L2);
   nilai_min = infoto(Q).jumlah_mantan;

if(firstto(L2) != NULL){
       while (nextto(Q) != NULL){
           if (infoto(Q).jumlah_mantan < nilai_min){
               nilai_min = infoto(Q).jumlah_mantan;
               Q = X;
               infoto(X).name_club = infoto(Q).name_club;

           }
           Q = nextto(Q);
       }
       cout << "klub dengan mantan terendah adalah: " << infoto(X).name_club << endl;
       cout << "dengan jumlah mantan " << nilai_min << endl;

   }

}
