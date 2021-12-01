std::list<std::pair <char,char> > table ;
char Pecas[7]; // Aqui ficam os caracteres escolhidos pelos jogadores para representar
               // as pecas do domino
struct jogadores{ // struct do jogadores, armazena as variaveis a mao de cada jogador e os seus respectivos nomes
    std::list <std::pair <char,char>> peca;
    std::string name;
}jogadores[4];
int firstplayer = 0; //indica quem e o primeiro jogador
int turn; //indica a vez de cada jogador


