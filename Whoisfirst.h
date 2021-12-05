bool Whoisfirst(std :: list <std::pair <char,char> > l){ // funcao que vai definir qual jogador comeca o jogo.

    for(int i=0;i<7;i++){ // percorre a mao de cada jogador
        if(l.front().first == Pieces[1] && l.front().second == Pieces[1]){
        // se o primeiro elemento do par da mão for um, bem como o segundo, o jogador comeca o jogo.
        return true; 
        } 
        l.pop_front();
    }
return false;
}
