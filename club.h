//
// Created by rsof on 14/04/19.
//

#ifndef TUBES_STD_CLUB_H
#define TUBES_STD_CLUB_H
#include "player.h"

struct club{
    string name_club;
};

typedef struct element_club *address_club;
struct element_club{
    club info;
    address_club next;
    address next_player_address;
};

struct list_club{
    address_club first;
};

void create_list_club(list_club &S);
address_club alokasi_club(club X);
void insert_first_club(list_club &S, address_club P);
void view_club(list_club S);
void dealokasi_club(address_club P);
void delete_first_club(list_club &S);
void insert_last_club(list_club &S, address_club P);
void delete_last_club(list_club &S);
void insert_after_club(list_club &S, address_club P, int R);
void delete_after_club(list_club &S, int R);
address_club search_club(list_club S,string nama_club);
void update_club(address P,string club);
void set_player_club(list_player L1,list_club L2,string nama_club,string nama_pemain);
void delete_player_any_club(list_player L1,list_club L2,string player);
#endif //TUBES_STD_CLUB_H
