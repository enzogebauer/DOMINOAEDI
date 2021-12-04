void OrganizeHand (std::list <std::pair <char,char>> &Piece){
    int i, atu, prox, *pedra0, *pedra1, *aux;

    for(i=0;i<7;i++){
        
        atu = Piece.front(i).first + Piece.front(i).second;
        prox = Piece.front(i+1).first + Piece.front(i+1).second;
        
        if(atu > prox){
        // ent a pedra no local i deve ser trocada pela pedra i+1    
        } 
    }
}