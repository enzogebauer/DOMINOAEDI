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

void GameMenu(){
    while(true){
        system("cls");
        cout<< "_______________________\n";
        cout<< "        GAME MENU        ";
        cout<< "_______________________\n";
        cout<< "1-      PLAY GAME      \n";
        cout<< "2-        SCORE        \n";
        cout<< "3-        EXIT           ";
        cout<< "_______________________  ";

        cin>> Choicee;

        if(Choicee == 1 || Choicee == 2 || Choicee == 3){
            break;
        }else{
            cout<< "Selecione um número presente no menu."
            system("pause");
        }
    }
}

int main(){
    Infogame();
    FPieces();
    PickNames();

    while(Choicee != 3){
        GameMenu();
        if(Choicee == 1){
            RestartGame();
            while(true){
                PlayGame(Players[Turn].Piece,Players[Turn].Name,Table);
                if(Players[Turn].Piece.empty()){

                    break;
                }else if(Notgoingtoanywhere == 4){
                    NotGoingToAnywhere();
                }
                Turn++;
                if (Turn >= 4){
                    Turn = 0;
                }
                
            } 
        }else if(Choicee == 2){

        }
    }
    
                
             
        


    
    // agora entra a parte da entrega das pecas a cada jogador, essa entrega tem que ser feita de maneira aleatoria
    // Visando entregar um jogo justo para todos os envolvidos
    printf("\nApos a escolha das pecas e dos nomes do jogadores, QUE COMECE O JOGO!!!\n");
    while(true){ //while que representa o começo do jogo.
    PlayGame(Players[Turn].Piece,Players[Turn].Name,Table);
    //lalalalalala
    }
return 0;
}


    
