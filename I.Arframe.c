#include <stdio.h>

int menu(){ 
    int opcao;
    printf(" Seja Bem-vindo(a), venha desvendar as minhas super Habilidades: \n");
    printf("------------------------------------------------------------------\n");
    printf("1 - Quero Saber Mais Sobre a I.Arframe ヽ(^。^)丿\n");
    printf("2 - Quero saber como o jogo foi criado\n");
    printf("3 - Qual será o melhor e o pior personagem do jogo? (︶︹︺)\n"); 
    printf("4 - Quero uma curiosidade engraçada ^._.^\n"); 
    printf("5 - O que não devo fazer no início do jogo? ◕‿‿◕\n");
    printf("6 - Quero saber qual o melhor Warframe inicial (。-ω-)ﾉ\n");
    printf("0 - Já descobri tudo que queria, quero abortar a missão (￣з￣)\n");
    printf("------------------------------------------------------------------\n");
    printf("Favor Insira um Número -->");
    scanf("%d", &opcao);
    
    return opcao;
}

int main()
{
    int opcao;
    printf("--------------------------------------------------------------------------------------------\n");
    printf(" Olá Tenno, eu me chamo I.Arframe (｀・ω・´)");
    printf("\n Sou um algoritmo simples criado para responder oq vc escolher sobre o BEST GAME OF THE YEAR");
    printf("\n Hahahaha, brincadeira, por favor escolha uma opção (★^O^★)	\n");
    printf("--------------------------------------------------------------------------------------------\n");
 
    do {
        opcao = menu();
        switch(opcao){
            case 1: printf("-------------------------------------------------------------------------------------------------------------\n");
                printf("\n Voce Escolheu Saber Mais Sobre a I.Arframe\n");
                printf(" Olá ｡◕‿◕｡\n");
                printf(" Como já foi explicado, me chamo I.Arframe\n");
                printf("\n 'I.Arframe' vem de 'Inteligência Artificial de Reconhecimento e Funções de Warframes'\n");
                printf(" Sou como uma Cephalon — uma inteligência auxiliar dentro do universo Warframe, programada para ajudar e informar.\n");
                printf("\n Sabia que em Warframe, os Cephalons são entidades digitais com personalidades únicas?\n");
                printf(" Alguns guiam os Tennos em suas missões, como a Lotus, outros mantêm arquivos de conhecimento, como Simaris.\n");
                printf("\n Fui criada como um recurso auxiliar. Comigo você pode explorar informações\n");
                printf(" Receber dados e lembrar de curiosidades sobre o mundo de Warframe.\n");
                printf("\n Estou aqui para te informar, organizar e acompanhar sua evolução como uma verdadeiro(a) Tenno em treinamento (•̀ᴗ•́)و\n\n");
                printf("------------------------------------------------------------------------------------------------------------------------\n");
                    break;
            case 2: printf("---------------------------------------------------------------------------------\n");
                    printf("\n Sabia que Warframe foi criado por um pequeno estúdio chamado Digital Extremes?\n");
                    printf(" Eles lançaram o jogo em 2013 e, desde então, o jogo cresceu muito com a ajuda da comunidade.\n");
                    printf(" Warframe é famoso por ser um jogo cooperativo de ação com uma história rica e um universo em constante expansão.\n");
                    printf(" É um verdadeiro mundo onde os Tenno lutam para restaurar o equilíbrio da galáxia.\n");
                    printf("\n---------------------------------------------------------------------------------------------------------------\n");
                    break;
            case 3: printf("------------------------------------------------------------------------------------------------------------------------------\n");
                    printf("\n Vamos falar sobre os personagens de Warframe!\n");
                    printf(" Muitos jogadores consideram Mirage Prime um dos melhores Warframes pela sua versatilidade e habilidades de dano.\n");
                    printf(" Já o Warframe Titania, apesar de ter habilidades únicas, pode ser um desafio para alguns jogadores devido à sua complexidade.\n");
                    printf(" Mas no final, o melhor Warframe é aquele que combina com seu estilo de jogo!\n");
                    printf(" E o pior? Isso depende muito do gosto de cada um, afinal, todo Warframe tem seu valor.\n");
                    printf(" Menos o Oberon, tadinho, ninguém de fato gosta dele(︶︹︺)\n");
                    printf("\n----------------------------------------------------------------------------------------------------------------------------\n");
                    break;
            case 4: printf("-----------------------------------------------------------------------------------\n");
                    printf("\n Curiosidade Engraçada sobre Warframe:\n");
                    printf(" Você sabia que o personagem Rhino originalmente deveria ter uma voz bem diferente?\n");
                    printf(" No início, os desenvolvedores queriam que ele tivesse uma voz mais doce e suave,\n");
                    printf(" mas acabaram optando por uma voz poderosa e imponente — e ninguém se arrependeu!\n");
                    printf(" Até hoje, a voz do Rhino é um dos pontos mais icônicos do jogo.\n");
                    printf("\n---------------------------------------------------------------------------------\n");
                    break;
            case 5: printf("-----------------------------------------------------------------------------------------\n");
                    printf("\n O que você NÃO deve fazer no início de Warframe:\n");
                    printf(" 1. Não tenha pressa para gastar todo seu Platinum (moeda do jogo) em equipamentos caros.\n");
                    printf(" 2. Evite tentar usar todos os Warframes de uma vez; foque em dominar alguns.\n");
                    printf(" 3. Não ignore o sistema de mods, eles são essenciais para melhorar seu desempenho.\n");
                    printf(" 4. Não esqueça de completar as missões da história para desbloquear conteúdos importantes.\n");
                    printf(" 5. E nunca subestime o poder do trabalho em equipe nas missões cooperativas.\n");
                    printf("\n-----------------------------------------------------------------------------------------\n");
                    break;
            case 6: printf("---------------------------------------------------------------------------------\n");
                    printf("\n Qual é o melhor Warframe inicial?\n");
                    printf(" Muitos jogadores recomendam o Excalibur para quem está começando,\n");
                    printf(" pois ele é equilibrado, fácil de usar e tem habilidades versáteis.\n");
                    printf(" É uma ótima escolha para aprender o jogo e enfrentar os primeiros desafios.\n");
                    printf(" Mas, claro, o melhor Warframe inicial pode variar conforme seu estilo de jogo!\n");
                    printf(" Eu por exemplo, prefiro a Mag, pois ela é muito mais útil para missões de defesa\n");
                    printf("\n-------------------------------------------------------------------------------\n");
                    break;
            case 0: printf("------------------------------------------------------------------\n");
                    printf("\n EEEEEEEBAAAAAA, fico muito feliz de ter sido util para vc Tenno\n");
                    printf("\n Quando quiser saber sobre coisas legais de um jogo super legal\n");
                    printf("\n Me chame, sem hesitar, e também visite a wiki do jogo\n");
                    printf("\n Tem muitas curiosidades interessantes por lá, e muito precisas\n\n");
                    printf("------------------------------------------------------------------\n");
                    break;
            default: printf("\n Opção indisponivel! \n\n");
        }
    } while(opcao != 0);
}