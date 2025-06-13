/******************************************************************************
Sistema de cadastro de clientes
SCG possibilita cadastro, listagem, pesquisa, edição e exclusão.
Código separado em 3 arquivos,  main, funções e structs.
CRUD completo.
Create em cadastro e dados iniciais.
Retrieve em listagem.
Utilize em pesquisa e edição.
Delete em deletar.
Aluna Isadora Theobaldo Moreira
*******************************************************************************/
#include <stdio.h>
#include "Funcoes.h" //chamando meu arquivo de funC'C5es

void main() {

	anexarDados();
	int opcao;
	printf("\nSistema de Cadastro de Games - SCG %.1f\n", VERSAO);

	do {
		opcao = menu();
		switch(opcao) { //switch para verificar o nC:mero escolhido pelo usuario
		case 1:
			cadastrarGames();
			break;
		case 2:
			listarGames();
			break;
		case 3:
			pesquisarGames(); //cada funC'C#o chamada por 1 nC:mero diferente
			break;
		case 4:
			editarGames();
			break;
		case 5:
			excluirGames();
			break;
		case 0:
			printf("\nAgradecemos o Acesso ao SCG! \n\n");
			break;
		default:
			printf("\nOpC'C#o indisponivel! \n");
		}
	} while(opcao != 0);//quando 0 for escolhido, programa encerra e imprime mensagem da linha 30
}
