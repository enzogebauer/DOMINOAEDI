void PickNames(){
    system("cls");
    printf("              Player one              \n");
    printf("===========================================\n");
    printf("******* Digite o nome do primeiro jogador *******\n");
    printf("===========================================\n");
    std::cin >> Players[0].Name;
    while(1){
    system("cls");
    printf("              Player two              \n");
    printf("===========================================\n");
    printf("******* Digite o nome do segundo jogador *******\n");
    printf("===========================================\n");
    std::cin >> Players[1].Name;
     if((Players[1].Name.compare(Players[0].Name)!=0))
     break;
    
     system("cls");
     std::cout << "Sem nomes iguais cara!\n\n";
     system("pause");
    }
    
    while(1){

        system("cls");
        printf("              Player three              \n");
    printf("===========================================\n");
    printf("*** Digite o nome do terceiro jogador  ***\n");
    printf("===========================================\n");
    std::cin >> Players[3].Name;

     if((Players[3].Name.compare(Players[0].Name)!=0) && (Players[3].Name.compare(Players[1].Name)!=0) && (Players[3].Name.compare(Players[2].Name)!=0))
     break;

     system("cls");
     std::cout << "Sem nomes iguais cara!\n\n";
     system("pause");

    }

    while(1){

        system("cls");
        printf("              Player four              \n");
    printf("===========================================\n");
    printf("****  Digite o nome do quarto jogador  ****\n");
    printf("===========================================\n");
    std::cin >> Players[4].Name;

     if((Players[4].Name.compare(Players[0].Name)!=0) && (Players[4].Name.compare(Players[1].Name)!=0) && (Players[4].Name.compare(Players[2].Name)!=0 && Players[4].Name.compare(Players[3].Name)!=0))
     break;

     system("cls");
     std::cout << "Sem nomes iguais cara!\n\n";
     system("pause");
    }
}
