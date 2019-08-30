#include "functions.c"
#include "functions.h"


int main()
{
	//ACENTUA��O PT-BR
	setlocale(LC_ALL, "Portuguese");        

	//OP��ES MENU
        int Control;
        while(Control!=9){
        printf("\n\n");
        printf("/**********************************************************/");
        printf("\n************************************************************\n");
        printf("\n---->\t[1]\t criar tabela\n");
        printf("---->\t[2] \t listar tabelas\n");
        printf("---->\t[3]\t inserir dados na tabela\n");
        printf("---->\t[4]\t mostrar uma tabela e seus elementos\n");
        printf("---->\t[5] \t pesquisar em uma tabela\n");
        printf("---->\t[6] \t remover linhas da tabela\n");
        printf("---->\t[7]\t deletar uma tabela\n\n");
        printf("\n---->\t[8] \t ver instru��es do programa");
        printf("\n---->\t[9] \t sair\n\n");
        printf("\n************************************************************\n");
        printf("/**********************************************************/");

        printf("\nOp��o:");
        scanf("%d",&Control);

        //CHAMAR FUN��ES DEPENDENDO DA OP��O DO MENU
        if(Control==1){
        system("cls");
        printf("Criar Tabelas...\n");
        struct tabela a;
        Criar_tab(&a);

        }else if(Control==2){
        system("cls");
        printf("Listar Tabelas...\n");
        struct tabela a;
        Lista_Tabelas(&a);

        }else if(Control==3){
        system("cls");
        printf("Inserir Linhas...\n");
        struct tabela a;
        Linhas_Tabelas(&a);

        }else if(Control==4){
        system("cls");
        printf("Exibir Tabelas...\n");
        struct tabela a;
        Mostrar_tabela(&a);

        }else if(Control==5){
        system("cls");
        printf("Pesquisar valor...\n");
        struct tabela a;
        Search(&a);

        }else if(Control==6){
        system("cls");
        printf("Apagar valor de uma tabela...\n");
        struct tabela a;
        Remover_linhas(&a);

        }else if(Control==7){
        system("cls");
        printf("Apagar Tabelas...\n");
        struct tabela a;
        Deletar(&a);

        }else if(Control==8){
        system("cls");
        printf("Instru��es...\n\n");
        printf("Dos nomes das tabelas:\n\n\n\n");
        printf("O nome de cada tabela � �nico\n\n");
        printf("O nome da tabela n�o deve conter espa�o ou caracteres com acentos\n\n");
        printf("Uma vez criada com certo nome, o mesmo n�o est� suscet�vel a altera��o\n\n\n\n\n");

        printf("Dos campos da tabela:\n\n\n\n");
        printf("Ao criar a tabela ser� pedido o n�mero de campos da tabela\n\n");
        printf("O n�mero de campos n�o � suscet�vel a altera��o\n\n");
        printf("Os nomes dos campos s�o de livre escolha ao usu�rio\n\n");
        printf("Os nomes de campos n�o devem conter espa�o ou caracteres com acentos\n\n");
        printf("Ap�s criado cada nome de campo, os mesmos n�o podem ser alterados\n\n\n\n\n");

        printf("Dos tipos de entrada para cada campo:\n\n\n\n");
        printf("Cada campo tem rela��o direta com um tipo de vari�vel\n\n");
        printf("Os tipos aceitos s�o: int, char, string, float e double\n\n");
        printf("O primeiro campo de cada tabela � alocado autom�ticamente como int\n\n");
        printf("Pois se trata da chave prim�ria\n\n");
        printf("Os demais devem ser inseridos pelo usu�rio\n\n");
        printf("E n�o podem ser mudados posteriormente\n\n\n\n\n");

        printf("Dos elementos inseridos na tabela:\n\n\n\n");
        printf("Cada elemento s� poder� ser inserido mediante aceita��o da chave prim�ria\n\n");
        printf("A chave prim�ria � composta por um n�mero inteiro\n\n");
        printf("Esse n�mero � �nico para cada elemento da tabela espec�ficada\n\n");
        printf("Chaves prim�rias podem ser iguais se estiverem em tabelas diferentes\n\n");
        printf("Os elementos n�o devem conter espa�os ou caracteres com acentos\n\n");
        printf("Ap�s inserido o elemento na tabela, o mesmo n�o pode ser alterado\n\n");

        }else{
        system("cls");
        system("exit");
        break;

        }

        }//fim while





    return 0;

}//FIM MAIN
