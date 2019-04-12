#include "player.h"

void createPlayerList(playerList &L){
  first(L) = NULL;
}

addrPlayer Allocation(string playerName){
  addrPlayer P = new elmPlayer;
  playerInfo(P) = playerName;
  next(P) = NULL;
  prev(P) = NULL;
  return P;
}

void insertFirstPlayer(playerList &L, addrPlayer P){
  if(first(L) == NULL){
    next(P) = first(L);
  } else {
    addrPlayer Q = first(L);
    next(first(L)) = Q;
    first(L) = P;
    next(P) = Q;
  }
}