#include "TicTacToe.h"

void TicTacToe::play(Player& xPlayer, Player& oPlayer)
{
    w = nullptr;
    xPlayer.setChar('X');
    oPlayer.setChar('O');
    gboard = '.';
    int size = (gboard.size()) * (gboard.size());
-    for(int i = 0; i < size; i++)
     {
-        if(!fullboard()){
         tryPlay(xPlayer, oPlayer);
-        }
         if(w) break;
-        if(!fullboard()){
         tryPlay(oPlayer,xPlayer);
-        }
    if(w==nullptr)w=&oPlayer;

}


