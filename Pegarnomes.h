void Pegarnomes(){
    fflush(stdin);
    system("cls");
    printf("              Nome Do Jogador              \n");
    printf("===========================================\n");
    printf("******* Digite o Nome do primeiro jogador *******\n");
    std::cin>> jogadores[0].name;
    while(1){
    fflush(stdin);
    system("cls");
    printf("              Nome Do Jogador              \n");
    printf("===========================================\n");
    printf("******* Digite o Nome do segundo jogador *******\n");
     std::cin>> jogadores[1].name;
     if((Jogadores[1].nome.compare(jogadores[0].nome)!=0))
     break;
     fflush(stdin);
     system("cls");
     std::cout << "Sem nomes iguais cara!\n\n";
     system("pause");
    }
    
    while(1){
        fflush(stdin);
        system("cls");
        printf("              Nome Do Jogador              \n");
    printf("===========================================\n");
    printf("*** Digite o Nome do terceiro jogador  ***\n");
    std::cin>> jogadores[3].nome;

     if((jogadores[3].nome.compare(jogadores[0].nome)!=0) && (jogadores[3].nome.compare(jogadores[1].nome)!=0) && (jogadores[3].nome.compare(jogadores[2].nome)!=0))
     break;
     fflush(stdin);
     system("cls");
     std::cout << "Sem nomes iguais cara!\n\n";
     system("pause");

    }

    while(1){
        fflush(stdin);
        system("cls");
        printf("              Nome Do Jogador              \n");
    printf("===========================================\n");
    printf("****  Digite o Nome do quarto jogador  ****\n");
    std::cin>> jogadores[4].nome;

     if((jogadores[4].nome.compare(jogadores[0].nome)!=0) && (jogadores[4].nome.compare(jogadores[1].nome)!=0) && (jogadores[4].nome.compare(jogadores[2].nome)!=0 && jogadores[4].nome.compare(jogadores[3].nome)!=0))
     break;
     fflush(stdin);
     system("cls");
     std::cout << "Sem nomes iguais cara!\n\n";
     system("pause");
}
fflush(stdin);