void PickNames(){
    system("cls");
    printf("              Player one              \n");
    printf("===========================================\n");
    printf("******* Digite o nome do primeiro jogador *******\n");
    printf("===========================================\n");
    std::cin >> jogadores[0].name;
    while(1){
    system("cls");
    printf("              Player two              \n");
    printf("===========================================\n");
    printf("******* Digite o nome do segundo jogador *******\n");
    printf("===========================================\n");
    std::cin >> jogadores[1].name;
     if((jogadores[1].name.compare(jogadores[0].name)!=0))
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
    std::cin >> jogadores[3].name;

     if((jogadores[3].name.compare(jogadores[0].name)!=0) && (jogadores[3].name.compare(jogadores[1].name)!=0) && (jogadores[3].name.compare(jogadores[2].name)!=0))
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
    std::cin >> jogadores[4].name;

     if((jogadores[4].name.compare(jogadores[0].name)!=0) && (jogadores[4].name.compare(jogadores[1].name)!=0) && (jogadores[4].name.compare(jogadores[2].name)!=0 && jogadores[4].name.compare(jogadores[3].name)!=0))
     break;

     system("cls");
     std::cout << "Sem nomes iguais cara!\n\n";
     system("pause");
    }
}
