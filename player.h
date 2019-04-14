#ifndef TUBES_STD_PLAYER_H
#define TUBES_STD_PLAYER_H

#define nextto(P)  P->next
#define infoto(P)  P->info
#define firstto(S) S.first
#define relasi(P)  P->next_player_address
#include <iostream>
#include <string>

using namespace std;

struct player{
    string name;
    int mantan;
};

typedef struct element *address;
struct element{
    player info;
    address next;
};

struct list_player{
    address first;
};

void create_list_player(list_player &S);
address alokasi_player(player X);
void insert_first_player(list_player &S, address P);
void view_player(list_player S);
void dealokasi_player(address P);
void delete_first_player(list_player &S);
void insert_last_player(list_player &S, address P);
void delete_last_player(list_player &S);
void insert_after_player(list_player &S, address P, int R);
void delete_after_player(list_player &S, int R);
address search_player(list_player S,string name);
void update_player(address P,string name);

#endif
