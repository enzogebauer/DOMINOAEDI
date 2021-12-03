void PrintTable(std::list <std::pair <char,char> > Pieces, std:: string Name, std:: list<std::pair<char,char>>Table){
    system("cls");
    std::cout << "                                             "<<Name<< "\n";
    std:: cout <<"n\n                                             Pecas:\n\n";
    std::cout << "                                ";
    Pieces.sort();
    for(int i = 0; i < Pieces.size() ; i++){
 	std::cout << "  " << i+1  << "   "; 
}
 
 
 
 std::cout << "\n" << "                                ";
	
	while(!Pieces.empty()){
 	std::cout << "[" << Pieces.front().first <<  "|" <<Pieces.front().second << "] "; 
 	Pieces.pop_front();
}
printf("\n\n\n========================================================================================================================\n\n\n");
 
 if(Firsttime != 0){ 
 
 while(!Table.empty()){
 
 std::cout << "[" << Table.front().first << "|" <<   Table.front().second << "]";
 Table.pop_front();
}

}
 
 printf("\n\n\n\n\n\n========================================================================================================================\n");
 
 	
		
}