int NotGoingToAnywhere(){
    int sum1 = 0, sum2 = 0, sum3 = 0, sum4 = 0;
    
    while(!Player[0].Piece.empty()){
        sum1 = sum1 + (Piece.first()+Piece.second());
        Piece.pop_back();
    }
    while(!Player[1].Piece.empty()){
        sum2 = sum2 + (Piece.first()+Piece.second());
        Piece.pop_back();
    }
    while(!Player[2].Piece.empty()){
        sum3 = sum3 + (Piece.first()+Piece.second());
        Piece.pop_back();
    }
    while(!Player[3].Piece.empty()){
        sum4 = sum4 + (Piece.first()+Piece.second());
        Piece.pop_back();
    }

    if(sum1 == sum2 == sum3 == sum4){
        Winners.push_back(Player[0].Name);
        Winners.push_back(Player[1].Name);
        Winners.push_back(Player[2].Name);
        Winners.push_back(Player[3].Name);
    }else if(sum1 == sum2 == sum3 < sum4){
        Winners.push_back(Player[0].Name);
        Winners.push_back(Player[1].Name);
        Winners.push_back(Player[2].Name);
    }else if(sum1 == sum2 == sum4 < sum3){
        Winners.push_back(Player[0].Name);
        Winners.push_back(Player[1].Name);
        Winners.push_back(Player[3].Name);
    }else if(sum1 == sum3 == sum4 < sum2){
        Winners.push_back(Player[0].Name);
        Winners.push_back(Player[2].Name);
        Winners.push_back(Player[3].Name);
    }else if(sum1 == sum2 == sum4 < sum3){
        Winners.push_back(Player[0].Name);
        Winners.push_back(Player[1].Name);
        Winners.push_back(Player[3].Name);
    }else if(sum1 == sum2 && sum1 < sum4 && sum1 < sum3){
        Winners.push_back(Player[0].Name);
        Winners.push_back(Player[1].Name);
    }else if(sum1 == sum3 && sum1 < sum4 && sum1 < sum2){
        Winners.push_back(Player[0].Name);
        Winners.push_back(Player[2].Name);
    }else if(sum1 == sum4 && sum1 < sum3 && sum1 < sum2){
        Winners.push_back(Player[0].Name);
        Winners.push_back(Player[3].Name);
    }else if(sum1 < sum3 && sum1 < sum4 && sum1 < sum2){
        Winners.push_back(Player[0].Name);
    }else if(sum4 == sum2 == sum3 < sum1){
        Winners.push_back(Player[1].Name);
        Winners.push_back(Player[2].Name);
        Winners.push_back(Player[3].Name);
    }else if(sum2 == sum3 && sum2 < sum4 && sum2 < sum1){
        Winners.push_back(Player[1].Name);
        Winners.push_back(Player[2].Name);
    }else if(sum2 == sum4 && sum2 < sum3 && sum2 < sum1){
        Winners.push_back(Player[1].Name);
        Winners.push_back(Player[3].Name);
    }else if(sum2 < sum3 && sum2 < sum4 && sum2 < sum1){
        Winners.push_back(Player[1].Name);
    }else if(sum3 == sum4 && sum3 < sum2 && sum3 < sum1){
        Winners.push_back(Player[2].Name);
        Winners.push_back(Player[3].Name);
    }else if(sum3 < sum4 && sum3 < sum2 && sum3 < sum1){
        Winners.push_back(Player[2].Name);
    }else if(sum4 < sum3 && sum4 < sum2 && sum4 < sum1){
        Winners.push_back(Player[3].Name);
    }
}