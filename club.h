/
// Created by rsof on 14/04/19.
//

#ifndef TUBES_STD_CLUB_H
#define TUBES_STD_CLUB_H
#include "player.h"



void create_list_club(list_club &S);
address_club alokasi_club(club X);
void insert_first_club(list_club &S, address_club P);
void view_club(list_club S,list_player K);
void dealokasi_club(address_club P);
void delete_first_club(list_club &S);
void insert_last_club(list_club &S, address_club P);
void delete_last_club(list_club &S);
void insert_after_club(list_club &S, address_club P, int R);
void delete_after_club(list_club &S, int R);
address_club search_club(list_club S,string nama_club);
void set_player_club(list_player L1,list_club L2,string nama_club,string nama_pemain);
void delete_player_any_club(list_player L1,list_club L2,string player);
void set_player_ex(list_player L1,list_club L2,string nama_club,string nama_pemain);
void player_and_ex(list_player L1,list_club L2,string namaplayer);
void search_the_most_player_have_ex(list_player L1,list_club L2);
void list_club_on_list(list_club C);
void the_worst_ex_club(list_club L2);
#endif //TUBES_STD_CLUB_H
