void PrintTable(std::list <std::pair <char,char> > Piece, std:: string Name, std:: list<std::pair<char,char>>Table){
    system("cls");
    std::cout << "                                             "<<Name<< "\n";
    std:: cout <<"n\n                                             Pecas:\n\n";
    std::cout << "                                ";
    Piece.sort();
    for(int i = 0; i < Piece.size() ; i++){
 	std::cout << "  " << i+1  << "   "; 
}
 
 
 
 std::cout << "\n" << "                                ";
	OrganizeHand()
	while(!Piece.empty()){
 	std::cout << "[" << Piece.front().first <<  "|" <<Piece.front().second << "] "; 
 	Piece.pop_front();
}
cout<< "\n\n\n========================================================================================================================\n\n\n";
 
 if(Firsttime != 0){ 
 
 while(!Table.empty()){
 
 std::cout << "[" << Table.front().first << "|" <<   Table.front().second << "]";
 Table.pop_front();
}

}
 
 cout<< "\n\n\n\n\n\n========================================================================================================================\n";
 
 	
		
}