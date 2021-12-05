void RestartGame(){// seta o jogo para o começo
    for(int i=0;i<4;i++){
        Firsttime = 0;
        while(!Players[i].Piece.empty()){
            Players[i].Piece.pop_back();
        }  
    }
        while(!Winners.empty()){
            Winners.pop_back();
        }  
        while(!Table.empty()){
            Table.pop_back();
        }
        randomization();
        for(int i = 0; i<4; i++){
            if(Whoisfirst(Players[i].Piece)){
                Turn = i; // turn recebe o num correspondente ao jogador com a bucha de um
            } 
        }

}