std::vector <std::pair<char,char> > gamepieces; // 
std::pair <char,char> aux; //struct contendo um par de char
// para a entrega das pecas ocorrer de forma aleatoria iremos utilizar uma lista dupla com dois elementos por index
// e um vetor de pares para que seja possível organizarmos as pecas em pares a partir do tipo de caractere de cada uma
aux.first = Pecas[0];
aux.second = Pecas[0]; // aqui guardamos em game pieces a dupla de zeros
gamepieces.push_back(aux);
aux.second = Pecas[1];
gamepieces.push_back(aux);
aux.second = Pecas[2];
gamepieces.push_back(aux);
aux.second = Pecas[3];
gamepieces.push_back(aux);
aux.second = Pecas[4];
gamepieces.push_back(aux);
aux.second = Pecas[5];
gamepieces.push_back(aux);
aux.second = Pecas[6];
gamepieces.push_back(aux);
aux.first = Pecas[2]; //Aqui guardamos em gamepieces a dupla de dois
aux.second = Pecas[2];
gamepieces.push_back(aux);
aux.first = Pecas[3]; 
aux.second = Pecas[3];
gamepieces.push_back(aux);
aux.first = Pecas[4]; 
aux.second = Pecas[4];
gamepieces.push_back(aux);
aux.first = Pecas[5]; 
aux.second = Pecas[5];
gamepieces.push_back(aux);
aux.first = Pecas[6]; 
aux.second = Pecas[6];
gamepieces.push_back(aux);