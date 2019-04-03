#ifndef TUBES_STD_TUBES_H
#define TUBES_STD_TUBES_H

#define nextto(P)  P->next
#define infoto(P)  P->info
#define firstto(S) S.first
#include <iostream>
#include <string>

using namespace std;

struct player{
    string name;
    string posisi;
    string no_punggung;
    string klub;
};

typedef struct element *address;
struct element{
    player info;
    address next;
};

struct list{
    address first;
};

void create_list(list &S);
address alokasi(player X);
void insert_first(list &S, address P);
void view(list S);
void dealokasi(address P);
void delete_first(list &S);
void insert_last(list &S, address P);
void delete_last(list &S);
void insert_after(list &S, address P, int R);
void delete_after(list &S, int R);
address search(list S,string name);
void update(address P,string name);

#endif
