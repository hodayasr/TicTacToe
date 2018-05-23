#include "TicTacToe.h"

void TicTacToe::play(Player& xPlayer, Player& oPlayer)
{
    w = nullptr;
    xPlayer.setChar('X');
    oPlayer.setChar('O');
    gboard = '.';
    int size = (gboard.size()) * (gboard.size());
    int end=0;
    //for(int i = 0; i < size; i++)
    while(true)
    {
        //if(!fullboard())
        tryPlay(xPlayer, oPlayer);
        end++;
        if(w) break;
        if(end==size)break;
        //if(!fullboard())
        tryPlay(oPlayer,xPlayer);
        end++;
        if(w) break;
        if(end==size)break;
    }
   if(w==nullptr)w=&oPlayer;

}


