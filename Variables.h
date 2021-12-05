std::list<std::pair <char,char>> Table;
std::list<std::string> Winners;
 // Aqui ficam os caracteres escolhidos pelos jogadores para representar
               // as pecas do domino
char Pieces[7]; //guarda os valores de 

struct player{ // struct do jogadores, armazena as variaveis a mao de cada jogador e os seus respectivos nomes
    std::list <std::pair <char,char>> Piece; // mao do jogador
    std::string Name; // nome de cada jogador
}Players[4]; // cada jogador possui salvo um nome e uma mao

int Firsttime = 0; //indica quem e o primeiro jogador
int Turn; //indica a vez de cada jogador
int Unentschieden;
int Choicee; // usada no HUb


