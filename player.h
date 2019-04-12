#include <iostream>
#include <string>
#define playerInfo(P) (P)->info
#define next(P) (P)->next
#define prev(P) (P)->prev
#define first(L) ((L).first)

using namespace std;

typedef string infoPlayer;

typedef struct  elmPlayer *addrPlayer;

struct elmPlayer{
  infoPlayer info;
  addrPlayer next;
  addrPlayer prev;
};

struct playerList{
  addrPlayer first;
};

void createPlayerList(playerList &L);
addrPlayer Allocation(string x, addrPlayer P);
void insertFirstPlayer(playerList &L, addrPlayer P);
void insertAfterPlayer(playerList &L, addrPlayer P, addrPlayer Q); //variabel Q sebagai variabel yang dicari
void insertLastPlayer(playerList &L, addrPlayer P);
void deleteFirstPlayer(playerList &L, addrPlayer P);
void deleteAfterPlayer(playerList &L, addrPlayer P);
addrPlayer findPlayer(playerList L);