std:: vector <std::pair<char,char> > gamepieces; // 
std:: pair <char,char> aux;
//struct contendo um par de char
// para a entrega das pecas ocorrer de forma aleatoria iremos utilizar uma lista dupla com dois elementos por index
// e um vetor de pares para que seja possível organizarmos as pecas em pares a partir do tipo de caractere de cada uma
void randomization(){
aux.first = Pieces[0];
aux.second = Pieces[0]; // aqui guardamos em game pieces a dupla de zeros
gamepieces.push_back(aux);
aux.second = Pieces[1];
gamepieces.push_back(aux);
aux.second = Pieces[2];
gamepieces.push_back(aux);
aux.second = Pieces[3];
gamepieces.push_back(aux);
aux.second = Pieces[4];
gamepieces.push_back(aux);
aux.second = Pieces[5];
gamepieces.push_back(aux);
aux.second = Pieces[6];
gamepieces.push_back(aux);
aux.first = Pieces[1];
aux.second = Pieces[1];
gamepieces.push_back(aux);
aux.second = Pieces[2];
gamepieces.push_back(aux);
aux.second = Pieces[3];
gamepieces.push_back(aux);
aux.second = Pieces[4];
gamepieces.push_back(aux);
aux.second = Pieces[5];
gamepieces.push_back(aux);
aux.second = Pieces[6];
gamepieces.push_back(aux);
aux.first = Pieces[2];
aux.second = Pieces[2];
gamepieces.push_back(aux);
aux.second = Pieces[3];
gamepieces.push_back(aux);
aux.second = Pieces[4];
gamepieces.push_back(aux);
aux.second = Pieces[5];
gamepieces.push_back(aux);
aux.second = Pieces[6];
gamepieces.push_back(aux);
aux.first = Pieces[3];
aux.second = Pieces[3];
gamepieces.push_back(aux);
aux.second = Pieces[4];
gamepieces.push_back(aux);
aux.second = Pieces[5];
gamepieces.push_back(aux);
aux.second = Pieces[6];
gamepieces.push_back(aux);
aux.first = Pieces[4];
aux.second = Pieces[4];
gamepieces.push_back(aux);
aux.second = Pieces[5];
gamepieces.push_back(aux);
aux.second = Pieces[6];
gamepieces.push_back(aux);
aux.first = Pieces[5];
aux.second = Pieces[5];
gamepieces.push_back(aux);
aux.second = Pieces[6];
gamepieces.push_back(aux);
aux.first = Pieces[6];
aux.second = Pieces[6];
gamepieces.push_back(aux);

srand(time(NULL)); //embaralhando as pecas utilizando as funcoes srand,time,random_shuffle para embaralhar o vetor duplo.
std::random_shuffle (gamepieces.begin(),gamepieces.end());
int i=0,j=1;
    while(j>=4){
        while(i<7){
            Players[j].Piece.push_back(gamepieces.back());
            gamepieces.pop_back();

        i++;
        }
    j++;
    }
}