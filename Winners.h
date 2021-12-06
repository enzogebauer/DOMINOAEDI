void PrintWinners(){
    system("cls");
	printf("------------------------------------------------\n");
	printf("\n\n");
	printf("             Winners:  \n");
	while(!Winners.empty()){
	
	std::cout<<"               "<<Winners.front()<<"\n";
	Winners.pop_front();
}

	printf("------------------------------------------------\n");
	
	system("pause");
}