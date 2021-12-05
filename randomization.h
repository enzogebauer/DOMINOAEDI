std:: vector <std::pair <char,char> > gamepieces; // 
std:: pair <char,char> pair;
//struct contendo um par de int
// para a entrega das Piecess ocorrer de forma aleatoria iremos utilizar uma lista dupla com dois elementos por index
// e um vetor de pares para que seja possível organizarmos as Piecess em pares a partir do  de caractere de cada uma
void randomization(){
pair.first = Pieces[0];//branco
	pair.second = Pieces[0];
	gamepieces.push_back(pair);
	pair.second = Pieces[1];
	gamepieces.push_back(pair);
	pair.second = Pieces[2];
	gamepieces.push_back(pair);
	pair.second = Pieces[3];
	gamepieces.push_back(pair);
	pair.second = Pieces[4];
	gamepieces.push_back(pair);
	pair.second = Pieces[5];
	gamepieces.push_back(pair);
	pair.second = Pieces[6];
	gamepieces.push_back(pair);
	pair.first = Pieces[1];//as
	pair.second = Pieces[1];
	gamepieces.push_back(pair);
	pair.second = Pieces[2];
	gamepieces.push_back(pair);
	pair.second = Pieces[3];
	gamepieces.push_back(pair);
	pair.second = Pieces[4];
	gamepieces.push_back(pair);
	pair.second = Pieces[5];
	gamepieces.push_back(pair);
	pair.second = Pieces[6];
	gamepieces.push_back(pair);
	pair.first = Pieces[2];//duque
	pair.second = Pieces[2];
	gamepieces.push_back(pair);
	pair.second = Pieces[3];
	gamepieces.push_back(pair);
	pair.second = Pieces[4];
	gamepieces.push_back(pair);
	pair.second = Pieces[5];
	gamepieces.push_back(pair);
	pair.second = Pieces[6];
	gamepieces.push_back(pair);
	pair.first = Pieces[3];//terno
	pair.second = Pieces[3];
	gamepieces.push_back(pair);
	pair.second = Pieces[4];
	gamepieces.push_back(pair);
	pair.second = Pieces[5];
	gamepieces.push_back(pair);
	pair.second = Pieces[6];
	gamepieces.push_back(pair);
	pair.first = Pieces[4];//quadra
	pair.second = Pieces[4];
	gamepieces.push_back(pair);
	pair.second = Pieces[5];//quina
	gamepieces.push_back(pair);
	pair.second = Pieces[6];
	gamepieces.push_back(pair);
	pair.first = Pieces[5];
	pair.second = Pieces[5];
	gamepieces.push_back(pair);
	pair.second = Pieces[6];
	gamepieces.push_back(pair);
	pair.first = Pieces[6];//sena
	gamepieces.push_back(pair);

srand(time(NULL)); //embaralhando as Piecess utilizando as funcoes srand,time,random_shuffle para embaralhar o vetor duplo.
std::random_shuffle (gamepieces.begin(),gamepieces.end());
for(int j = 0; j < 4; j++){//agora sera distribuido as pecas as maos dos jogadores

for (int i=0;i<7;i++){
	
	Players[j].Piece.push_back( gamepieces.back());
	gamepieces.pop_back();
}

}
}