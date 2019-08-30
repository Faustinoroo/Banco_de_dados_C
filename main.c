#include "functions.c"
#include "functions.h"


int main()
{
	//ACENTUAÇÃO PT-BR
	setlocale(LC_ALL, "Portuguese");        

	//OPÇÕES MENU
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
        printf("\n---->\t[8] \t ver instruções do programa");
        printf("\n---->\t[9] \t sair\n\n");
        printf("\n************************************************************\n");
        printf("/**********************************************************/");

        printf("\nOpção:");
        scanf("%d",&Control);

        //CHAMAR FUNÇÕES DEPENDENDO DA OPÇÃO DO MENU
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
        printf("Instruções...\n\n");
        printf("Dos nomes das tabelas:\n\n\n\n");
        printf("O nome de cada tabela é único\n\n");
        printf("O nome da tabela não deve conter espaço ou caracteres com acentos\n\n");
        printf("Uma vez criada com certo nome, o mesmo não está suscetível a alteração\n\n\n\n\n");

        printf("Dos campos da tabela:\n\n\n\n");
        printf("Ao criar a tabela será pedido o número de campos da tabela\n\n");
        printf("O número de campos não é suscetível a alteração\n\n");
        printf("Os nomes dos campos são de livre escolha ao usuário\n\n");
        printf("Os nomes de campos não devem conter espaço ou caracteres com acentos\n\n");
        printf("Após criado cada nome de campo, os mesmos não podem ser alterados\n\n\n\n\n");

        printf("Dos tipos de entrada para cada campo:\n\n\n\n");
        printf("Cada campo tem relação direta com um tipo de variável\n\n");
        printf("Os tipos aceitos são: int, char, string, float e double\n\n");
        printf("O primeiro campo de cada tabela é alocado automáticamente como int\n\n");
        printf("Pois se trata da chave primária\n\n");
        printf("Os demais devem ser inseridos pelo usuário\n\n");
        printf("E não podem ser mudados posteriormente\n\n\n\n\n");

        printf("Dos elementos inseridos na tabela:\n\n\n\n");
        printf("Cada elemento só poderá ser inserido mediante aceitação da chave primária\n\n");
        printf("A chave primária é composta por um número inteiro\n\n");
        printf("Esse número é único para cada elemento da tabela específicada\n\n");
        printf("Chaves primárias podem ser iguais se estiverem em tabelas diferentes\n\n");
        printf("Os elementos não devem conter espaços ou caracteres com acentos\n\n");
        printf("Após inserido o elemento na tabela, o mesmo não pode ser alterado\n\n");

        }else{
        system("cls");
        system("exit");
        break;

        }

        }//fim while





    return 0;

}//FIM MAIN
