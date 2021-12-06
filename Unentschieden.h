
void Unentschiedenf(){
    int sum[4];
    for(int j = 0; j < 4; j++){
        sum[j] = 0;
        for(int i = 0; i < Players[j].Piece.size(); i++){
            sum[j] = sum[j] + (Players[j].Piece.front().first + Players[j].Piece.front().second);
            Players[j].Piece.pop_front();
        }
    /*sum[0] = soma do primeiro
    sum[1] = soma do segundo
    sum[2] = soma do terceiro
    sum[3] = soma do quarto*/
    }

    if(sum[0] == sum[1] == sum[2] == sum[3]){
        Winners.push_back(Players[0].Name);
        Winners.push_back(Players[1].Name);
        Winners.push_back(Players[2].Name);
        Winners.push_back(Players[3].Name);
    }else if(sum[0] == sum[1] == sum[2] < sum[3]){
        Winners.push_back(Players[0].Name);
        Winners.push_back(Players[1].Name);
        Winners.push_back(Players[2].Name);
    }else if(sum[0] == sum[1] == sum[3] < sum[2]){
        Winners.push_back(Players[0].Name);
        Winners.push_back(Players[1].Name);
        Winners.push_back(Players[3].Name);
    }else if(sum[0] == sum[2] == sum[3] < sum[1]){
        Winners.push_back(Players[0].Name);
        Winners.push_back(Players[2].Name);
        Winners.push_back(Players[3].Name);
    }else if(sum[0] == sum[1] && sum[0] < sum[3] && sum[0] < sum[2]){
        Winners.push_back(Players[0].Name);
        Winners.push_back(Players[1].Name);
    }else if(sum[0] == sum[2] && sum[0] < sum[3] && sum[0] < sum[1]){
        Winners.push_back(Players[0].Name);
        Winners.push_back(Players[2].Name);
    }else if(sum[0] == sum[3] && sum[0] < sum[2] && sum[0] < sum[1]){
        Winners.push_back(Players[0].Name);
        Winners.push_back(Players[3].Name);
    }else if(sum[0] < sum[2] && sum[0] < sum[3] && sum[0] < sum[1]){
        Winners.push_back(Players[0].Name);
    }else if(sum[3] == sum[1] == sum[2] < sum[0]){
        Winners.push_back(Players[1].Name);
        Winners.push_back(Players[2].Name);
        Winners.push_back(Players[3].Name);
    }else if(sum[1] == sum[2] && sum[1] < sum[3] && sum[1] < sum[0]){
        Winners.push_back(Players[1].Name);
        Winners.push_back(Players[2].Name);
    }else if(sum[1] == sum[3] && sum[1] < sum[2] && sum[1] < sum[0]){
        Winners.push_back(Players[1].Name);
        Winners.push_back(Players[3].Name);
    }else if(sum[1] < sum[2] && sum[1] < sum[3] && sum[1] < sum[0]){
        Winners.push_back(Players[1].Name);
    }else if(sum[2] == sum[3] && sum[2] < sum[1] && sum[2] < sum[0]){
        Winners.push_back(Players[2].Name);
        Winners.push_back(Players[3].Name);
    }else if(sum[2] < sum[3] && sum[2] < sum[1] && sum[2] < sum[0]){
        Winners.push_back(Players[2].Name);
    }else if(sum[3] < sum[2] && sum[3] < sum[1] && sum[3] < sum[0]){
        Winners.push_back(Players[3].Name);
    }
    PrintWinners();
    
}
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    

    /*if(sum[0] == sum[1] == sum[2] == sum[3]){
        Winners.push_back(Players[0].Name);
        Winners.push_back(Players[1].Name);
        Winners.push_back(Players[2].Name);
        Winners.push_back(Players[3].Name);
    }else if(sum[0] == sum[1] == sum[2] < sum[3]){
        Winners.push_back(Players[0].Name);
        Winners.push_back(Players[1].Name);
        Winners.push_back(Players[2].Name);
    }else if(sum[0] == sum[1] == sum[3] < sum[2]){
        Winners.push_back(Players[0].Name);
        Winners.push_back(Players[1].Name);
        Winners.push_back(Players[3].Name);
    }else if(sum[0] == sum[2] == sum[3] < sum[1]){
        Winners.push_back(Players[0].Name);
        Winners.push_back(Players[2].Name);
        Winners.push_back(Players[3].Name);
    }else if(sum[0] == sum[1] == sum[3] < sum[2]){
        Winners.push_back(Players[0].Name);
        Winners.push_back(Players[1].Name);
        Winners.push_back(Players[3].Name);
    }else if(sum[0] == sum[1] && sum[0] < sum[3] && sum[0] < sum[2]){
        Winners.push_back(Players[0].Name);
        Winners.push_back(Players[1].Name);
    }else if(sum[0] == sum[2] && sum[0] < sum[3] && sum[0] < sum[1]){
        Winners.push_back(Players[0].Name);
        Winners.push_back(Players[2].Name);
    }else if(sum[0] == sum[3] && sum[0] < sum[2] && sum[0] < sum[1]){
        Winners.push_back(Players[0].Name);
        Winners.push_back(Players[3].Name);
    }else if(sum[0] < sum[2] && sum[0] < sum[3] && sum[0] < sum[1]){
        Winners.push_back(Players[0].Name);
    }else if(sum[3] == sum[1] == sum[2] < sum[0]){
        Winners.push_back(Players[1].Name);
        Winners.push_back(Players[2].Name);
        Winners.push_back(Players[3].Name);
    }else if(sum[1] == sum[2] && sum[1] < sum[3] && sum[1] < sum[0]){
        Winners.push_back(Players[1].Name);
        Winners.push_back(Players[2].Name);
    }else if(sum[1] == sum[3] && sum[1] < sum[2] && sum[1] < sum[0]){
        Winners.push_back(Players[1].Name);
        Winners.push_back(Players[3].Name);
    }else if(sum[1] < sum[2] && sum[1] < sum[3] && sum[1] < sum[0]){
        Winners.push_back(Players[1].Name);
    }else if(sum[2] == sum[3] && sum[2] < sum[1] && sum[2] < sum[0]){
        Winners.push_back(Players[2].Name);
        Winners.push_back(Players[3].Name);
    }else if(sum[2] < sum[3] && sum[2] < sum[1] && sum[2] < sum[0]){
        Winners.push_back(Players[2].Name);
    }else if(sum[3] < sum[2] && sum[3] < sum[1] && sum[3] < sum[0]){
        Winners.push_back(Players[3].Name);
    }
}*/