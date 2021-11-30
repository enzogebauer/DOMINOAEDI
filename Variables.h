std::list<std::pair <char,char> > mesa ;
char Pecas[7]; // Aqui ficam os caracteres escolhidos pelos jogadores para representar
               // as pecas do domino
struct jogadores{ // struct do jogadores, armazena as variaveis a mao de cada jogador e os seus respectivos nomes
    std::list <std::pair <char,char>> peca;
    std::string name;
}jogadores[4];


