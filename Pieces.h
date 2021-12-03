void PickPieces(){
    system ("cls");
    printf("Pecas");
    printf("===============================================");
    printf("\n");
    printf("                    Escolha das PECAS\n");
    printf("\nESCOLHA OS CARACTERES DAS PECAS DO SEU DOMINO!\n");
    printf("\nESCOLHA OS CARACTERES QUE IRA REPRESENTAR A PECA 0\n");
    std::cin >> Pieces[0];
    printf("===============================================");
    while(1){
        system("cls");
        printf("\n                    Escolha das PECAS                   \n");
        printf("\nESCOLHA OS CARACTERES DAS PECAS DO SEU DOMINO!\n");
        printf("\nESCOLHA OS CARACTERES QUE IRA REPRESENTAR A PECA 1\n");
        std::cin >> Pieces[1];
        printf("===============================================");
        if(Pieces[0]!=Pieces[1])
        break;
        else fflush(stdin);
        system("cls");
        printf("\nAs pecas precisam ser diferentes pra diferencia-las!\n");
        printf("\n===============================================\n");
    }
    while(1){
        system("cls");
        printf("\n                    Escolha das PECAS                   \n");
        printf("\nESCOLHA OS CARACTERES DAS PECAS DO SEU DOMINO!\n");
        printf("\nESCOLHA OS CARACTERES QUE IRA REPRESENTAR A PECA 2\n");
        std::cin >> Pieces[2];
        printf("\n===============================================\n");
        if(Pieces[2]!=Pieces[1] && Pieces[2]!=Pieces[0]);
        break;
        system("cls");
        printf("\nAs pecas precisam ser diferentes pra diferencia-las!\n");
        printf("\n===============================================\n");
    }
    while(1){
        system("cls");
        printf("\n                    Escolha das PECAS                   \n");
        printf("\nESCOLHA OS CARACTERES DAS PECAS DO SEU DOMINO!\n");
        printf("\nESCOLHA OS CARACTERES QUE IRA REPRESENTAR A PECA 3\n");
        std::cin >> Pieces[3];
        printf("===============================================");
        if(Pieces[3]!=Pieces[2] && Pieces[3]!=Pieces[0] && Pieces[3]!=Pieces[1]);
        break;
        system("cls");
        printf("\nAs pecas precisam ser diferentes pra diferencia-las!\n");
        printf("\n===============================================\n");
    }
    while(1){
        system("cls");
        printf("\n                    Escolha das PECAS                   \n");
        printf("\nESCOLHA OS CARACTERES DAS PECAS DO SEU DOMINO!\n");
        printf("\nESCOLHA OS CARACTERES QUE IRA REPRESENTAR A PECA 4\n");
        std::cin >> Pieces[4];
        printf("\n===============================================\n");
        if(Pieces[4]!=Pieces[3] && Pieces[4]!=Pieces[2] && Pieces[3]!=Pieces[1] && Pieces[3]!=Pieces[0]);
        break;
        system("cls");
        printf("\nAs pecas precisam ser diferentes pra diferencia-las!\n");
        printf("\n===============================================\n");
    }
    while(1){
        system("cls");
        printf("\n                    Escolha das PECAS                   \n");
        printf("\nESCOLHA OS CARACTERES DAS PECAS DO SEU DOMINO!\n");
        printf("\nESCOLHA OS CARACTERES QUE IRA REPRESENTAR A PECA 5\n");
        std::cin >> Pieces[5];
        printf("\n===============================================\n");
        if(Pieces[5]!=Pieces[4] && Pieces[5]!=Pieces[3] && Pieces[5]!=Pieces[2] && Pieces[5]!=Pieces[1] && Pieces[5]!=Pieces[0]);
        break;
        system("cls");
        printf("\nAs pecas precisam ser diferentes pra diferencia-las!\n");
        printf("\n===============================================\n");
    }
    while(1){
        system("cls");
        printf("\n                    Escolha das PECAS                   \n");
        printf("\nESCOLHA OS CARACTERES DAS PECAS DO SEU DOMINO!");
        printf("\nESCOLHA OS CARACTERES QUE IRA REPRESENTAR A PECA 6\n");
        std::cin >> Pieces[5];
        printf("\n===============================================\n");
        if(Pieces[6]!=Pieces[5] && Pieces[6]!=Pieces[4] && Pieces[6]!=Pieces[3] && Pieces[6]!=Pieces[2] && Pieces[6]!=Pieces[1] && Pieces[6]!=Pieces[0]);
        break;
        system("cls");
        printf("\nAs pecas precisam ser diferentes pra diferencia-las!\n");
        printf("\n===============================================\n");
    }
    

}

