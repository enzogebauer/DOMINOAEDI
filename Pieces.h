void PickPieces(){
    system ("cls");
    printf("Pecas");
    printf("===============================================");
    printf("\n");
    printf("                    Escolha das PECAS\n");
    printf("\nESCOLHA OS CARACTERES DAS PECAS DO SEU DOMINO!\n");
    printf("\nESCOLHA OS CARACTERES QUE IRA REPRESENTAR A PECA 0\n");
    std::cin >> Pecas[0];
    printf("===============================================");
    while(1){
        system("cls");
        printf("\n                    Escolha das PECAS                   \n");
        printf("\nESCOLHA OS CARACTERES DAS PECAS DO SEU DOMINO!\n");
        printf("\nESCOLHA OS CARACTERES QUE IRA REPRESENTAR A PECA 1\n");
        std::cin >> Pecas[1];
        printf("===============================================");
        if(Pecas[0]!=Pecas[1])
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
        std::cin >> Pecas[2];
        printf("\n===============================================\n");
        if(Pecas[2]!=Pecas[1] && Pecas[2]!=Pecas[0]);
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
        std::cin >> Pecas[3];
        printf("===============================================");
        if(Pecas[3]!=Pecas[2] && Pecas[3]!=Pecas[0] && Pecas[3]!=Pecas[1]);
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
        std::cin >> Pecas[4];
        printf("\n===============================================\n");
        if(Pecas[4]!=Pecas[3] && Pecas[4]!=Pecas[2] && Pecas[3]!=Pecas[1] && Pecas[3]!=Pecas[0]);
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
        std::cin >> Pecas[5];
        printf("\n===============================================\n");
        if(Pecas[5]!=Pecas[4] && Pecas[5]!=Pecas[3] && Pecas[5]!=Pecas[2] && Pecas[5]!=Pecas[1] && Pecas[5]!=Pecas[0]);
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
        std::cin >> Pecas[5];
        printf("\n===============================================\n");
        if(Pecas[6]!=Pecas[5] && Pecas[6]!=Pecas[4] && Pecas[6]!=Pecas[3] && Pecas[6]!=Pecas[2] && Pecas[6]!=Pecas[1] && Pecas[6]!=Pecas[0]);
        break;
        system("cls");
        printf("\nAs pecas precisam ser diferentes pra diferencia-las!\n");
        printf("\n===============================================\n");
    }
    

}

