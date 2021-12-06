#include <iostream>
#include <list>
#include <vector>
#include <algorithm> 
#include <string.h>
#include <ctime>
#include <cstdlib>
#include <fstream>
#include "Infogame.h"
#include "Variables.h"
#include "Pickplayersnames.h"
#include "Pieces.h"
#include "Hub.h"
#include "randomization.h"
#include "Whoisfirst.h"
#include "PrintTable.h"
#include "restart.h"
#include "Skipturn.h"
#include "PLaygame.h"
#include "Winners.h"
#include "Unentschieden.h"
#include "Winner.h"

using namespace std;

int main(){
    Infogame();
    PickNames();
    TypePiece();
    while(Choicee != 2){
        GameHub();
        if(Choicee == 1){
            RestartGame();
            while(true){
                PlayGame(Players[Turn].Piece,Table,Players[Turn].Name);
                if(Players[Turn].Piece.empty()){
                    Winner(Players[Turn].Name);
                    break;
                }else if(Unentschieden == 4){

                     Unentschiedenf();
                     break;
                }
                Turn++;
                if(Turn>=4){
                    Turn = 0;
                }
            } 
        
        }

        
    } 
                   
return 0;
}


    
