#include <iostream>

using namespace std;

int login, Doador, Recebedor, escolha;
string reiniciar;
float pontosusuario1 = 10000, pontosusuario2 = 5700, pontosusuario3 = 7230, taxa = 0.025, pontosdoador, pontosrecebedor, pontos, taxas;

int CustosProducao()
{
    cout << "O projeto Organic Cycle, para existir necessita de o tempo de um progamador junior para desenvolver " << endl << "e depois o custo para manter o servidor funcionando : ";
    cout << endl << "Segundo estimativas dos sites e aplicacoes O salario medio de desenvolvedor junior em Brasil e de RS36.000 anuais  ou RS18,46 por hora. " << endl;
    cout << "E a estimativa de tempo de producao eh de 280 horas: [Se deseja ver com mais detalhes sobre o tempo de desenvolvimento digite [1] se nao digite [0] para seguir em frente]" << endl;
    cin >> escolha;

    if (escolha == 1)
    {
#pragma region // Tempo 

        cout << "1. Configuracao Inicial e Planejamento" << endl;
        cout << "Configuracao do ambiente de desenvolvimento: 10-20 horas" << endl;
        cout << "Planejamento e analise de requisitos: 20-30 horas" << endl;

        cout << "2. Desenvolvimento da Geolocalizacao" << endl;
        cout << "Implementacao basica de geolocalizacao: 30-50 horas" << endl;
        cout << "Testes e refinamentos da geolocalizacao: 20-30 horas" << endl;

        cout << "3. Desenvolvimento da Interface de Usuario " << endl;
        cout << "Criacao de telas principais (login, cadastro, mapa, perfil de usuário): 40-60 horas" << endl;
        cout << "Navegacao entre telas e integracao basica: 20-30 horas" << endl;

        cout << "4. Desenvolvimento do Sistema de Pontuacao" << endl;
        cout << "Implementacao do sistema de pontos: 30-40 horas" << endl;
        cout << "Transferencia de pontos entre usuarios: 20-30 horas" << endl;

        cout << "5. Integracao de Sistema de Pagamento" << endl;
        cout << "Integracao com uma API de pagamento (ex: Stripe): 30-50 horas" << endl;
        cout << "Implementacao de logica de cobranca e pagamento: 20-30 horas" << endl;

        cout << "6. Testes e Garantia de Qualidade" << endl;
        cout << "Testes unitarios e de integracao: 30-40 horas" << endl;
        cout << "Correcao de bugs e refinamentos: 20-30 horas" << endl;

        cout << "7. Revisoes e Documentacao" << endl;
        cout << "Documentacao do codigo e do sistema: 20-30 horas" << endl;
        cout << "Revisoes e ajustes finais: 20-30 horas" << endl;

        cout << "Estimativa Total em Horas" << endl;
        cout << "Somando essas estimativas, temos uma faixa total aproximada:" << endl;
        cout << "Minimo: 280 horas" << endl;
        cout << "Maximo: 410 horas" << endl;

#pragma endregion
    }

    if (escolha == 0)
    {
    }

    cout << endl << "Como estamos calculando o MVP do nosso produto usaremos o tempo minimo 280 horas, com a media da hora do dev junior : " << 18.46 * 280 << " RS " << endl;
    cout << "E como tambem tem os custos pra manter por mes com a media dos servidores (Por Exemplo : EC2 t3.micro,RDS db.t3.micro e S3 Storage ) " << endl << " Resumo dos Custos : " << endl;
    cout << "Custo por hora: RS 0.181 " << endl << "Custo diario: RS 4.344" << endl << "Custo mensal: RS 130.32" << endl << endl;

    cout << "Entao fazendo o valor MVP vamos cogitar um mes de funcionamento RS130.32 + a producao : Custo do Dev 18,46 a hora por 280h minimo = " << 18.46 * 280 << " RS " << endl;
    cout << "Entao em resumo ficamos com : [Aperte qualquer tecla para ver o holerite do MVP]" << endl;

    system("pause");
    system("cls");



#pragma region // Holerite MVP

    cout << "Transacao aprovada. " << endl;

    cout << endl << "_________________________________________________________________________________________________";
    cout << endl << "|                                                                                   EXTRATO MVP  ";
    cout << endl << "|  Minimum Viable Product                                                                        ";
    cout << endl << "|________________________________________________________________________________________________";


    cout << endl << "|          Informacoes              |  Referencia  |          Tempo         |   Valor            ";
    cout << endl << "|                                   |              |                        |                    ";
    cout << endl << "|Progamador Junior                  | RS18,46 Hora | 280 Horas de Producao  |   RS" << 18.46 * 280;
    cout << endl << "|Servidores                         | RS0.181 Hora | 1 Mes de Funcionamento |   RS130.32         ";
    cout << endl << "|___________________________________|______________|________________________|____________________";
    cout << endl << "|                                                  |                      TOTAL                  ";
    cout << endl << "|                                                  |                 RS" << 130.32 + (18.46 * 280);
    cout << endl << "|__________________________________________________|_____________________________________________";

#pragma endregion

    return 0;
}

int TransacaoInterna()
{
#pragma region // Selecionar pontos

    cout << endl << "Usuarios Cadastrados: ";
    cout << endl << "[1] Usuario 1 com : " << pontosusuario1 << " pontos;";
    cout << endl << "[2] Usuario 2 com : " << pontosusuario2 << " pontos;";
    cout << endl << "[3] Usuario 3 com : " << pontosusuario3 << " pontos;";
    cout << endl << "Selecio qual seram os usuarios da transacao respectivamente Doador e Recebedor separdo por um espaco : ";
    cout << endl << "EX : [1 2] ou [3 1] :" << endl;
    cin >> Doador >> Recebedor;

    float pontosinicialD, pontosinicialR;


    if (Doador == 1)
    {
        pontosdoador = pontosusuario1;
        pontosinicialD = pontosusuario1;
    }
    if (Doador == 2)
    {
        pontosdoador = pontosusuario2;
        pontosinicialD = pontosusuario2;
    }
    if (Doador == 3)
    {
        pontosdoador = pontosusuario3;
        pontosinicialD = pontosusuario3;
    }
    if (Recebedor == 1)
    {
        pontosrecebedor = pontosusuario1;
        pontosinicialR = pontosusuario1;
    }
    if (Recebedor == 2)
    {
        pontosrecebedor = pontosusuario2;
        pontosinicialR = pontosusuario2;
    }
    if (Recebedor == 3)
    {
        pontosrecebedor = pontosusuario3;
        pontosinicialR = pontosusuario3;
    }
    if (Doador != 1 && Doador != 2 && Doador != 3 || Recebedor != 1 && Recebedor != 2 && Recebedor != 3)
    {
        cout << "Usuario Incorreto" << endl;
        system("pause");
        return TransacaoInterna();
    }


    system("cls");
    cout << "Pontos Selecionados : " << endl << "Doador eh o usuario " << Doador << " Com " << pontosdoador << " Pontos e" << endl;
    cout << "Recedor eh o usuario " << Recebedor << " Com " << pontosrecebedor << " Pontos :" << endl << "Agora digite quanto o recebedor ";
    cout << "quer pagar pela quantidade que o doador esta disposto a vender : " << endl << "EX : [ 1576 Pontos == RS 15,76 ou ";
    cout << "3250 == RS 32,50 ]" << endl;
    cin >> pontos;

#pragma endregion

#pragma region // Calculos


    taxas = taxa * pontos;


    if (pontosdoador >= pontos + taxas)
    {
        pontosdoador -= pontos + taxas;
        pontosrecebedor += pontos - taxas;
        system("cls");
    }


    if (pontosdoador < pontos + taxas)
    {
        cout << endl << "Erro : Fundos Insuficientes " << endl << "Deseja reiniciar o calculo se sim digite [S] se nao digite [N] :" << endl;
        cin >> reiniciar;


        if (reiniciar == "s" || reiniciar == "S")
        {
            system("cls");
            return TransacaoInterna();
        }
        else {
            return 0;
        }
    }


#pragma endregion

#pragma region // Holerite Transacao

    cout << "Transacao aprovada. " << endl;

    cout << endl << "_________________________________________________________________________________________________";
    cout << endl << "| Usuario                                                                EXTRATO TRANSFERENCIA   ";
    cout << endl << "|                                                                          TRANSACAO APROVADA    ";
    cout << endl << "| Doador : Usuario " << Doador;
    cout << endl << "| Recebedor : Usuario " << Recebedor;
    cout << endl << "|________________________________________________________________________________________________";


    cout << endl << "|          DADOS/PONTOS ANTES       |  Referencia  |   Pontos Depois  | RS Transferidos";
    cout << endl << "|                                   |              |                  | ";
    cout << endl << "|Doador : " << pontosinicialD << "                      | " << pontos << " Pontos  |  " << pontosdoador << " Pontos     | - RS" << pontos / 100;
    cout << endl << "|Recebedor : " << pontosinicialR << "                   |              |  " << pontosrecebedor << " Pontos     | + RS" << pontos / 100;
    cout << endl << "|Taxas : 5% ou 2.5% de cada         |   " << taxas << " de cada |    " << taxas * 2 << " Pontos     | ";
    cout << endl << "|___________________________________|______________|__________________|__________________________";
    cout << endl << "|                                                  | Valor Doador     | Valor Recebedor ";
    cout << endl << "|                                                  |  RS" << pontosdoador / 100 << "         | RS" << pontosrecebedor / 100;
    cout << endl << "|                                                  |---------------------------------------------";
    cout << endl << "|                                                  | Valor Liquido Para a Empresa => RS" << (taxas * 2) / 100;
    cout << endl << "|__________________________________________________|_____________________________________________";


#pragma endregion

    return 0;

}


int main()
{

#pragma region // Pagina Inicial


    for (int i = 0; i <= 119; i++) { cout << "-"; } cout << endl << "| "; for (int i = 0; i <= 115; i++) { cout << " "; } cout << " |" << endl;
    cout << "|        ...............................  ..   .                               ..............................          |" << endl;
    cout << "|        ............................                                                ........................          |" << endl;
    cout << "|        .........................                        ~!:                           .....................          |" << endl;
    cout << "|        ....................                           :YB#G7                             ..................          |" << endl;
    cout << "|        .................. . .                        .5#BBB#7                           .   ...............          |" << endl;
    cout << "|        ...............                               :BBGYBB5                                 .............          |" << endl;
    cout << "|        ........... ..             ^^^:.         7YJJ?^:J.~BJ:!?JJJ:         .:^~:                 .........          |" << endl;
    cout << "|        ............              .?YJJ?7:       .7JJ7?~ !G?.???J?~        ^7?JJY!                 . .......          |" << endl;
    cout << "|        .... ..   .                ^?JJ??J^ .!:    :^^.: ?G..::^:.    ~:  !Y??JJ7.                 . .......          |" << endl;
    cout << "|        ....... .                   .!?J~7?  ..    .:^~!!?Y7!!~^:.    .. :Y~7J7~.                     ......          |" << endl;
    cout << "|        ...... .              ^~~:     :.:J.   .^!?JJJJJJJJJJJJJJJ?!^.   ~? :.    .^!!:                 ....          |" << endl;
    cout << "|        ..... .                :!7..::.   .  ^7?JJJJJJJJJJJJJJJJJJJJJYJ^ ..   ::: ~?~.                    ..          |" << endl;
    cout << "|        ... ..                   . ^~^!.   :7JJJJJJJ?7~^^:::^~!7JJJJJYBBY:   :7^7:..                       .          |" << endl;
    cout << "|        ... .              .~~.     ::.   ~JJJJJJ?~:.           .~?YYJPB#G!   :::     :!:                             |" << endl;
    cout << "|        .. .               .~~..7~  ..   !JJJJJ?~.                 ^J55BBBB7   .. .7~ :!:                             |" << endl;
    cout << "|        . .                     :. ^?!  ~JJJJJ?:                     ?GBBBBB~ :??: :.                      .          |" << endl;
    cout << "|         .              .YPPP5Y7^   .. .?JJ?JJ:                       J#BBB#P. ..   ^?Y5PPP?                          |" << endl;
    cout << "|         .               5#B#BBBBP~    ^J7!JP!                        :BBBBBB^    !P#BGB#B#?                          |" << endl;
    cout << "|        ..               :P##BGYJG#? .:~7JP#B5?~.                     .GBBBBB~   Y#P?YGB#BJ.                          |" << endl;
    cout << "|         .                .?G##P7:5#^.!5B##BBY^.                      ^BBBBBB:  7#J.?G#BP!                            |" << endl;
    cout << "|                            .!?J?^ JY  .?JY5JJ^                      .5#BBB#Y  :P7 ~?J?~.                             |" << endl;
    cout << "|                                :!^ ^.  7G555YJ~                    :5#BBB#G:  :^.~~.                                 |" << endl;
    cout << "|                                !#B7     ?B#BBBBY~                .7G#BBB#G^     5#G:                                 |" << endl;
    cout << "|                                .5#B!     ~G#BBB#BP?~.         :~JG##BB##5:    .Y#B7                                  |" << endl;
    cout << "|                                 .5#B7     .?G##BBB#BGPYJJ?JJ5PB###BB##P!     :5#B?                                   |" << endl;
    cout << "|                                  .J##Y^     .75B###BB##############GY~      !G#G!                                    |" << endl;
    cout << "|                                    !P#BJ:      :!J5GBB#######BBP5?~.      ~5##Y:                                     |" << endl;
    cout << "|                                     .7G#BY!.       .:^~!!!!!~^:.       :7P##5~                                       |" << endl;
    cout << "|                                       .!5B#GY7^.                   .^75B#GJ^                                         |" << endl;
    cout << "|                                          :7YG##G5J7!^::.....::^!7JPG#BGJ~.                                .          |" << endl;
    cout << "|                                             .^7J5GBBBBBBBGBBBBBBBP5?!:.                                   .          |" << endl;
    cout << "|                                                   .:^~!7777!!~^:.                                        ..          |" << endl;
    cout << "|        .          .:^^:.      ..::::.          ::::.          .        ..      ...   .:.      .:^^:.      .          |" << endl;
    cout << "|        ..      .75GBBBBGY~   .PBGBBBBPJ^    ^JGBBBBBP7.     :PBP^     ^GB5^    JBG^  YBP:   !YGBBBBGY^    .          |" << endl;
    cout << "|        ...    :P#B?~^^!5#BJ. :G#G~^^7G#B^  ?B#5!^:~?Y!     .P###P:    ^BB#BJ:  Y#B~  5#B: .Y##Y~^^!YJ^    .          |" << endl;
    cout << "|        ...    Y#B~      Y##! :G#P.  .Y##! ~##5   ~!!!!:   .5#G7G#P.   ^B#PP#G?.J#B~  5#B: 7##?           ..          |" << endl;
    cout << "|        ....   J#B7     .5#B~ :GBBGGGGBP7  ^B#P.  J5P##7  .5##575##5.  ^B#J.?G#PPBB~  5#B: !##J     ..  ....          |" << endl;
    cout << "|        ...... :YB#57!!?G#B7  :B#G~~Y##J    7G#GJ7!75##7 .Y#B55P55B#Y. ^B#Y  :JB#BB~  5#B: .JB#P?!7JPP~  ...          |" << endl;
    cout << "|        .......  ~JPGGGG57:   .5GY   7PG7    :75PGGG5J7. ~GG7     7GG! :PG?    ^YGP^  JGP:   ^?5GGGPY7: ....          |" << endl;
    cout << "|        ........    ....       ..     ...        ...               ..            ..    ..       ....   .....          |" << endl;
    cout << "|        ..........                         :~~:  ^^  ^:  :~~^. .^.    ^~^^.                          .......          |" << endl;
    cout << "|        ........                  .::.    J5777. ^PJYY: 7P7!?: !B:   .BPJ?.    :^:.                 ........          |" << endl;
    cout << "|        ......... .               ~JJ^    5P^^~.  :B5   JG^^!. 7#!^: .BPJ7.    7J?.               ..........          |" << endl;
    cout << "|        .............                     .!?7!.   7~   .~77!. ^?77! .7777:                 .   ............          |" << endl;
    cout << "|        .................                                                              ... .................          |" << endl;
    cout << "|        ...................                                                          .. ....................          |" << endl;
    for (int i = 0; i <= 119; i++) { cout << "-"; }cout << endl; for (int i = 0; i <= 52; i++) { cout << " "; } cout << "----------";
    cout << endl; for (int i = 0; i <= 52; i++) { cout << " "; } cout << "| ENTRAR |" << endl; for (int i = 0; i <= 52; i++) { cout << " "; }
    cout << "----------" << endl << endl << endl;
    system("pause");
    system("cls");


#pragma endregion

#pragma region // Menu

    cout << "Selecione qual calculo deseja ver : " << endl << "[1] Para ver o custo minimo de producao para o produto : " << endl << "[2] O lucro Interno por transacao dentro do produto : " << endl;
    cin >> escolha;

    if (escolha == 1)
    {
        system("cls");
        CustosProducao();
    }
    if (escolha == 2)
    {
        system("cls");
        TransacaoInterna();
    }
    if (escolha != 0 && escolha != 1 && escolha != 2)
    {
        cout << "Escolha Incorreta" << endl;
        system("pause");
        system("cls");
        return main();
    }

#pragma endregion

#pragma region // Volta ao Menu

    cout << endl << "Deseja voltar ao menu se sim digite [S] se nao digite [N] :" << endl;
    cin >> reiniciar;


    if (reiniciar == "s" || reiniciar == "S")
    {
        system("cls");
        return main();
    }
#pragma endregion   


    return 0;
}

