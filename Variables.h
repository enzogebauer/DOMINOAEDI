std::list<std::pair <char,char>> Table;
std::list<std::string> Winners;
int Pieces[7]; // Aqui ficam os caracteres escolhidos pelos jogadores para representar
               // as pecas do domino
void FPieces(){
    for(int i = 0; i < 7; i++){
        Pieces[i] = i;
    }
}

struct player{ // struct do jogadores, armazena as variaveis a mao de cada jogador e os seus respectivos nomes
    std::list <std::pair <char,char>> Piece; // mao do jogador
    std::string Name; // nome de cada jogador
}Players[4]; // cada jogador possui salvo um nome e uma mao

int Firsttime = 0; //indica quem e o primeiro jogador
int Turn; //indica a vez de cada jogador
int Notgoingtoanywhere;


