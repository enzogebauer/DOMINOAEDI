void PickPieces(){
    system ("cls");
    printf("Pecas");
    printf("===============================================");
    printf("\n");
    printf("                    Escolha das PECAS")
    printf("ESCOLHA OS CARACTERES DAS PECAS DO SEU DOMINO!");
    printf("ESCOLHA OS CARACTERES QUE IRA REPRESENTAR A PECA 0");
    std::cin >> Peca[0];
    printf("===============================================");
    while(1){
    system("cls");
    printf("                    Escolha das PECAS                   ")
    printf("ESCOLHA OS CARACTERES DAS PECAS DO SEU DOMINO!");
    printf("ESCOLHA OS CARACTERES QUE IRA REPRESENTAR A PECA 1");
    std::cin >> Peca[1];
    printf("===============================================");
    if(Peca[0]!=Peca[1])
    break;
    else fflush(stdin);
    system("cls");
    printf("As pecas precisam ser diferentes pra diferencia-las!");
    printf("===============================================");
    }
    while(1){
    system("cls");
    printf("                    Escolha das PECAS                   ")
    printf("ESCOLHA OS CARACTERES DAS PECAS DO SEU DOMINO!");
    printf("ESCOLHA OS CARACTERES QUE IRA REPRESENTAR A PECA 2");
    std::cin >> Peca[2];
    printf("===============================================");
    if(Peca[2]!=Peca[1] && Peca[2]!=Peca[0]);
    break;
    else fflush(stdin);
    system("cls");
    printf("As pecas precisam ser diferentes pra diferencia-las!");
    printf("===============================================");
    }
    while(1){
    system("cls");
    printf("                    Escolha das PECAS                   ")
    printf("ESCOLHA OS CARACTERES DAS PECAS DO SEU DOMINO!");
    printf("ESCOLHA OS CARACTERES QUE IRA REPRESENTAR A PECA 3");
    std::cin >> Peca[3];
    printf("===============================================");
    if(Peca[3]!=Peca[2] && Peca[3]!=Peca[0] && Peca[3]!=Peca[1]);
    break;
    else fflush(stdin);
    system("cls");
    printf("As pecas precisam ser diferentes pra diferencia-las!");
    printf("===============================================");
    }
    while(1){
        system("cls");
    printf("                    Escolha das PECAS                   ")
    printf("ESCOLHA OS CARACTERES DAS PECAS DO SEU DOMINO!");
    printf("ESCOLHA OS CARACTERES QUE IRA REPRESENTAR A PECA 4");
    std::cin >> Peca[4];
    printf("===============================================");
    if(Peca[4]!=Peca[3] && Peca[4]!=Peca[2] && Peca[3]!=Peca[1] && Peca[3]!=Peca[0]);
    break;
    else fflush(stdin);
    system("cls");
    printf("As pecas precisam ser diferentes pra diferencia-las!");
    printf("===============================================");
    }
    while (1){
    printf("                    Escolha das PECAS                   ")
    printf("ESCOLHA OS CARACTERES DAS PECAS DO SEU DOMINO!");
    printf("ESCOLHA OS CARACTERES QUE IRA REPRESENTAR A PECA 5");
    std::cin >> Peca[5];
    printf("===============================================");
    if(Peca[5]!=Peca[4] && Peca[5]!=Peca[3] && Peca[5]!=Peca[2] && Peca[5]!=Peca[1] && Peca[5]!=Peca[0]);
    break;
    else fflush(stdin);
    system("cls");
    printf("As pecas precisam ser diferentes pra diferencia-las!");
    printf("===============================================");
    }
    while(1){
    printf("                    Escolha das PECAS                   ")
    printf("ESCOLHA OS CARACTERES DAS PECAS DO SEU DOMINO!");
    printf("ESCOLHA OS CARACTERES QUE IRA REPRESENTAR A PECA 6");
    std::cin >> Peca[5];
    printf("===============================================");
    if(Peca[6]!=Peca[5] && Peca[6]!=Peca[4] && Peca[6]!=Peca[3] && Peca[6]!=Peca[2] && Peca[6]!=Peca[1] && Peca[6]!=Peca[0]);
    break;
    else fflush(stdin);
    system("cls");
    printf("As pecas precisam ser diferentes pra diferencia-las!");
    printf("===============================================");
    }
    

}

