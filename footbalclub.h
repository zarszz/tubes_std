#include <iostream>
#include <stdlib.h>
#include <algorithm>
#include <string>
#include "player.h"

using namespace std;

typedef string infoFootbalClub;

typedef struct footbalClub *addrFootbalClub;

struct footbalClub{
  addrFootbalClub next;
  addrFootbalClub prev;
  playerList footbalPlayer;
};

struct footbalClubList{
  addrFootbalClub first;
}