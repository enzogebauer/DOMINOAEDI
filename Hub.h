void GameHub(){
    while(true){
        system("cls");
        std::cout<< "\n_______________________\n";
        std::cout<< "        GAME MENU        ";
        std::cout<< "_______________________\n";
        std::cout<< "1-      PLAY GAME      \n";
        std::cout<< "2-        EXIT         ";
        std::cout<< "_______________________\n";
        std::cin >> Choicee;
        if(Choicee == 1 || Choicee == 2){
            break;
        }else{
            std::cout<< "Selecione um numero presente no menu.\n";
            system("pause");
        }
    }
}