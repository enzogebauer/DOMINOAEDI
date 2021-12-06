void PlayGame(std::list <std::pair<char,char> > &Piece,std::list <std::pair<char,char> > &Table, std::string Name){
char side; // sera o side da lista onde será adicionada a peça já no mesa de jogo
int next=0; // next ira determinar se o Turno avançou
int choice; // selecionar peca

std:: list <std::pair<char,char> > aux; // lista onde serao guardadas as peças que forem
                                        // tiradas da mao do jogador e depois adicionadas na mesa de jogo oficial.
    while(next == 0){
        
        if(SkipTurn(Piece,Table) == false || Table.empty()){ // Se tiver peca valida na mao do jogador ou a lista estiver vazia entra no if
       
        Unentschieden = 0; //Variavel responsavel por indicar quando todos os jogadores passaram suas vezes para determinar quando o jogo tranca
        system("cls");
        PrintTable(Piece,Name,Table); // imprimindo a mesa de jogo, mao do jogador que começa e com o nome dele
        std::cout << "Selecione qual pedra desejas jogar\n";
        std::cin>>choice;
        fflush(stdin); //limpa o cursor simbolo de digitando
        Piece.sort(); // embaralha  mao do jogador
        if(0 < choice <= Piece.size()){
        choice--;
    
        for(int i = 0; i<choice;i++){
            aux.push_back(Piece.front()); //armazenamos as pecas anteriores a escolhida na lista auxiliar e selecionamos a escolhida
            Piece.pop_front(); //armazena em aux todas as pecas anteriores a escolhida
        }
        if(Firsttime == 0){ // se for a primeira jogada do jogo inteiro
           
            if(Piece.front().first == Pieces[1] && Piece.front().second == Pieces[1]){
                
                Table.push_back(Piece.front());  //coloca na mesa a peca escolhida
                Piece.pop_front(); //deleta da mao a peca escolhida
                while(!aux.empty()){
                    Piece.push_front(aux.back()); // transfere a auxiliar para o comeco da mao
                    aux.pop_back();                // e esvazia a auxiliar 
                }
                Firsttime++;
                next++;
                
            
            }else{
                while(!aux.empty()){ // se a peca 1/1 nao estiver na mao, tirar da aux e pushar na principal para seguir o for
                    Piece.push_front(aux.back());
                    aux.pop_back();
                }
            std::cout << "1/1 adicionado a mesa! \n";
            system("pause");
    }
        }else{//depois da primeira vez o usuario decide o side em que a peca sera jogada
        std::cout << "Voce quer jogar na direita ou na esquerda? Digite 'a' para esquerda e 'd'' para direita: \n";
		std::cin >>side;
        if(side == 'a'){//vai comparar o valor da peca as extremidades esquerda da mesa

        if(Piece.front().first == Table.front().first){
            std::swap(Piece.front().first,Piece.front().second);//swap funcao responsavel por "rodar" a peca
            Table.push_front(Piece.front());
            Piece.pop_front();
            next++;
            while(!aux.empty()){
			Piece.push_front(aux.back());
			aux.pop_back();
		}
    }else if(Piece.front().second == Table.front().first){
        Table.push_front(Piece.front());
        Piece.pop_front();
        next++;
        while(!aux.empty()){
			Piece.push_front(aux.back());
			aux.pop_back();
		}
    }else{
        while(!aux.empty()){
            Piece.push_front(aux.back());
			aux.pop_back();
        }
        std::cout << "JOGADA INVALIDA!!!\n";
        system("pause");
    }

    }else if (side == 'd'){// faz a mesma coisa do side esquerdo  mais comparando com a extremidade direita da mesa
		
		if (Piece.front().first == Table.back().second ){
		Table.push_back(Piece.front());
		Piece.pop_front();
		next++;
		while(!aux.empty()){
			Piece.push_front(aux.back());
			aux.pop_back();
		}
	}else if (Piece.front().second == Table.back().second ){
		std::swap(Piece.front().first,Piece.front().second);
		Table.push_back(Piece.front());
		Piece.pop_front();
		next++;
		while(!aux.empty()){
			Piece.push_front(aux.back());
			aux.pop_back();
		}
	}else{
	while(!aux.empty()){
			Piece.push_front(aux.back());
			aux.pop_back();
		}	
	std::cout << "Voce selecionou uma peca invalida!!!\n";
    system("pause");
		
	}
		
		
	}else if(side != a && side != d){
		
	std::cout << "Voce selecinou uma direcao invalida\n";
		system("pause");
	}
    
}
}else{
	
	std::cout << "Selecione uma pedra valida\n";
	system("pause");
	
}
	
}else{
	Unentschieden++;
	system("cls");
	PrintTable(Piece,Name,Table);
	std::cout << "lost turn\n";
	
	system("pause");
	
	break;
	
	
}

}
}