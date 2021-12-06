void PrintWinners(){
    system("cls");
	std::cout<<"------------------------------------------------\n";
	std::cout<< "\n";
	std::cout<< "                      Winners:                  \n\n";
	while(!Winners.empty()){
	
	std::cout<<"               "<<Winners.front()<<"\n";
	Winners.pop_front();
}

	std::cout<< "------------------------------------------------\n";
	
	system("pause");
}