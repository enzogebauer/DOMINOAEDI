void PickNames(){
    using namespace std;
    system("cls");
    cout<< "                 Player one                \n";
    cout<< "===========================================\n";
    cout<< "******* Digite o nome do primeiro jogador *******\n";
    cout<< "===========================================\n";
    cin >> Players[0].Name;
    while(1){
    system("cls");
    cout<< "              Player two              \n";
    cout<< "===========================================\n";
    cout<< "******* Digite o nome do segundo jogador *******\n";
    cout<< "===========================================\n";
    cin >> Players[1].Name;
     if((Players[1].Name.compare(Players[0].Name)!=0))
     break;
    
     system("cls");
     cout << "Sem nomes iguais cara!\n\n";
     system("pause");
    }
    
    while(1){

        system("cls");
        cout<< "              Player three              \n";
    cout<< "===========================================\n";
    cout<< "*** Digite o nome do terceiro jogador  ***\n";
    cout<< "===========================================\n";
    cin >> Players[3].Name;

     if((Players[3].Name.compare(Players[0].Name)!=0) && (Players[3].Name.compare(Players[1].Name)!=0) && (Players[3].Name.compare(Players[2].Name)!=0))
     break;

     system("cls");
     cout << "Sem nomes iguais cara!\n\n";
     system("pause");

    }

    while(1){

        system("cls");
        cout<<"              Player four              \n";
    cout<< "===========================================\n";
    cout<< "****  Digite o nome do quarto jogador  ****\n";
    cout<< "===========================================\n";
    cin >> Players[4].Name;

     if((Players[4].Name.compare(Players[0].Name)!=0) && (Players[4].Name.compare(Players[1].Name)!=0) && (Players[4].Name.compare(Players[2].Name)!=0 && Players[4].Name.compare(Players[3].Name)!=0))
     break;

     system("cls");
     cout << "Sem nomes iguais cara!\n\n";
     system("pause");
    }
}
