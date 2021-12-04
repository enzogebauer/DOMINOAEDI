int SkipTurn(std::list <std::pair<char,char> > List,std::list <std::pair<char,char> > Table){  // funçao respóonsavel por passar a vez do jogador caso nao  possua nenhuma peca valida em maos

    while(!List.empty()){

        if(List.front().first ==Table.front().first || List.front().second == Table.front().first || List.back().first == Table.back().second || List.front().second == Table.back().second){
            return false;
        }
        List.pop_front();
        
    }
return true;
}