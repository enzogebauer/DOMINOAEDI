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
#include "randomization.h"
#include "Whoisfirst.h"
#include "PrintTable.h"
#include "restart.h"
#include "PLaygame.h"
#include "Skipturn.h"
using namespace std;
int main(){
    int i=1;
    Infogame();
    FPieces();
    PickNames();
    RestartGame(); 
    // agora entra a parte da entrega das pecas a cada jogador, essa entrega tem que ser feita de maneira aleatoria
    // Visando entregar um jogo justo para todos os envolvidos
    printf("\nApos a escolha das pecas e dos nomes do jogadores, QUE COMECE O JOGO!!!\n");
    while(true){ //while que representa o começo do jogo.
    PlayGame(Players[Turn].Piece,Players[Turn].Name,Table);
    //lalalalalala
    }
return 0;
}


    
