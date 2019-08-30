#include "functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>




/*###################################################
#####################################################
############ .TXT UTILIZADOS NO PROGRAMA ############
#####################################################
###################################################*/

FILE *Lista_Tab, *Contador_Lista_Tab, *Tabelas, *Element;


/*###################################################
#####################################################
############ FUNÇÕES - CRIPTOGRAFIA #################
#####################################################
###################################################*/


//Função para criptografar
//Recebe como parâmetro a string que deseja cifrar
void Cifra(char Auxiliar[20]){
    int Numero;
    //For para ler cada elemento da string antes do \0
    //Para cada elemento a variável Numero recebe um valor equivalente
    for(OO=0;OO<strlen(Auxiliar);OO++){
            if(Auxiliar[OO]=='0'){
                Numero=0;
            }
            if(Auxiliar[OO]=='1'){
                Numero=1;
            }
            if(Auxiliar[OO]=='2'){
                Numero=2;
            }
            if(Auxiliar[OO]=='3'){
                Numero=3;
            }
            if(Auxiliar[OO]=='4'){
                Numero=4;
            }
            if(Auxiliar[OO]=='5'){
                Numero=5;
            }
            if(Auxiliar[OO]=='6'){
                Numero=6;
            }
            if(Auxiliar[OO]=='7'){
                Numero=7;
            }
            if(Auxiliar[OO]=='8'){
                Numero=8;
            }
            if(Auxiliar[OO]=='9'){
                Numero=9;
            }
            if(Auxiliar[OO]=='a'){
                Numero=10;
            }
            if(Auxiliar[OO]=='b'){
                Numero=11;
            }
            if(Auxiliar[OO]=='c'){
                Numero=12;
            }
            if(Auxiliar[OO]=='d'){
                Numero=13;
            }
            if(Auxiliar[OO]=='e'){
                Numero=14;
            }
            if(Auxiliar[OO]=='f'){
                Numero=15;
            }
            if(Auxiliar[OO]=='g'){
                Numero=16;
            }
            if(Auxiliar[OO]=='h'){
                Numero=17;
            }
            if(Auxiliar[OO]=='i'){
                Numero=18;
            }
            if(Auxiliar[OO]=='j'){
                Numero=19;
            }
            if(Auxiliar[OO]=='k'){
                Numero=20;
            }
            if(Auxiliar[OO]=='l'){
                Numero=21;
            }
            if(Auxiliar[OO]=='m'){
                Numero=22;
            }
            if(Auxiliar[OO]=='n'){
                Numero=23;
            }
            if(Auxiliar[OO]=='o'){
                Numero=24;
            }
            if(Auxiliar[OO]=='p'){
                Numero=25;
            }
            if(Auxiliar[OO]=='q'){
                Numero=26;
            }
            if(Auxiliar[OO]=='r'){
                Numero=27;
            }
            if(Auxiliar[OO]=='s'){
                Numero=28;
            }
            if(Auxiliar[OO]=='t'){
                Numero=29;
            }
            if(Auxiliar[OO]=='u'){
                Numero=30;
            }
            if(Auxiliar[OO]=='v'){
                Numero=31;
            }
            if(Auxiliar[OO]=='w'){
                Numero=32;
            }
            if(Auxiliar[OO]=='x'){
                Numero=33;
            }
            if(Auxiliar[OO]=='y'){
                Numero=34;
            }
            if(Auxiliar[OO]=='z'){
                Numero=35;
            }
            if(Auxiliar[OO]=='A'){
                Numero=36;
            }
            if(Auxiliar[OO]=='B'){
                Numero=37;
            }
            if(Auxiliar[OO]=='C'){
                Numero=38;
            }
            if(Auxiliar[OO]=='D'){
                Numero=39;
            }
            if(Auxiliar[OO]=='E'){
                Numero=40;
            }
            if(Auxiliar[OO]=='F'){
                Numero=41;
            }
            if(Auxiliar[OO]=='G'){
                Numero=42;
            }
            if(Auxiliar[OO]=='H'){
                Numero=43;
            }
            if(Auxiliar[OO]=='I'){
                Numero=44;
            }
            if(Auxiliar[OO]=='J'){
                Numero=45;
            }
            if(Auxiliar[OO]=='K'){
                Numero=46;
            }
            if(Auxiliar[OO]=='L'){
                Numero=47;
            }
            if(Auxiliar[OO]=='M'){
                Numero=48;
            }
            if(Auxiliar[OO]=='N'){
                Numero=49;
            }
            if(Auxiliar[OO]=='O'){
                Numero=50;
            }
            if(Auxiliar[OO]=='P'){
                Numero=51;
            }
            if(Auxiliar[OO]=='Q'){
                Numero=52;
            }
            if(Auxiliar[OO]=='R'){
                Numero=53;
            }
            if(Auxiliar[OO]=='S'){
                Numero=54;
            }
            if(Auxiliar[OO]=='T'){
                Numero=55;
            }
            if(Auxiliar[OO]=='U'){
                Numero=56;
            }
            if(Auxiliar[OO]=='V'){
                Numero=57;
            }
            if(Auxiliar[OO]=='W'){
                Numero=58;
            }
            if(Auxiliar[OO]=='X'){
                Numero=59;
            }
            if(Auxiliar[OO]=='Y'){
                Numero=60;
            }
            if(Auxiliar[OO]=='Z'){
                Numero=61;
            }
            if(Auxiliar[OO]==','){
                Numero=65;
            }
            //Numero soma 1
            Numero+=1;

            //Cada valor de número tem um caractere equivalente
            //Esse caractere será trocado pelo original da string
            if(Numero==1){
                Auxiliar[OO]='z';
            }
            if(Numero==2){
                Auxiliar[OO]='A';
            }
            if(Numero==3){
                Auxiliar[OO]='y';
            }
            if(Numero==4){
                Auxiliar[OO]='B';
            }
            if(Numero==5){
                Auxiliar[OO]='x';
            }
            if(Numero==6){
                Auxiliar[OO]='9';
            }
            if(Numero==7){
                Auxiliar[OO]='C';
            }
            if(Numero==8){
                Auxiliar[OO]='w';
            }
            if(Numero==9){
                Auxiliar[OO]='D';
            }
            if(Numero==10){
                Auxiliar[OO]='v';
            }
            if(Numero==11){
                Auxiliar[OO]='E';
            }
            if(Numero==12){
                Auxiliar[OO]='8';
            }
            if(Numero==13){
                Auxiliar[OO]='u';
            }
            if(Numero==14){
                Auxiliar[OO]='F';
            }
            if(Numero==15){
                Auxiliar[OO]='t';
            }
            if(Numero==16){
                Auxiliar[OO]='G';
            }
            if(Numero==17){
                Auxiliar[OO]='s';
            }
            if(Numero==18){
                Auxiliar[OO]='7';
            }
            if(Numero==19){
                Auxiliar[OO]='H';
            }
            if(Numero==20){
                Auxiliar[OO]='r';
            }
            if(Numero==21){
                Auxiliar[OO]='I';
            }
            if(Numero==22){
                Auxiliar[OO]='q';
            }
            if(Numero==23){
                Auxiliar[OO]='J';
            }
            if(Numero==24){
                Auxiliar[OO]='6';
            }
            if(Numero==25){
                Auxiliar[OO]='p';
            }
            if(Numero==26){
                Auxiliar[OO]='K';
            }
            if(Numero==27){
                Auxiliar[OO]='o';
            }
            if(Numero==28){
                Auxiliar[OO]='L';
            }
            if(Numero==29){
                Auxiliar[OO]='n';
            }
            if(Numero==30){
                Auxiliar[OO]='5';
            }
            if(Numero==31){
                Auxiliar[OO]='a';
            }
            if(Numero==32){
                Auxiliar[OO]='m';
            }
            if(Numero==33){
                Auxiliar[OO]='N';
            }
            if(Numero==34){
                Auxiliar[OO]='l';
            }
            if(Numero==35){
                Auxiliar[OO]='O';
            }
            if(Numero==36){
                Auxiliar[OO]='4';
            }
            if(Numero==37){
                Auxiliar[OO]='k';
            }
            if(Numero==38){
                Auxiliar[OO]='P';
            }
            if(Numero==39){
                Auxiliar[OO]='j';
            }
            if(Numero==40){
                Auxiliar[OO]='Q';
            }
            if(Numero==41){
                Auxiliar[OO]='i';
            }
            if(Numero==42){
                Auxiliar[OO]='3';
            }
            if(Numero==43){
                Auxiliar[OO]='R';
            }
            if(Numero==44){
                Auxiliar[OO]='h';
            }
            if(Numero==45){
                Auxiliar[OO]='S';
            }
            if(Numero==46){
                Auxiliar[OO]='g';
            }
            if(Numero==47){
                Auxiliar[OO]='T';
            }
            if(Numero==48){
                Auxiliar[OO]='2';
            }
            if(Numero==49){
                Auxiliar[OO]='f';
            }
            if(Numero==50){
                Auxiliar[OO]='U';
            }
            if(Numero==51){
                Auxiliar[OO]='e';
            }
            if(Numero==52){
                Auxiliar[OO]='V';
            }
            if(Numero==53){
                Auxiliar[OO]='d';
            }
            if(Numero==54){
                Auxiliar[OO]='1';
            }
            if(Numero==55){
                Auxiliar[OO]='W';
            }
            if(Numero==56){
                Auxiliar[OO]='c';
            }
            if(Numero==57){
                Auxiliar[OO]='X';
            }
            if(Numero==58){
                Auxiliar[OO]='b';
            }
            if(Numero==59){
                Auxiliar[OO]='Y';
            }
            if(Numero==60){
                Auxiliar[OO]='Z';
            }
            if(Numero==61){
                Auxiliar[OO]='M';
            }
            if(Numero==62){
                Auxiliar[OO]='0';
            }
            if(Numero==66){
                Auxiliar[OO]=',';
            }
        }
}
//Função para decifrar a string
void Desencriptacao(char Auxiliar[20]){
    int Numero;
    //Para cara elemento da string Numero recebe um valor equivalente
    for(OO=0;OO<strlen(Auxiliar);OO++){
            if(Auxiliar[OO]=='z'){
                Numero=1;
            }
            if(Auxiliar[OO]=='A'){
                Numero=2;
            }
            if(Auxiliar[OO]=='y'){
                Numero=3;
            }
            if(Auxiliar[OO]=='B'){
                Numero=4;
            }
            if(Auxiliar[OO]=='x'){
                Numero=5;
            }
            if(Auxiliar[OO]=='9'){
                Numero=6;
            }
            if(Auxiliar[OO]=='C'){
                Numero=7;
            }
            if(Auxiliar[OO]=='w'){
                Numero=8;
            }
            if(Auxiliar[OO]=='D'){
                Numero=9;
            }
            if(Auxiliar[OO]=='v'){
                Numero=10;
            }
            if(Auxiliar[OO]=='E'){
                Numero=11;
            }
            if(Auxiliar[OO]=='8'){
                Numero=12;
            }
            if(Auxiliar[OO]=='u'){
                Numero=13;
            }
            if(Auxiliar[OO]=='F'){
                Numero=14;
            }
            if(Auxiliar[OO]=='t'){
                Numero=15;
            }
            if(Auxiliar[OO]=='G'){
                Numero=16;
            }
            if(Auxiliar[OO]=='s'){
                Numero=17;
            }
            if(Auxiliar[OO]=='7'){
                Numero=18;
            }
            if(Auxiliar[OO]=='H'){
                Numero=19;
            }
            if(Auxiliar[OO]=='r'){
                Numero=20;
            }
            if(Auxiliar[OO]=='I'){
                Numero=21;
            }
            if(Auxiliar[OO]=='q'){
                Numero=22;
            }
            if(Auxiliar[OO]=='J'){
                Numero=23;
            }
            if(Auxiliar[OO]=='6'){
                Numero=24;
            }
            if(Auxiliar[OO]=='p'){
                Numero=25;
            }
            if(Auxiliar[OO]=='K'){
                Numero=26;
            }
            if(Auxiliar[OO]=='o'){
                Numero=27;
            }
            if(Auxiliar[OO]=='L'){
                Numero=28;
            }
            if(Auxiliar[OO]=='n'){
                Numero=29;
            }
            if(Auxiliar[OO]=='5'){
                Numero=30;
            }
            if(Auxiliar[OO]=='a'){
                Numero=31;
            }
            if(Auxiliar[OO]=='m'){
                Numero=32;
            }
            if(Auxiliar[OO]=='N'){
                Numero=33;
            }
            if(Auxiliar[OO]=='l'){
                Numero=34;
            }
            if(Auxiliar[OO]=='O'){
                Numero=35;
            }
            if(Auxiliar[OO]=='4'){
                Numero=36;
            }
            if(Auxiliar[OO]=='k'){
                Numero=37;
            }
            if(Auxiliar[OO]=='P'){
                Numero=38;
            }
            if(Auxiliar[OO]=='j'){
                Numero=39;
            }
            if(Auxiliar[OO]=='Q'){
                Numero=40;
            }
            if(Auxiliar[OO]=='i'){
                Numero=41;
            }
            if(Auxiliar[OO]=='3'){
                Numero=42;
            }
            if(Auxiliar[OO]=='R'){
                Numero=43;
            }
            if(Auxiliar[OO]=='h'){
                Numero=44;
            }
            if(Auxiliar[OO]=='S'){
                Numero=45;
            }
            if(Auxiliar[OO]=='g'){
                Numero=46;
            }
            if(Auxiliar[OO]=='T'){
                Numero=47;
            }
            if(Auxiliar[OO]=='2'){
                Numero=48;
            }
            if(Auxiliar[OO]=='f'){
                Numero=49;
            }
            if(Auxiliar[OO]=='U'){
                Numero=50;
            }
            if(Auxiliar[OO]=='e'){
                Numero=51;
            }
            if(Auxiliar[OO]=='V'){
                Numero=52;
            }
            if(Auxiliar[OO]=='d'){
                Numero=53;
            }
            if(Auxiliar[OO]=='1'){
                Numero=54;
            }
            if(Auxiliar[OO]=='W'){
                Numero=55;
            }
            if(Auxiliar[OO]=='c'){
                Numero=56;
            }
            if(Auxiliar[OO]=='X'){
                Numero=57;
            }
            if(Auxiliar[OO]=='b'){
                Numero=58;
            }
            if(Auxiliar[OO]=='Y'){
                Numero=59;
            }
            if(Auxiliar[OO]=='Z'){
                Numero=60;
            }
            if(Auxiliar[OO]=='M'){
                Numero=61;
            }
            if(Auxiliar[OO]=='0'){
                Numero=62;
            }
            if(Auxiliar[OO]==','){
                Numero=66;
            }
            //Numero é decrementado em 1
            Numero=Numero-1;
            //Para cada novo valor de Numero
            //Existe um caractere equivalente
            //a string troca o elemento pelo novo
            if(Numero==0){
                Auxiliar[OO]='0';
            }
            if(Numero==1){
                Auxiliar[OO]='1';
            }
            if(Numero==2){
                Auxiliar[OO]='2';
            }
            if(Numero==3){
                Auxiliar[OO]='3';
            }
            if(Numero==4){
                Auxiliar[OO]='4';
            }
            if(Numero==5){
                Auxiliar[OO]='5';
            }
            if(Numero==6){
                Auxiliar[OO]='6';
            }
            if(Numero==7){
                Auxiliar[OO]='7';
            }
            if(Numero==8){
                Auxiliar[OO]='8';
            }
            if(Numero==9){
                Auxiliar[OO]='9';
            }
            if(Numero==10){
                Auxiliar[OO]='a';
            }
            if(Numero==11){
                Auxiliar[OO]='b';
            }
            if(Numero==12){
                Auxiliar[OO]='c';
            }
            if(Numero==13){
                Auxiliar[OO]='d';
            }
            if(Numero==14){
                Auxiliar[OO]='e';
            }
            if(Numero==15){
                Auxiliar[OO]='f';
            }
            if(Numero==16){
                Auxiliar[OO]='g';
            }
            if(Numero==17){
                Auxiliar[OO]='h';
            }
            if(Numero==18){
                Auxiliar[OO]='i';
            }
            if(Numero==19){
                Auxiliar[OO]='j';
            }
            if(Numero==20){
                Auxiliar[OO]='k';
            }
            if(Numero==21){
                Auxiliar[OO]='l';
            }
            if(Numero==22){
                Auxiliar[OO]='m';
            }
            if(Numero==23){
                Auxiliar[OO]='n';
            }
            if(Numero==24){
                Auxiliar[OO]='o';
            }
            if(Numero==25){
                Auxiliar[OO]='p';
            }
            if(Numero==26){
                Auxiliar[OO]='q';
            }
            if(Numero==27){
                Auxiliar[OO]='r';
            }
            if(Numero==28){
                Auxiliar[OO]='s';
            }
            if(Numero==29){
                Auxiliar[OO]='t';
            }
            if(Numero==30){
                Auxiliar[OO]='u';
            }
            if(Numero==31){
                Auxiliar[OO]='v';
            }
            if(Numero==32){
                Auxiliar[OO]='w';
            }
            if(Numero==33){
                Auxiliar[OO]='x';
            }
            if(Numero==34){
                Auxiliar[OO]='y';
            }
            if(Numero==35){
                Auxiliar[OO]='z';
            }
            if(Numero==36){
                Auxiliar[OO]='A';
            }
            if(Numero==37){
                Auxiliar[OO]='B';
            }
            if(Numero==38){
                Auxiliar[OO]='C';
            }
            if(Numero==39){
                Auxiliar[OO]='D';
            }
            if(Numero==40){
                Auxiliar[OO]='E';
            }
            if(Numero==41){
                Auxiliar[OO]='F';
            }
            if(Numero==42){
                Auxiliar[OO]='G';
            }
            if(Numero==43){
                Auxiliar[OO]='H';
            }
            if(Numero==44){
                Auxiliar[OO]='I';
            }
            if(Numero==45){
                Auxiliar[OO]='J';
            }
            if(Numero==46){
                Auxiliar[OO]='K';
            }
            if(Numero==47){
                Auxiliar[OO]='L';
            }
            if(Numero==48){
                Auxiliar[OO]='M';
            }
            if(Numero==49){
                Auxiliar[OO]='N';
            }
            if(Numero==50){
                Auxiliar[OO]='O';
            }
            if(Numero==51){
                Auxiliar[OO]='P';
            }
            if(Numero==52){
                Auxiliar[OO]='Q';
            }
            if(Numero==53){
                Auxiliar[OO]='R';
            }
            if(Numero==54){
                Auxiliar[OO]='S';
            }
            if(Numero==55){
                Auxiliar[OO]='T';
            }
            if(Numero==56){
                Auxiliar[OO]='U';
            }
            if(Numero==57){
                Auxiliar[OO]='V';
            }
            if(Numero==58){
                Auxiliar[OO]='W';
            }
            if(Numero==59){
                Auxiliar[OO]='X';
            }
            if(Numero==60){
                Auxiliar[OO]='Y';
            }
            if(Numero==61){
                Auxiliar[OO]='Z';
            }
            if(Numero==65){
                Auxiliar[OO]=',';
            }
    }
}


/*###################################################
#####################################################
############ FUNCAO 1 - CRIAR TABELA ################
#####################################################
###################################################*/
//Função para criar tabelas
//Recebe como parâmetro a struct tabela
void Criar_tab(struct tabela *a){
        //Abre em modo leitura o arquivo que conta o número de tabelas existentes
        Contador_Lista_Tab = fopen(Aux10, "r");
        //Armazena essa quantidade
        fscanf(Contador_Lista_Tab,"%d",&Cont_List_Tab);
        //Fecha o .txt
        fclose(Contador_Lista_Tab);
        //Abre em modo de alteração o arquivo que contém os nomes das tabelas criadas
        Lista_Tab = fopen(Aux11, "a");
        printf("Digite o nome da tabela:\n\n");
            //Aloca array para o nome e para uma cópia
            a->nome=malloc(sizeof(Nome));
            a->cpy=malloc(sizeof(Nome));
            //Entrada do nome
            scanf("%s",a->nome);
            printf("\n");
            //Faz uma cópia do nome
            strcpy(Auxiliar,a->nome);
            //Manda a cópia para ser criptografada
            Cifra(Auxiliar);
            //Nome criptografado é atribuído ao array original e a sua cópia
            strcpy(a->nome,Auxiliar);
            strcpy(a->cpy,a->nome);
            //Junção do nome com a extensão .txt
            strcat(a->nome,Aux);
            //Abre o arquivo em modo leitura
            Tabelas=fopen(a->nome,"r");
            printf("\n");
        //Se o arquivo foi aberto com sucesso
        //A tabela já existe e por recursividade
        //O programa solicita um nome novo para a tabela
        if(Tabelas!=NULL){
            printf("Tabela existente!\n");
            printf("Insira outro nome:\n");
            Criar_tab(a);
        //Se não deu certo
        }else{
            //Incrementa em 1 o contador de lista de tabelas
            Cont_List_Tab++;

        int NumCampos;
        printf("Digite a quantidade de campos\n\n");
        printf("O primeiro campo deve ser de chaves primarias\n");
        printf("Portanto deve ser composta apenas por numeros inteiros:\n\n");
        //Entrada para o número de campos da tabela
        scanf("%d",&NumCampos);
        printf("\n");
            //Alocação de um array de strings para os campos da tabela
            a->campos=malloc(sizeof(char*)*NumCampos);
                for(i=0;i<NumCampos;i++){
                    a->campos[i]=malloc(sizeof(Nome));
                }
                printf("Digite os campos:\n");
                //Nomeação dos campos da tabela
                //Cifragem desses campos
                for(i=0;i<NumCampos;i++){
                    printf("Campo %d:\n\n",i+1);
                    scanf("%s",a->campos[i]);
                    strcpy(Auxiliar,a->campos[i]);
                    Cifra(Auxiliar);
                    strcpy(a->campos[i],Auxiliar);
                    printf("\n");
                }
            //Alocação de array de strings para armazenar o tipo de variáveis para cada campo
            a->tipos=malloc(sizeof(char*)*NumCampos);
                for(i=0;i<NumCampos;i++){
                    a->tipos[i]=malloc(sizeof(Nome));
                }
                printf("Digite quais os tipos das varaveis dos campos\n");
                printf("A partir do segundo campo\n");
                printf("O primeiro foi alocado como int automaticamente:\n\n");
                //Cifragem do primeiro campo
                strcpy(a->tipos[0],Aux2);
                strcpy(Auxiliar,a->tipos[0]);
                Cifra(Auxiliar);
                strcpy(a->tipos[0],Auxiliar);
                int cont=0;
                //Inserção dos tipos de variáveis a partir do segundo campo
                //Confirmação se o tipo inserido pertence a algum dos autorizados
                for(i=1;i<NumCampos;i++){
                    do{
                        cont=0;
                        printf("Digite o tipo dentre:\n");
                        printf("char, int, string, float ou double\n\n");
                        scanf("%s",a->tipos[i]);
                        printf("\n");
                        if(strcmp(a->tipos[i],Int)!=0){
                            if(strcmp(a->tipos[i],Char)!=0){
                                if(strcmp(a->tipos[i],String)!=0){
                                    if(strcmp(a->tipos[i],Float)!=0){
                                        if(strcmp(a->tipos[i],Double)!=0){
                                            cont++;
                                        }
                                    }
                                }
                            }
                        }
                    }while(cont!=0);
                }
                //Cifragem dos tipos dos campos
                for(i=1;i<NumCampos;i++){
                    strcpy(Auxiliar,a->tipos[i]);
                    Cifra(Auxiliar);
                    strcpy(a->tipos[i],Auxiliar);
                }
                //Abertura em modo de escrita do arquivo com o número de tabelas criadas
                Contador_Lista_Tab = fopen(Aux10, "w");
                //Escrita do nome da nova tabela no .txt com os nomes das tabelas
                fprintf(Lista_Tab,"%s\n",a->cpy);
                //Liberando array
                free(a->cpy);
                //Escrevendo o número das tabelas criadas acrescentando a nova
                fprintf(Contador_Lista_Tab,"%d",Cont_List_Tab);
                //Criando o arquivo da tabela criada e abrindo ele
                Tabelas = fopen(a->nome,"a");
                //Escrevendo o número de campos e o nome da tabela
                fprintf(Tabelas,"%d\n",NumCampos);
                fprintf(Tabelas,"%s\n",a->nome);
                //Liberando o nome
                free(a->nome);
                //Escrevendo os campos da tabela e liberando o array de strings
                for(i=0;i<NumCampos;i++){
                    fprintf(Tabelas,"%s\n",a->campos[i]);
                    free(a->campos[i]);
                }
                free(a->campos);
                //Escrevendo os tipos dos campos e liberando o array de strings
                for(i=0;i<NumCampos;i++){
                    fprintf(Tabelas,"%s\n",a->tipos[i]);
                    free(a->tipos[i]);
                }
        free(a->tipos);
        //Fechando os 3 .txt abertos
        fclose(Tabelas);
        fclose(Contador_Lista_Tab);
        fclose(Lista_Tab);
        }
}


/*###################################################
#####################################################
############ FUNCAO 2 - LISTAR TABELAS ##############
#####################################################
###################################################*/
//Função que lista todas as tabelas criadas
void Lista_Tabelas(struct tabela *a){
    //Abrindo o .txt com o contador de tabelas em modo leitura
    Contador_Lista_Tab = fopen(Aux10, "r");
    //IF para o caso de não existir o .txt com o contador
    //Se não tem contador ainda, não existe tabela alguma
    //Redireciona para a função de criar tabelas se o usuário desejar
    if(Contador_Lista_Tab==NULL){
        int C;
        printf("Não existe tabela alguma criada\n");
        printf("Deseja criar uma?\n");
        printf("Insira 1 para criar, ou qualquer outro valor para sair\n\n");
        scanf("%d",&C);
        printf("\n");
        if(C==1){
            Criar_tab(a);
        }
    //Se o .txt existe
    }else{
        //Armazena a quantidade de tabelas existentes
        fscanf(Contador_Lista_Tab,"%d",&Cont_List_Tab);
        //Fecha o .txt
        fclose(Contador_Lista_Tab);
        //Abre o .txt com os nomes das tabelas em modo leitura
        Lista_Tab = fopen(Aux11, "r");
        //Aloca um array de strings para guardar todos os nomes de tabelas
        a->tips=malloc(sizeof(char*)*Cont_List_Tab);
            for(i=0;i<Cont_List_Tab;i++){
                a->tips[i]=malloc(sizeof(Nome));
            }
            //Armazena no array os nomes
            for(i=0;i<Cont_List_Tab;i++){
                fscanf(Lista_Tab,"%s",a->tips[i]);
            }
            printf("\n");
            printf("--Tabelas--");
            printf("\n\n");
            //Desencriptação dos nomes
            for(i=0;i<Cont_List_Tab;i++){
                strcpy(Auxiliar,a->tips[i]);
                Desencriptacao(Auxiliar);
                strcpy(a->tips[i],Auxiliar);
            }
            //Exibição dos nomes das tabelas
            for(i=0;i<Cont_List_Tab;i++){
                printf("%s\n",a->tips[i]);
            }
            //Liberando o array
            for(i=0;i<Cont_List_Tab;i++){
                free(a->tips[i]);
            }
            free(a->tips);
            //Fecha o .txt com os nomes das tabelas
            fclose(Lista_Tab);
    }
}



/*###################################################
#####################################################
########### FUNCAO 3 - INSERIR LINHA NA TABELA ######
#####################################################
###################################################*/

//Função com finalidade de permitir apenas valores inteiros;
void int_only(char*Aux8){
    //Bateria de testes para saber se a entrada contém alguma letra ou vírgula;
     Kk = strchr(Aux8, Ac);
     LL01=strchr(Aux8, L01);
     LL02=strchr(Aux8, L02);
     LL03=strchr(Aux8, L03);
     LL04=strchr(Aux8, L04);
     LL05=strchr(Aux8, L05);
     LL06=strchr(Aux8, L06);
     LL07=strchr(Aux8, L07);
     LL08=strchr(Aux8, L08);
     LL09=strchr(Aux8, L09);
     LL10=strchr(Aux8, L10);
     LL11=strchr(Aux8, L11);
     LL12=strchr(Aux8, L12);
     LL13=strchr(Aux8, L13);
     LL14=strchr(Aux8, L14);
     LL15=strchr(Aux8, L15);
     LL16=strchr(Aux8, L16);
     LL17=strchr(Aux8, L17);
     LL18=strchr(Aux8, L18);
     LL19=strchr(Aux8, L19);
     LL20=strchr(Aux8, L20);
     LL21=strchr(Aux8, L21);
     LL22=strchr(Aux8, L22);
     LL23=strchr(Aux8, L23);
     LL24=strchr(Aux8, L24);
     LL25=strchr(Aux8, L25);
     LL26=strchr(Aux8, L26);
     LL27=strchr(Aux8, M01);
     LL28=strchr(Aux8, M02);
     LL29=strchr(Aux8, M03);
     LL30=strchr(Aux8, M04);
     LL31=strchr(Aux8, M05);
     LL32=strchr(Aux8, M06);
     LL33=strchr(Aux8, M07);
     LL34=strchr(Aux8, M08);
     LL35=strchr(Aux8, M09);
     LL36=strchr(Aux8, M10);
     LL37=strchr(Aux8, M11);
     LL38=strchr(Aux8, M12);
     LL39=strchr(Aux8, M13);
     LL40=strchr(Aux8, M14);
     LL41=strchr(Aux8, M15);
     LL42=strchr(Aux8, M16);
     LL43=strchr(Aux8, M17);
     LL44=strchr(Aux8, M18);
     LL45=strchr(Aux8, M19);
     LL46=strchr(Aux8, M20);
     LL47=strchr(Aux8, M21);
     LL48=strchr(Aux8, M22);
     LL49=strchr(Aux8, M23);
     LL50=strchr(Aux8, M24);
     LL51=strchr(Aux8, M25);
     LL52=strchr(Aux8, M26);
    //Se sim, a condicão do IF é atendida e a função pede um novo valor e chama ela mesma recursivamente;
     if(Kk!=NULL||LL01!=NULL||LL02!=NULL||LL03!=NULL||LL04!=NULL||LL05!=NULL||LL06!=NULL||LL07!=NULL||LL08!=NULL||LL09!=NULL||
        LL10!=NULL||LL11!=NULL||LL12!=NULL||LL13!=NULL||LL14!=NULL||LL15!=NULL||LL16!=NULL||LL17!=NULL||LL18!=NULL||LL19!=NULL||
        LL20!=NULL||LL21!=NULL||LL22!=NULL||LL23!=NULL||LL24!=NULL||LL25!=NULL||LL26!=NULL||LL27!=NULL||LL28!=NULL||LL29!=NULL||
        LL30!=NULL||LL31!=NULL||LL32!=NULL||LL33!=NULL||LL34!=NULL||LL35!=NULL||LL36!=NULL||LL37!=NULL||LL38!=NULL||LL39!=NULL||
        LL40!=NULL||LL41!=NULL||LL42!=NULL||LL43!=NULL||LL44!=NULL||LL45!=NULL||LL46!=NULL||LL47!=NULL||LL48!=NULL||LL49!=NULL||
        LL50!=NULL||LL51!=NULL||LL52!=NULL){
                  printf("Entrada inconsistente!\n");
                  printf("Tipo int deve conter apenas algarismos inteiros\n");
                  printf("Digite novamente:\n\n");
                  scanf("%s",Aux8);
                  printf("\n");
                  int_only(Aux8);
    }
}

//Função especial para a chave primária
void chave(struct tabela *a,char*Aux8){
        //Contador;
        int cont=0;
        //For comparador para saber se a chave primária digitada já existe, se sim o contador incrementa;
        for(i=0;i<Num_elements-1;i++){
            if(strcmp(a->element[0][i],Aux8)==0){
                cont++;
            }
        }
        //Para qualquer valor do contador diferente de zero, o IF é atendido e a função pede outra chave e se chama recursivamente;
        if(cont!=0){
            printf("Chave já existente!\n");
            printf("Digite novamente:\n\n");
            scanf("%s",Aux8);
            printf("\n");
            chave(a,Aux8);
        }
}
//Função para aceitar apenas strings de caracteres alfabéticos;
void string_only(char*Aux8){
    //Bateria de testes para confirmar a presença de números;
     Aa = strchr(Aux8, A1);
     Bb = strchr(Aux8, A2);
     Cc = strchr(Aux8, A3);
     Dd = strchr(Aux8, A4);
     Ee = strchr(Aux8, A5);
     Ff = strchr(Aux8, A6);
     Gg = strchr(Aux8, A7);
     Hh = strchr(Aux8, A8);
     Ii = strchr(Aux8, A9);
     Jj = strchr(Aux8, A0);
     Kk = strchr(Aux8, Ac);
    //Se houver alguma ocorrência de números na string, o IF é atendido e a função pede que seja digitado novamente e se chama recursivamente;
     if(Aa!=NULL||Bb!=NULL||Cc!=NULL||Dd!=NULL||Ee!=NULL||Ff!=NULL||Gg!=NULL||Hh!=NULL||Ii!=NULL||Jj!=NULL||Kk!=NULL){
                  printf("Entrada inconsistente!\n");
                  printf("Tipo string deve conter uma palavra\n");
                  printf("Digite novamente:\n\n");
                  scanf("%s",Aux8);
                  printf("\n");
                  string_only(Aux8);
     }
}
//Função para aceitar números decimais;
void float_double(char*Aux8){
    //Bateria de testes para confirmar a presença de letras;
     Kk = strchr(Aux8, Ac);
     LL01=strchr(Aux8, L01);
     LL02=strchr(Aux8, L02);
     LL03=strchr(Aux8, L03);
     LL04=strchr(Aux8, L04);
     LL05=strchr(Aux8, L05);
     LL06=strchr(Aux8, L06);
     LL07=strchr(Aux8, L07);
     LL08=strchr(Aux8, L08);
     LL09=strchr(Aux8, L09);
     LL10=strchr(Aux8, L10);
     LL11=strchr(Aux8, L11);
     LL12=strchr(Aux8, L12);
     LL13=strchr(Aux8, L13);
     LL14=strchr(Aux8, L14);
     LL15=strchr(Aux8, L15);
     LL16=strchr(Aux8, L16);
     LL17=strchr(Aux8, L17);
     LL18=strchr(Aux8, L18);
     LL19=strchr(Aux8, L19);
     LL20=strchr(Aux8, L20);
     LL21=strchr(Aux8, L21);
     LL22=strchr(Aux8, L22);
     LL23=strchr(Aux8, L23);
     LL24=strchr(Aux8, L24);
     LL25=strchr(Aux8, L25);
     LL26=strchr(Aux8, L26);
     LL27=strchr(Aux8, M01);
     LL28=strchr(Aux8, M02);
     LL29=strchr(Aux8, M03);
     LL30=strchr(Aux8, M04);
     LL31=strchr(Aux8, M05);
     LL32=strchr(Aux8, M06);
     LL33=strchr(Aux8, M07);
     LL34=strchr(Aux8, M08);
     LL35=strchr(Aux8, M09);
     LL36=strchr(Aux8, M10);
     LL37=strchr(Aux8, M11);
     LL38=strchr(Aux8, M12);
     LL39=strchr(Aux8, M13);
     LL40=strchr(Aux8, M14);
     LL41=strchr(Aux8, M15);
     LL42=strchr(Aux8, M16);
     LL43=strchr(Aux8, M17);
     LL44=strchr(Aux8, M18);
     LL45=strchr(Aux8, M19);
     LL46=strchr(Aux8, M20);
     LL47=strchr(Aux8, M21);
     LL48=strchr(Aux8, M22);
     LL49=strchr(Aux8, M23);
     LL50=strchr(Aux8, M24);
     LL51=strchr(Aux8, M25);
     LL52=strchr(Aux8, M26);
    //Se houver letras ou nenhuma vírgula, a função pede novo valor e se chama recursivamente;
     if(Kk==NULL||LL01!=NULL||LL02!=NULL||LL03!=NULL||LL04!=NULL||LL05!=NULL||LL06!=NULL||LL07!=NULL||LL08!=NULL||LL09!=NULL||
        LL10!=NULL||LL11!=NULL||LL12!=NULL||LL13!=NULL||LL14!=NULL||LL15!=NULL||LL16!=NULL||LL17!=NULL||LL18!=NULL||LL19!=NULL||
        LL20!=NULL||LL21!=NULL||LL22!=NULL||LL23!=NULL||LL24!=NULL||LL25!=NULL||LL26!=NULL||LL27!=NULL||LL28!=NULL||LL29!=NULL||
        LL30!=NULL||LL31!=NULL||LL32!=NULL||LL33!=NULL||LL34!=NULL||LL35!=NULL||LL36!=NULL||LL37!=NULL||LL38!=NULL||LL39!=NULL||
        LL40!=NULL||LL41!=NULL||LL42!=NULL||LL43!=NULL||LL44!=NULL||LL45!=NULL||LL46!=NULL||LL47!=NULL||LL48!=NULL||LL49!=NULL||
        LL50!=NULL||LL51!=NULL||LL52!=NULL){
                    printf("Entrada inconsistente!\n");
                    printf("Tipo float ou double deve conter algarismos e vírgula\n");
                    printf("Digite novamente:\n\n");
                    scanf("%s",Aux8);
                    printf("\n");
                    float_double(Aux8);
     }
}


//Função para aceitar apenas 1 caractere alfabético;
void char_only(char Aux8[20]){
        //Contador;
        int Cont=0;
        //For para confirmar se existe mais de 1 caractere;
        for(i=0;i<strlen(Aux8);i++){
            if(Aux8[i]!='\0'){
             Cont++;
            }
        }
        //Para qualquer valor de contador maior que 1 a função pede que seja digitado novamente e se chama recursivamente;
        if(Cont>1){
            printf("Entrada inconsistente!\n");
            printf("Tipo char suporta apenas 1 caractere\n");
            printf("Esse caractere deve ser diferente de algarismo\n");
            printf("Digite novamente:\n\n");
            scanf("%s",Aux8);
            printf("\n");
            char_only(Aux8);
        //Se tem apenas 1 caracetere entra no ELSE;
        }else{
            //Bateria de testes para confirmar a ocorrência de números;
            Aa = strchr(Aux8, A1);
            Bb = strchr(Aux8, A2);
            Cc = strchr(Aux8, A3);
            Dd = strchr(Aux8, A4);
            Ee = strchr(Aux8, A5);
            Ff = strchr(Aux8, A6);
            Gg = strchr(Aux8, A7);
            Hh = strchr(Aux8, A8);
            Ii = strchr(Aux8, A9);
            Jj = strchr(Aux8, A0);
            //Se houver números será solicitado uma nova entrada e função se chama recursivamente;
            if(Aa!=NULL||Bb!=NULL||Cc!=NULL||Dd!=NULL||Ee!=NULL||Ff!=NULL||Gg!=NULL||Hh!=NULL||Ii!=NULL||Jj!=NULL){
                  printf("Entrada inconsistente!\n");
                  printf("Digite novamente:\n\n");
                  scanf("%s",Aux8);
                  printf("\n");
                  char_only(Aux8);
            }
        }
}
//Cópia da função acima, com uma entrada diferente;
void char_only_v2(char DD[2]){
        int Cont=0;
        for(i=0;i<strlen(DD);i++){
            if(DD[i]!='\0'){
             Cont++;
            }
        }
        if(Cont>1){
            printf("Entrada inconsistente!\n");
            printf("Tipo char suporta apenas 1 caractere\n");
            printf("Esse caractere deve ser diferente de algarismo\n");
            printf("Digite novamente:\n\n");
            scanf("%s",DD);
            printf("\n");
            char_only_v2(DD);
        }else{
            Aa = strchr(DD, A1);
            Bb = strchr(DD, A2);
            Cc = strchr(DD, A3);
            Dd = strchr(DD, A4);
            Ee = strchr(DD, A5);
            Ff = strchr(DD, A6);
            Gg = strchr(DD, A7);
            Hh = strchr(DD, A8);
            Ii = strchr(DD, A9);
            Jj = strchr(DD, A0);
            if(Aa!=NULL||Bb!=NULL||Cc!=NULL||Dd!=NULL||Ee!=NULL||Ff!=NULL||Gg!=NULL||Hh!=NULL||Ii!=NULL||Jj!=NULL){
                  printf("Entrada inconsistente!\n");
                  printf("Digite novamente:\n\n");
                  scanf("%s",DD);
                  printf("\n");
                  char_only(DD);
            }
        }
}

//Função para adicionar elementos à tabela;
void Elementos(int Cont_campos, struct tabela *a){
    //Abrindo leitura do arquivo onde contém os dados sobre a tabela
    //Ex:Campos,Tipos,Nome da Tabela e Número de Campos;
    Tabelas = fopen(a->nome,"r");
    //Variável auxiliar para criar um vetor que engloba tudo escrito no .txt acima
    Aux4=(Cont_campos*2)+2;
    //Alocando vetor para armazenar
    a->tipos=malloc(sizeof(char*)*Aux4);
        for(i=0;i<Aux4;i++){
            a->tipos[i]=malloc(sizeof(Nome));
        }
    //Vetor para armazenar apenas os tipos de dados
    //Ex:int, float...
    a->tips=malloc(sizeof(char*)*Cont_campos);
        for(i=0;i<Cont_campos;i++){
            a->tips[i]=malloc(sizeof(Nome));
        }
    //Vetor para armazenar os campos da tabela
    a->campos=malloc(sizeof(char*)*Cont_campos);
        for(i=0;i<Cont_campos;i++){
            a->campos[i]=malloc(sizeof(Nome));
        }
        //Armazenando a tabela em a->tipos
        for(i=0;i<Aux4;i++){
            fscanf(Tabelas,"%s",a->tipos[i]);
        }
        Aux5=0;
        //Copiando os tipos de variáveis para a->tips
        for(i=Cont_campos+2;i<Aux4;i++){
            strcpy(a->tips[Aux5],a->tipos[i]);
            Aux5++;
        }
        for(i=0;i<Cont_campos;i++){
            strcpy(Auxiliar,a->tips[i]);
            Desencriptacao(Auxiliar);
            strcpy(a->tips[i],Auxiliar);
        }
        Aux5=0;
        //Copiando os campos para a->campos
        for(i=2;i<Cont_campos+2;i++){
            strcpy(a->campos[Aux5],a->tipos[i]);
            Aux5++;
        }
        for(i=0;i<Cont_campos;i++){
            strcpy(Auxiliar,a->campos[i]);
            Desencriptacao(Auxiliar);
            strcpy(a->campos[i],Auxiliar);
        }
        //Liberando a->tipos
        for(i=0;i<Aux4;i++){
            free(a->tipos[i]);
        }free(a->tipos);
    //Fechando o arquivo do modo leitura
    fclose(Tabelas);
    //Abrindo o arquivo que contém os elementos inseridos na tabela
    Tabelas=fopen(a->cpy,"r");
    //Se a abertura for bem sucedida o código entra nesse IF
    if(Tabelas!=NULL){
            //Abrindo o arquivo que contém a quantidade de linhas inseridas na tabela
            Element=fopen(a->cpy2,"r");
            //Armazenando o valor de linhas inseridas em Num_elements
            Num_elements=0;
            fscanf(Element,"%d",&Num_elements);
            //Fechando o arquivo do modo leitura
            fclose(Element);
            //Adicionando 1 à quantidade de linhas
            Num_elements=Num_elements+1;
            //Alocando uma matriz de strings com 1 linha a mais do que já existe
            //A matriz deve ter o número de campos como coluna esse número vem de Cont_campos
            //E deve ter Num_elements já acrescido de 1 como número de linhas
            a->element=malloc(sizeof(char*)*Cont_campos);
            for(i=0;i<Cont_campos;i++){
                a->element[i]=malloc(sizeof(char*)*Num_elements);
                        for(j=0;j<Num_elements;j++){
                            a->element[i][j]=malloc(sizeof(Nome));
                        }
            }
            //printf("Digite os dados de cada coluna\n");
            //printf("Ao fim de cada dado press Enter para inserir:\n\n");
            //Copiando para a matriz os dados já existentes no arquivo

            for(j=0;j<Cont_campos;j++){
                for(i=0;i<Num_elements-1;i++){
                    fscanf(Tabelas,"%s",a->element[j][i]);
                }
            }
            for(j=0;j<Cont_campos;j++){
                for(i=0;i<Num_elements-1;i++){
                    strcpy(Auxiliar,a->element[j][i]);
                    Desencriptacao(Auxiliar);
                    strcpy(a->element[j][i],Auxiliar);
                }
            }
            //Fechando o arquivo do modo leitura
            fclose(Tabelas);
            //Usuário insere a linha que falta na matriz

            for(j=0;j<Cont_campos;j++){
                printf("Digite %s:\n\n",a->campos[j]);
                //Teste para saber se o campo aceitará somente valores inteiros;
                if(strcmp(a->tips[j],Int)==0){
                        //Teste para saber se o campo é de chave primária;
                        if(j==0){
                            scanf("%s",a->element[j][Num_elements-1]);
                            printf("\n");
                            strcpy(Aux8,a->element[j][Num_elements-1]);
                            int_only(Aux8);
                            chave(a,Aux8);
                            strcpy(a->element[j][Num_elements-1],Aux8);
                        }else{
                            scanf("%s",a->element[j][Num_elements-1]);
                            printf("\n");
                            strcpy(Aux8,a->element[j][Num_elements-1]);
                            int_only(Aux8);
                            strcpy(a->element[j][Num_elements-1],Aux8);
                        }
                }
                //Teste para saber se o campo aceitará somente strings;
                if(strcmp(a->tips[j],String)==0){
                    scanf("%s",a->element[j][Num_elements-1]);
                    printf("\n");
                    strcpy(Aux8,a->element[j][Num_elements-1]);
                    string_only(Aux8);
                    strcpy(a->element[j][Num_elements-1],Aux8);
                }
                //Teste para saber se o campo aceitará somente valores decimais;
                if(strcmp(a->tips[j],Float)==0||strcmp(a->tips[j],Double)==0){
                    scanf("%s",a->element[j][Num_elements-1]);
                    printf("\n");
                    strcpy(Aux8,a->element[j][Num_elements-1]);
                    float_double(Aux8);
                    strcpy(a->element[j][Num_elements-1],Aux8);
                }
                //Teste para saber se o campo aceitará somente 1 caractere;
                if(strcmp(a->tips[j],Char)==0){
                    scanf("%s",a->element[j][Num_elements-1]);
                    printf("\n");
                    strcpy(Aux8,a->element[j][Num_elements-1]);
                    char_only(Aux8);
                    strcpy(a->element[j][Num_elements-1],Aux8);
                }
            }

            //Abrindo o modo escrita dos dois arquivos anteriormente fechados
            Tabelas=fopen(a->cpy,"w");
            Element=fopen(a->cpy2,"w");

            for(j=0;j<Cont_campos;j++){
                free(a->campos[j]);
                free(a->tips[j]);
            }
            free(a->campos);
            free(a->tips);
            for(j=0;j<Cont_campos;j++){
                for(i=0;i<Num_elements;i++){
                    strcpy(Auxiliar,a->element[j][i]);
                    Cifra(Auxiliar);
                    strcpy(a->element[j][i],Auxiliar);
                }
            }
            //Dados enviados da matriz para o arquivo
            for(j=0;j<Cont_campos;j++){
                for(i=0;i<Num_elements;i++){
                    fprintf(Tabelas,"%s\n",a->element[j][i]);
                }
            }
            //Liberando a->element
            for(j=0;j<Cont_campos;j++){
                for(i=0;i<Num_elements;i++){
                    free(a->element[j][i]);
                }free(a->element[j]);
            }free(a->element);
            //Gravando o novo número de elementos da tabela
            fprintf(Element,"%d",Num_elements);
            //Fechando os dois arquivos do modo escrita
            fclose(Tabelas);
            fclose(Element);
            //Teste para saber se o usuário deseja inserir algum outro elemento;
            int Ag=0;
            if(Ag==0){
                printf("Para adicionar outro elemento digite 1\n");
                printf("Para sair digite qualquer outro valor:\n\n");
                scanf("%d",&Ag);
                printf("\n");
            }
            //Se sim a função se chama recursivamente;
            if(Ag==1){
                Elementos(Cont_campos,a);
            }
            free(a->nome);
            free(a->cpy2);
            free(a->cpy);
    //O arquivo ainda não existe pois a tabela ainda não tem dado algum inserido
    }else{
            //Alocando um vetor de string que adicionará apenas a primeira linha da tabela
            a->element_vet=malloc(sizeof(char*)*Cont_campos);
            for(j=0;j<Cont_campos;j++){
                a->element_vet[j]=malloc(sizeof(Nome));
            }
            //Usuário dá entrada nos elementos dos campos da linha a ser criada
            printf("Digite os dados de cada coluna\n");
            printf("Ao fim de cada dado press Enter para inserir:\n\n");
            for(j=0;j<Cont_campos;j++){
                    printf("Digite %s:\n\n",a->campos[j]);
                    //Teste para saber se o campo aceitará somente valores inteiros;
                    if(strcmp(a->tips[j],Int)==0){
                        scanf("%s",a->element_vet[j]);
                        printf("\n");
                        strcpy(Aux8,a->element_vet[j]);
                        int_only(Aux8);
                        strcpy(a->element_vet[j],Aux8);
                    }
                    //Teste para saber se o campo aceitará somente strings;
                    if(strcmp(a->tips[j],String)==0){
                        scanf("%s",a->element_vet[j]);
                        printf("\n");
                        strcpy(Aux8,a->element_vet[j]);
                        string_only(Aux8);
                        strcpy(a->element_vet[j],Aux8);
                    }
                    //Teste para saber se o campo aceitará somente valores decimais;
                    if(strcmp(a->tips[j],Float)==0||strcmp(a->tips[j],Double)==0){
                        scanf("%s",a->element_vet[j]);
                        printf("\n");
                        strcpy(Aux8,a->element_vet[j]);
                        float_double(Aux8);
                        strcpy(a->element_vet[j],Aux8);
                    }
                    //Teste para saber se o campo aceitará somente 1 caractere;
                    if(strcmp(a->tips[j],Char)==0){
                    scanf("%s",a->element_vet[j]);
                    printf("\n");
                    strcpy(Aux8,a->element_vet[j]);
                    char_only(Aux8);
                    strcpy(a->element_vet[j],Aux8);
                }
            }
            //Arquivo de elementos criado no modo de escrita
            Tabelas=fopen(a->cpy,"w");
            //Arquivo de número de elementos criado no modo de escrita
            Element = fopen(a->cpy2,"w");
            int Inicial = 1;
            //Adicionado 1 ao número de elementos
            fprintf(Element,"%d",Inicial);
            for(j=0;j<Cont_campos;j++){
                strcpy(Auxiliar,a->element_vet[j]);
                Cifra(Auxiliar);
                strcpy(a->element_vet[j],Auxiliar);
            }
            //Gravando a linha recém criada
            for(j=0;j<Cont_campos;j++){
                fprintf(Tabelas,"%s\n",a->element_vet[j]);
            }
            for(j=0;j<Cont_campos;j++){
                free(a->element_vet[j]);
                free(a->campos[j]);
            }
            free(a->element_vet);
            //Fechando arquivos do modo de escrita
            fclose(Element);
            fclose(Tabelas);
            //Teste para saber se o usuário deseja inserir algum outro elemento;
            int Ag=0;
            if(Ag==0){
                printf("Para adicionar outro elemento digite 1\n");
                printf("Para sair digite qualquer outro valor:\n\n");
                scanf("%d",&Ag);
                printf("\n");
            }
            //Se sim a função se chama recursivamente;
            if(Ag==1){
                Elementos(Cont_campos,a);
            }
            free(a->nome);
            free(a->cpy2);
            free(a->cpy);
    }

}
//####################
//PARTE 1 - FUNÇÃO 3
//####################

void Linhas_Tabelas(struct tabela *a){
    printf("Digite o nome da tabela:\n");
    //Alocação de memória para o nome da tabela e duas cópias
    a->nome=malloc(sizeof(Nome));
    a->cpy=malloc(sizeof(Nome));
    a->cpy2=malloc(sizeof(Nome));
    //Entrada do nome
    scanf("%s",a->nome);
    //Cifragem do nome
    strcpy(Auxiliar,a->nome);
    Cifra(Auxiliar);
    strcpy(a->nome,Auxiliar);
    //Cópias dos nomes cifrados
    strcpy(a->cpy,a->nome);
    strcpy(a->cpy2,a->nome);
    //Junção dos nomes com extensão
    strcat(a->nome,Aux);
    strcat(a->cpy,Aux3);
    strcat(a->cpy2,Aux7);
    //Abrindo o .txt em modo leitura
    Tabelas = fopen(a->nome,"r");
    //Se a abertura deu certo armazena a quantidade de campos
    //Redireciona para a parte dois da função
    if(Tabelas != NULL){
            fscanf(Tabelas,"%d",&Cont_campos);
            fclose(Tabelas);
            Elementos(Cont_campos,a);
    //Se não deu certo
    //Recursividade pedindo o nome correto da tabela
    }else{
            printf("Tabela Inexistente\n");
            printf("Por favor tente novamente:\n");
            Linhas_Tabelas(a);
    }
}

/*###################################################
#####################################################
########## FUNCAO 4 - LISTAR DADOS DA TABELA ########
#####################################################
###################################################*/

void Mostrar_tabela(struct tabela *a){
    //Alocação para nome da tabela e duas cópias
    a->nome=malloc(sizeof(Nome));
    a->cpy=malloc(sizeof(Nome));
    a->cpy2=malloc(sizeof(Nome));
    printf("Digite o nome da tabela:\n\n");
    //Entrada do nome
    scanf("%s",a->nome);
    printf("\n");
    printf("Tabela:");
    //Impressão do nome não cifrado
    printf("%20s\n\n",a->nome);
    //Cifragem do nome
    strcpy(Auxiliar,a->nome);
    Cifra(Auxiliar);
    strcpy(a->nome,Auxiliar);
    //Cópia do nome cifrado
    strcpy(a->cpy,a->nome);
    strcpy(a->cpy2,a->nome);
    //Junção com a extensão
    strcat(a->nome,Aux);
    strcat(a->cpy,Aux3);
    strcat(a->cpy2,Aux7);
    //Abrindo o .txt da tabela em modo leitura
    Tabelas=fopen(a->nome,"r");
    //Se houve falha na abertura
    //Chamada recursiva dessa mesma função
    if(Tabelas==NULL){
        printf("Tabela não existente!\n");
        Mostrar_tabela(a);
    //Se deu certo
    }else{
        //Armazenamento do número de campos
        fscanf(Tabelas,"%d",&Cont_campos);
        //Fechando o .txt aberto anteriormente
        fclose(Tabelas);
        //Abrindo um .txt com o contador de elementos
        Element=fopen(a->cpy2,"r");
        //Se o .txt não existe redireciona para a função de inserir elementos
        if(Element==NULL){
            printf("Tabela sem elementos!\n");
            printf("Redirecionado para adicionar elementos:\n");
            Elementos(Cont_campos,a);
        //Se deu certo
        }else{
            //Abre o .txt com infirmações da tabela em modo leitura
            Tabelas=fopen(a->nome,"r");
            //Armazena o número de campos
            fscanf(Element,"%d",&Num_elements);
            Aux4=(Cont_campos*2)+2;
            //Array para armazenar tudo que existe no .txt
            a->tipos=malloc(sizeof(char*)*Aux4);
                for(i=0;i<Aux4;i++){
                    a->tipos[i]=malloc(sizeof(Nome));
                }
            //Array para armazenar os campos
            a->campos=malloc(sizeof(char*)*Cont_campos);
                for(i=0;i<Cont_campos;i++){
                    a->campos[i]=malloc(sizeof(Nome));
            }
            //Armazenando tudo da tabela
            for(i=0;i<Aux4;i++){
                    fscanf(Tabelas,"%s",a->tipos[i]);
            }
            Aux5=0;
            //Copiando os campos do array onde tem todas as informações
            //Para o array dos campos da tabela
            for(i=2;i<Cont_campos+2;i++){
                strcpy(a->campos[Aux5],a->tipos[i]);
                Aux5++;
            }
            //Desencriptação dos campos
            for(i=0;i<Cont_campos;i++){
                strcpy(Auxiliar,a->campos[i]);
                Desencriptacao(Auxiliar);
                strcpy(a->campos[i],Auxiliar);
            }
            //Fechando o .txt da tabela
            fclose(Tabelas);
            //Alocação da matriz de strings dos elementos da tabela
            a->element=malloc(sizeof(char*)*Cont_campos);
            for(i=0;i<Cont_campos;i++){
                a->element[i]=malloc(sizeof(char*)*Num_elements);
                        for(j=0;j<Num_elements;j++){
                            a->element[i][j]=malloc(sizeof(Nome));
                        }
            }
            //Abrindo o .txt com os elementos da tabela em modo leitura
            Tabelas=fopen(a->cpy,"r");
            //Armazenando todos os elementos da tabela na matriz de strings
            for(j=0;j<Cont_campos;j++){
                for(i=0;i<Num_elements;i++){
                    fscanf(Tabelas,"%s",a->element[j][i]);
                }
            }
            //Desencriptação dos elementos da tabela
            for(j=0;j<Cont_campos;j++){
                for(i=0;i<Num_elements;i++){
                    strcpy(Auxiliar,a->element[j][i]);
                    Desencriptacao(Auxiliar);
                    strcpy(a->element[j][i],Auxiliar);
                }
            }
            //Imprimindo os campos
            printf("|");
            for(i=0;i<Cont_campos;i++){
                    printf("%20s|",a->campos[i]);
            }

            printf("\n\n");
            //Imprimindo os elementos
            for(i=0;i<Num_elements;i++){
                printf("|");
                for(j=0;j<Cont_campos;j++){
                    printf("%20s|",a->element[j][i]);
                }printf("\n");
            }
        }
    }

}

/*###################################################
#####################################################
############ FUNCAO 5 - PESQUISAR VALOR #############
#####################################################
###################################################*/

//INICIO FUNÇÃO BUSCAR
void Search(struct tabela *a){
    int AA;
    printf("Digite o nome da tabela onde deseja realizar a busca:\n\n");
    //Alocação do array para o nome e duas cópias
    a->nome=malloc(sizeof(Nome));
    a->cpy=malloc(sizeof(Nome));
    a->cpy2=malloc(sizeof(Nome));
    //Entrada do nome
    scanf("%s",a->nome);
    //Cifragem do nome
    strcpy(Auxiliar,a->nome);
    Cifra(Auxiliar);
    strcpy(a->nome,Auxiliar);
    printf("\n");
    //Cópias do nome cifrado
    strcpy(a->cpy,a->nome);
    strcpy(a->cpy2,a->nome);
    //Junção com a extensão
    strcat(a->nome,Aux);
    strcat(a->cpy,Aux3);
    strcat(a->cpy2,Aux7);
    //Abrindo em modo de leitura
    Tabelas=fopen(a->nome,"r");
    //Se não existe o .txt
    //A tabela não existe
    if(Tabelas==NULL){
        printf("Tabela não existe!\n");
    //Se o .txt foi aberto
    }else{
        //Armazenamento da quantidade de campos da tabela
        fscanf(Tabelas,"%d",&Cont_campos);
        //Fecha o .txt aberto anteriormente
        fclose(Tabelas);
        Aux4=(Cont_campos*2)+2;
        //Alocação de array para armazenar tudo escrito no .txt da tabela
        a->tips=malloc(sizeof(char*)*Aux4);
            for(i=0;i<Aux4;i++){
                a->tips[i]=malloc(sizeof(Nome));
            }
        //Alocação para array de campos
        a->campos=malloc(sizeof(char*)*Cont_campos);
            for(i=0;i<Cont_campos;i++){
                a->campos[i]=malloc(sizeof(Nome));
            }
        //Alocação para o array de tipos
        a->tipos=malloc(sizeof(char*)*Cont_campos);
            for(i=0;i<Cont_campos;i++){
                a->tipos[i]=malloc(sizeof(Nome));
            }
        //Abertura do .txt da tabela em modo leitura
        Tabelas=fopen(a->nome,"r");
        //Armazenamento de tudo escrito no .txt
        for(i=0;i<Aux4;i++){
            fscanf(Tabelas,"%s",a->tips[i]);
        }
        Aux5=0;
        //Cópia dos campos
        for(i=2;i<Cont_campos+2;i++){
            strcpy(a->campos[Aux5],a->tips[i]);
            Aux5++;
        }
        //Desencriptação dos campos
        for(i=0;i<Cont_campos;i++){
            strcpy(Auxiliar,a->campos[i]);
            Desencriptacao(Auxiliar);
            strcpy(a->campos[i],Auxiliar);
        }
        Aux5=0;
        //Cópia dos tipos dos campos
        for(i=Cont_campos+2;i<Aux4;i++){
            strcpy(a->tipos[Aux5],a->tips[i]);
            Aux5++;
        }
        //Desencriptação dos tipos
        for(i=0;i<Cont_campos;i++){
            strcpy(Auxiliar,a->tipos[i]);
            Desencriptacao(Auxiliar);
            strcpy(a->tipos[i],Auxiliar);
        }
        //Fechando o .txt
        fclose(Tabelas);
        //Liberando array
        for(i=0;i<Aux4;i++){
            free(a->tips[i]);
        }
        free(a->tips);
        //Abrindo .txt com o número de elementos da tabela em modo leitura
        Element=fopen(a->cpy2,"r");
        //Se não existe imprime a mensagem
        if(Element==NULL){
            printf("Tabela sem elementos\n");
        //Se foi aberto
        }else{
            //Abre o .txt com os elementos da tabela em modo leitura
            Tabelas=fopen(a->cpy,"r");
            //Armazena o número de elementos
            fscanf(Element,"%d",&Num_elements);
            //Fecha o .txt com o número de elementos
            fclose(Element);
            //Alocação da matriz de strings
            a->element=malloc(sizeof(char*)*Cont_campos);
            for(i=0;i<Cont_campos;i++){
                a->element[i]=malloc(sizeof(char*)*Num_elements);
                        for(j=0;j<Num_elements;j++){
                            a->element[i][j]=malloc(sizeof(Nome));
                        }
            }
            //Armazenamento de todos os elementos
            for(j=0;j<Cont_campos;j++){
                for(i=0;i<Num_elements;i++){
                    fscanf(Tabelas,"%s",a->element[j][i]);
                }
            }
            //Desencriptação dos elementos
            for(j=0;j<Cont_campos;j++){
                for(i=0;i<Num_elements;i++){
                    strcpy(Auxiliar,a->element[j][i]);
                    Desencriptacao(Auxiliar);
                    strcpy(a->element[j][i],Auxiliar);
                }
            }
            //Imprime os campos
            for(i=0;i<Cont_campos;i++){
                printf("%s\n\n",a->campos[i]);
            }
            printf("Insira a coluna onde deseja realizar a busca:\n\n");
            //Entrada para o campo desejado
            scanf("%s",Aux8);
            printf("\n");
            int FF,II=0;
            //Comparaçãao do tipo digitado com os existentes
            //Se foi encontrado a variável FF recebe a coluna j
            //II incrementa e sai do laço condicional
            for(j=0;j<Cont_campos;j++){
                    if(strcmp(Aux8,a->campos[j])==0){
                        FF=j;
                        II++;
                    }
            }
            //Se não foi encontrado resultado na comparação
            //o laço condicional fica pedindo entradas
            while(II==0){
                printf("Coluna inexistente!\n");
                printf("Digite novamente:\n\n");
                scanf("%s",Aux8);
                printf("\n");
                for(j=0;j<Cont_campos;j++){
                    if(strcmp(Aux8,a->campos[j])==0){
                        FF=j;
                        II++;
                    }
                }
            }
            //Comparação do tipo na mesma coluna pesquisada
            //Para saber qual é o tipo da coluna
            //Se for tipo int
            if(strcmp(a->tipos[FF],Int)==0){
                AA=0;
                int*Vetor_int;
                int Pesquisa;
                int Delta;
                //Alocação do vetor de inteiros
                Vetor_int=malloc(sizeof(int)*Num_elements);
                //Atribuição do vetor de strings com esses números para inteiros
                for(i=0;i<Num_elements;i++){
                    Vetor_int[i]=atoi(a->element[FF][i]);
                }
                //Tipos de buscas
                printf("Coluna %s selecionada\n",a->campos[FF]);
                printf("Coluna tipo int\n");
                printf("Tipo de busca suportado:\n");
                printf("->Buscar valores maiores que o valor informado\n");
                printf("->Buscar valores maiores ou igual ao valor informado\n");
                printf("->Buscar valores menores que o valor informado\n");
                printf("->Buscar valores menores ou igual ao valor informado\n");
                printf("->Buscar valores iguais ao valor informado\n\n");
                //Laço condicional para aceitar um das buscas
                while(Delta!=1&&Delta!=2&&Delta!=3&&Delta!=4&&Delta!=5){
                    printf("Insira 1 para o primeiro tipo de busca\n");
                    printf("Insira 2 para o segundo tipo de busca\n");
                    printf("Insira 3 para o terceiro tipo de busca\n");
                    printf("Insira 4 para o quarto tipo de busca\n");
                    printf("Insira 5 para o quinto tipo de busca\n\n");
                    scanf("%d",&Delta);
                    printf("\n");
                }
                //Se entrou no primeiro tipo
                if(Delta==1){
                    printf("Digite o valor que deseja buscar:\n\n");
                    //Entrada do valor
                    scanf("%d",&Pesquisa);
                    printf("\n");
                    printf("|");
                    //Imprimindo os campos
                    for(i=0;i<Cont_campos;i++){
                        printf("%20s|",a->campos[i]);
                    }
                    printf("\n\n");
                    //Comparação e impressão dos elementos das linhas correspondentes à pesquisa
                    for(i=0;i<Num_elements;i++){
                        if(Pesquisa<Vetor_int[i]){
                            printf("|");
                            for(j=0;j<Cont_campos;j++){
                                printf("%20s|",a->element[j][i]);
                                AA++;
                            }printf("\n");
                        }
                    }
                    //Se não foram encontrados resultados imprime a mensagem
                    if(AA==0){
                        printf("Não foram encontrados resultados\n");
                    }
                }
                if(Delta==2){
                    printf("Digite o valor que deseja buscar:\n\n");
                    //Entrada do valor
                    scanf("%d",&Pesquisa);
                    printf("\n");
                    printf("|");
                    //Imprime os campos da tabela
                    for(i=0;i<Cont_campos;i++){
                        printf("%20s|",a->campos[i]);
                    }
                    printf("\n\n");
                    //Comparação e impressão das linhas correspondentes
                    for(i=0;i<Num_elements;i++){
                        if(Pesquisa<=Vetor_int[i]){
                            printf("|");
                            for(j=0;j<Cont_campos;j++){
                                printf("%20s|",a->element[j][i]);
                                AA++;
                            }printf("\n");
                        }
                    }
                    //Se não foram encontrados resultados imprime a mensagem
                    if(AA==0){
                        printf("Não foram encontrados resultados\n");
                    }
                }
                if(Delta==3){
                    printf("Digite o valor que deseja buscar:\n\n");
                    //Entrada do valor
                    scanf("%d",&Pesquisa);
                    printf("\n");
                    printf("|");
                    //Imprime os campos da tabela
                    for(i=0;i<Cont_campos;i++){
                        printf("%20s|",a->campos[i]);
                    }
                    printf("\n\n");
                    //Comparação e impressão das linhas correspondentes
                    for(i=0;i<Num_elements;i++){
                        if(Pesquisa>Vetor_int[i]){
                            printf("|");
                            for(j=0;j<Cont_campos;j++){
                                printf("%20s|",a->element[j][i]);
                                AA++;
                            }printf("\n");
                        }
                    }
                    //Se não foram encontrados resultados imprime a mensagem
                    if(AA==0){
                        printf("Não foram encontrados resultados\n");
                    }
                }
                if(Delta==4){
                    printf("Digite o valor que deseja buscar:\n\n");
                    //Entrada do valor
                    scanf("%d",&Pesquisa);
                    printf("\n");
                    printf("|");
                    //Imprime os campos da tabela
                    for(i=0;i<Cont_campos;i++){
                        printf("%20s|",a->campos[i]);
                    }
                    printf("\n\n");
                    //Comparação e impressão das linhas correspondentes
                    for(i=0;i<Num_elements;i++){
                        if(Pesquisa>=Vetor_int[i]){
                            printf("|");
                            for(j=0;j<Cont_campos;j++){
                                printf("%20s|",a->element[j][i]);
                                AA++;
                            }printf("\n");
                        }
                    }
                    //Se não foram encontrados resultados imprime a mensagem
                    if(AA==0){
                        printf("Não foram encontrados resultados\n");
                    }
                }
                if(Delta==5){
                    printf("Digite o valor que deseja buscar:\n\n");
                    //Entrada do valor
                    scanf("%d",&Pesquisa);
                    printf("\n");
                    printf("|");
                    //Imprime os campos da tabela
                    for(i=0;i<Cont_campos;i++){
                        printf("%20s|",a->campos[i]);
                    }
                    printf("\n\n");
                    //Comparação e impressão das linhas correspondentes
                    for(i=0;i<Num_elements;i++){
                        if(Pesquisa==Vetor_int[i]){
                            printf("|");
                            for(j=0;j<Cont_campos;j++){
                                printf("%20s|",a->element[j][i]);
                                AA++;
                            }printf("\n");
                        }
                    }
                    //Se não foram encontrados resultados imprime a mensagem
                    if(AA==0){
                        printf("Não foram encontrados resultados\n");
                    }
                }
            }
            if(strcmp(a->tipos[FF],Float)==0||strcmp(a->tipos[FF],Double)==0){
                AA=0;
                float*Vetor_float_double;
                float Pesquisa2;
                int Delta2;
                //Alocação de vetor float para os elementos da coluna
                Vetor_float_double=malloc(sizeof(int)*Num_elements);
                //Atribuição dos valores do array de strings para o array float
                for(i=0;i<Num_elements;i++){
                    Vetor_float_double[i]=atof(a->element[FF][i]);
                }
                printf("Coluna %s selecionada\n",a->campos[FF]);
                printf("Coluna tipo float ou double\n");
                printf("Tipo de busca suportado:\n");
                printf("->Buscar valores maiores que o valor informado\n");
                printf("->Buscar valores maiores ou igual ao valor informado\n");
                printf("->Buscar valores menores que o valor informado\n");
                printf("->Buscar valores menores ou igual ao valor informado\n");
                printf("->Buscar valores iguais ao valor informado\n\n");
                while(Delta2!=1&&Delta2!=2&&Delta2!=3&&Delta2!=4&&Delta2!=5){
                    printf("Insira 1 para o primeiro tipo de busca\n");
                    printf("Insira 2 para o segundo tipo de busca\n");
                    printf("Insira 3 para o terceiro tipo de busca\n");
                    printf("Insira 4 para o quarto tipo de busca\n");
                    printf("Insira 5 para o quinto tipo de busca\n\n");
                    scanf("%d",&Delta2);
                    printf("\n");
                }
                if(Delta2==1){
                    printf("Digite o valor que deseja buscar:\n\n");
                    //Entrada do valor
                    scanf("%f",&Pesquisa2);
                    printf("\n");
                    printf("|");
                    //Imprime os campos da tabela
                    for(i=0;i<Cont_campos;i++){
                        printf("%20s|",a->campos[i]);
                    }
                    printf("\n\n");
                    //Comparação e impressão das linhas correspondentes
                    for(i=0;i<Num_elements;i++){
                        if(Pesquisa2<Vetor_float_double[i]){
                            printf("|");
                            for(j=0;j<Cont_campos;j++){
                                printf("%20s|",a->element[j][i]);
                                AA++;
                            }printf("\n");
                        }
                    }
                    //Se não foram encontrados resultados imprime a mensagem
                    if(AA==0){
                        printf("Não foram encontrados resultados\n");
                    }
                }
                if(Delta2==2){
                    printf("Digite o valor que deseja buscar:\n\n");
                    //Entrada do valor
                    scanf("%f",&Pesquisa2);
                    printf("\n");
                    printf("|");
                    //Imprime os campos da tabela
                    for(i=0;i<Cont_campos;i++){
                        printf("%20s|",a->campos[i]);
                    }
                    printf("\n\n");
                    //Comparação e impressão das linhas correspondentes
                    for(i=0;i<Num_elements;i++){
                        if(Pesquisa2<=Vetor_float_double[i]){
                            printf("|");
                            for(j=0;j<Cont_campos;j++){
                                printf("%20s|",a->element[j][i]);
                                AA++;
                            }printf("\n");
                        }
                    }
                    //Se não foram encontrados resultados imprime a mensagem
                    if(AA==0){
                        printf("Não foram encontrados resultados\n");
                    }
                }
                if(Delta2==3){
                    printf("Digite o valor que deseja buscar:\n\n");
                    //Entrada do valor
                    scanf("%f",&Pesquisa2);
                    printf("\n");
                    printf("|");
                    //Imprime os campos da tabela
                    for(i=0;i<Cont_campos;i++){
                        printf("%20s|",a->campos[i]);
                    }
                    printf("\n\n");
                    //Comparação e impressão das linhas correspondentes
                    for(i=0;i<Num_elements;i++){
                        if(Pesquisa2>Vetor_float_double[i]){
                            printf("|");
                            for(j=0;j<Cont_campos;j++){
                                printf("%20s|",a->element[j][i]);
                                AA++;
                            }printf("\n");
                        }
                    }
                    //Se não foram encontrados resultados imprime a mensagem
                    if(AA==0){
                        printf("Não foram encontrados resultados\n");
                    }
                }
                if(Delta2==4){
                    printf("Digite o valor que deseja buscar:\n\n");
                    //Entrada do valor
                    scanf("%f",&Pesquisa2);
                    printf("\n");
                    printf("|");
                    //Imprime os campos da tabela
                    for(i=0;i<Cont_campos;i++){
                        printf("%20s|",a->campos[i]);
                    }
                    printf("\n\n");
                    //Comparação e impressão das linhas correspondentes
                    for(i=0;i<Num_elements;i++){
                        if(Pesquisa2>=Vetor_float_double[i]){
                            printf("|");
                            for(j=0;j<Cont_campos;j++){
                                printf("%20s|",a->element[j][i]);
                                AA++;
                            }printf("\n");
                        }
                    }
                    //Se não foram encontrados resultados imprime a mensagem
                    if(AA==0){
                        printf("Não foram encontrados resultados\n");
                    }
                }
                if(Delta2==5){
                    printf("Digite o valor que deseja buscar:\n\n");
                    //Entrada do valor
                    scanf("%f",&Pesquisa2);
                    printf("\n");
                    printf("|");
                    //Imprime os campos da tabela
                    for(i=0;i<Cont_campos;i++){
                        printf("%20s|",a->campos[i]);
                    }
                    printf("\n\n");
                    //Comparação e impressão das linhas correspondentes
                    for(i=0;i<Num_elements;i++){
                        if(Pesquisa2==Vetor_float_double[i]){
                            printf("|");
                            for(j=0;j<Cont_campos;j++){
                                printf("%20s|",a->element[j][i]);
                                AA++;
                            }printf("\n");
                        }
                    }
                    //Se não foram encontrados resultados imprime a mensagem
                    if(AA==0){
                        printf("Não foram encontrados resultados\n");
                    }
                }
            }
            if(strcmp(a->tipos[FF],Char)==0){
                AA=0;
                char EE[2];
                printf("Coluna %s selecionada\n",a->campos[FF]);
                printf("Coluna tipo char\n");
                printf("Tipo de busca suportado:\n");
                printf("->Buscar caracteres iguais a outros existentes na tabela\n");
                printf("Insira o caractere que deseja buscar na coluna:\n\n");
                //Imprime os campos da tabela
                scanf("%s",DD);
                printf("\n");
                //Manda a entrada pra ser confirmada que é um caractere afabético
                char_only_v2(DD);
                printf("|");
                for(i=0;i<Cont_campos;i++){
                    printf("%20s|",a->campos[i]);
                }
                printf("\n\n");
                //Comparação e impressão das linhas correspondentes
                for(i=0;i<Num_elements;i++){
                    strcpy(EE,a->element[FF][i]);
                    for(g=0;g<1;g++){
                        if(strcmp(EE,DD)==0){
                            printf("|");
                            for(j=0;j<Cont_campos;j++){
                                printf("%20s|",a->element[j][i]);
                                AA++;
                            }
                        printf("\n");
                        }
                    }
                }
                //Se não foram encontrados resultados imprime a mensagem
                if(AA==0){
                    printf("Não foram encontrados resultados\n");
                }
            }
            if(strcmp(a->tipos[FF],String)==0){
                AA=0;
                int Con=3;
                char Temp[20];
                char Temp2[20];
                printf("Coluna %s selecionada\n",a->campos[FF]);
                printf("Coluna tipo string\n");
                printf("Tipo de busca suportado:\n");
                printf("->Buscar strings iguais a outras existentes na tabela\n");
                printf("->Buscar strings próximas de outras existentes\n");
                while(Con!=1&&Con!=2){
                        printf("Insira 1 para o primeiro tipo de busca, ou 2 para o segundo tipo de busca:\n\n");
                        scanf("%d",&Con);
                        printf("\n");
                }
                if(Con==1){
                    printf("Insira a string que deseja buscar na coluna:\n\n");
                    //Entrada da string buscada
                    scanf("%s",Temp);
                    printf("\n");
                    //Confirmação que é uma string com apenas letras
                    string_only(Temp);
                    printf("|");
                    //Impressão dos campos
                    for(i=0;i<Cont_campos;i++){
                        printf("%20s|",a->campos[i]);
                    }
                    printf("\n\n");
                    //Comparação e impressão das linhas correspondentes
                    for(i=0;i<Num_elements;i++){
                        if(strcmp(Temp,a->element[FF][i])==0){
                            printf("|");
                            for(j=0;j<Cont_campos;j++){
                                printf("%20s|",a->element[j][i]);
                                AA++;
                            }
                        }
                    }
                    //Se não foram encontrados resultados imprime a mensagem
                    if(AA==0){
                        printf("Não foram encontrados resultados\n");
                    }
                }else{
                    char*ret;
                    printf("Insira a parte da string que deseja buscar:\n");
                    printf("OBSERVAÇÂO:\n");
                    printf("Leve em consideração que o sistema reconhece a diferença\n");
                    printf("entre caracteres maiúsculos e minúsculos\n\n");
                    //Entrada da string
                    scanf("%s",Temp);
                    printf("\n");
                    //Confirmação de que a string tem apenas letras
                    string_only(Temp);
                    printf("|");
                    //Impressão das colunas
                    for(i=0;i<Cont_campos;i++){
                        printf("%20s|",a->campos[i]);
                    }
                    printf("\n\n");
                    //Comparação e impressão das linhas correspondentes
                    for(i=0;i<Num_elements;i++){
                        strcpy(Temp2,a->element[FF][i]);
                        ret=strstr(Temp2,Temp);
                        if(ret!=NULL){
                            printf("|");
                            for(j=0;j<Cont_campos;j++){
                                printf("%20s|",a->element[j][i]);
                                AA++;
                            }printf("\n");
                        }
                    }
                    //Se não foram encontrados resultados imprime a mensagem
                    if(AA==0){
                        printf("Não foram encontrados resultados\n");
                    }
                }

            }
        }
    }
}

/*###################################################
#####################################################
########### FUNCAO 6 - DELETAR VALOR    #############
#####################################################
###################################################*/

void Remover_linhas(struct tabela *a){
    //Alocação do array para o nome e duas cópias
    a->nome=malloc(sizeof(Nome));
    a->cpy=malloc(sizeof(Nome));
    a->cpy2=malloc(sizeof(Nome));
    printf("Insira o nome da tabela:\n\n");
    //Entrada do nome
    scanf("%s",a->nome);
    //Cifragem do nome
    strcpy(Auxiliar,a->nome);
    Cifra(Auxiliar);
    strcpy(a->nome,Auxiliar);
    printf("\n");
    //Cópias do nome cifrado
    strcpy(a->cpy,a->nome);
    strcpy(a->cpy2,a->nome);
    //Junção nome com sua extensão
    strcat(a->nome,Aux);
    strcat(a->cpy,Aux3);
    strcat(a->cpy2,Aux7);
    //Abrindo .txt da tabela em modo leitura
    Tabelas = fopen(a->nome,"r");
    //Se a abertura funcionou
    if(Tabelas != NULL){
            //Armazena a quantidade de campos
            fscanf(Tabelas,"%d",&Cont_campos);
            //Fecha o .txt
            fclose(Tabelas);
            //Abrindo .txt com os elementos da tabela
            Tabelas = fopen(a->cpy,"r");
                //Se o .txt não foi aberto é mostrada a mensagem
                if(Tabelas==NULL){
                    printf("Tabela existe, porém não tem qualquer coisa escrito\n");
                //Se deu certo
                }else{
                    //Abre o .txt com a quantidade de elementos em modo leitura
                    Element=fopen(a->cpy2,"r");
                    //Armazena a quantidade de elementos
                    fscanf(Element,"%d",&Num_elements);
                    //Fecha o .txt com número de elementos da tabela
                    fclose(Element);
                    //Alocação matriz de elementos
                    a->element=malloc(sizeof(char*)*Cont_campos);
                    for(i=0;i<Cont_campos;i++){
                        a->element[i]=malloc(sizeof(char*)*Num_elements);
                            for(j=0;j<Num_elements;j++){
                                a->element[i][j]=malloc(sizeof(Nome));
                            }
                    }
                    //Alocação de matriz auxiliar de elementos
                    a->element_aux=malloc(sizeof(char*)*Cont_campos);
                    for(i=0;i<Cont_campos;i++){
                        a->element_aux[i]=malloc(sizeof(char*)*Num_elements);
                            for(j=0;j<Num_elements;j++){
                                a->element_aux[i][j]=malloc(sizeof(Nome));
                            }
                    }
                    //Armazenamento dos elementos da tabela
                    for(j=0;j<Cont_campos;j++){
                        for(i=0;i<Num_elements;i++){
                            fscanf(Tabelas,"%s",a->element[j][i]);
                        }
                    }
                    //Desencriptação dos elementos
                    for(j=0;j<Cont_campos;j++){
                        for(i=0;i<Num_elements;i++){
                            strcpy(Auxiliar,a->element[j][i]);
                            Desencriptacao(Auxiliar);
                            strcpy(a->element[j][i],Auxiliar);
                        }
                    }
                    //Fecha o .txt de elementos
                    fclose(Tabelas);
                    printf("Digite a chave primária do elemento que deseja excluir:\n");
                    printf("A função só terá continuidade mediante inserção de chave existente\n\n");
                    int F=0;
                    //Laço condicional para inserção de chave primária existente
                    while(F==0){
                        scanf("%s",Aux8);
                        printf("\n");
                        for(i=0;i<Num_elements;i++){
                            if(strcmp(a->element[0][i],Aux8)==0){
                                F++;
                            }
                        }
                        if(F==0){
                            printf("Chave inserida inexistente!\n\n");
                        }
                    }
                    int JJ;
                    //Comparação de chave inserida com as demais
                    //JJ recebe o numero da linha i
                    for(i=0;i<Num_elements;i++){
                        if(strcmp(a->element[0][i],Aux8)==0){
                            JJ=i;
                        }
                    }
                    //Comparador para inserir todos os elementos que não estejam na linha i
                    //Na matriz auxiliar
                    //A linha i recebe NULL
                    for(j=0;j<Cont_campos;j++){
                        for(i=0;i<Num_elements;i++){
                            if(i!=JJ){
                                strcpy(a->element_aux[j][i],a->element[j][i]);
                            }else{
                                a->element_aux[j][i]="NULL";
                            }
                        }
                    }
                    //Abertura do .txt dos elementos em modo de escrita
                    Tabelas=fopen(a->cpy,"w");
                    //Comparador para imprimir tudo que tenha na matriz que seja diferente de NULL
                    //Imprime tudo no .txt cifrado
                    for(j=0;j<Cont_campos;j++){
                        for(i=0;i<Num_elements;i++){
                            if(strcmp(a->element_aux[j][i],Aux9)!=0){
                                strcpy(Auxiliar,a->element_aux[j][i]);
                                Cifra(Auxiliar);
                                strcpy(a->element_aux[j][i],Auxiliar);
                                fprintf(Tabelas,"%s\n",a->element_aux[j][i]);
                            }
                        }
                    }
                    //Fecha o .txt
                    fclose(Tabelas);
                    //Libera ambas as matrizes
                    for(j=0;j<Cont_campos;j++){
                        for(i=0;i<Num_elements;i++){
                            free(a->element[j][i]);
                            free(a->element_aux[j][i]);
                        }
                        free(a->element[j]);
                        free(a->element_aux[j]);
                    }
                    free(a->element);
                    free(a->element_aux);
                    //Decrementa 1 do número de elementos
                    Num_elements=Num_elements-1;
                    //Abre o .txt com o número de elementos no modo de escrita
                    Element=fopen(a->cpy2,"w");
                    //Imprime o novo número de elementos
                    fprintf(Element,"%d",Num_elements);
                    //Fecha o .txt
                    fclose(Element);
                    //Libera os demais arrays
                    free(a->nome);
                    free(a->cpy);
                    free(a->cpy2);
                    printf("Elemento deletado!\n");
                }
    //Se não existe o .txt, imprime as mensagens
    //Chama recursivamente a mensa função
    }else{
            printf("Tabela Inexistente\n");
            printf("Por favor tente novamente:\n");
            Remover_linhas(a);
    }
}

/*###################################################
#####################################################
########## FUNCAO 7 - DELETAR TABELA   ##############
#####################################################
###################################################*/

void Deletar(struct tabela *a){
    printf("Digite o nome da tabela que deseja apagar:\n\n");
    //Alocação do array para o nome e duas cópias
    a->nome=malloc(sizeof(Nome));
    a->cpy=malloc(sizeof(Nome));
    a->cpy2=malloc(sizeof(Nome));
    //Entrada do nome
    scanf("%s",a->nome);
    printf("\n");
    //Cifragem do nome
    strcpy(Aux8,a->nome);
    strcpy(Auxiliar,a->nome);
    Cifra(Auxiliar);
    strcpy(a->nome,Auxiliar);
    //Cópias do nome cifrado
    strcpy(a->cpy,a->nome);
    strcpy(a->cpy2,a->nome);
    //Junção do nome com extensão
    strcat(a->nome,Aux);
    strcat(a->cpy2,Aux7);
    strcat(a->cpy,Aux3);
    //Abertura do .txt em modo leitura
    Tabelas=fopen(a->nome,"r");
    //Se não existe o .txt, imprime a mensagem
    if(Tabelas==NULL){
        printf("Tabela não existe!\n");
    //Se existe
    }else{
        char Verificador[4];
        char Comparador[]="SIM";
        printf("Deseja realmente apagar a tabela %s?\n",Aux8);
        printf("Uma vez apagada todos os dados são irrecuperáveis!\n\n");
        printf("Se realmente deseja apagar a tabela digite SIM\n\n");
        //Entrada para o verificador
        scanf("%s",Verificador);
        printf("\n");
        //Mudando a fonte para caixa alta se necessário
        for(i=0;i<4;i++){
            Verificador[i]=toupper(Verificador[i]);
        }
        //Se o verificador foi positivo para deletar a tabela
        if(strcmp(Verificador,Comparador)==0){
            //Fechando o .txt
            fclose(Tabelas);
            //Removendo todos os .txt relacionados com aquela tabela
            remove(a->nome);
            remove(a->cpy);
            remove(a->cpy2);
        //Se foi negativo, imprime a mensagem
        }else{
            printf("Cancelado!\n");
        }
    //Abrindo .txt com o número de tabelas
    Contador_Lista_Tab = fopen(Aux10,"r");
    //Armazenando o número de tabelas
    fscanf(Contador_Lista_Tab,"%d",&Cont_List_Tab);
    //Fechando o .txt
    fclose(Contador_Lista_Tab);
    //Abrindo o .txt com os nomes das tabelas
    Lista_Tab = fopen(Aux11, "r");
    //Alocando array de strings
    a->tips=malloc(sizeof(char*)*Cont_List_Tab);
        for(i=0;i<Cont_List_Tab;i++){
            a->tips[i]=malloc(sizeof(Nome));
        }
        //Armazenando os nomes de todas as tabelas
        for(i=0;i<Cont_List_Tab;i++){
            fscanf(Lista_Tab,"%s",a->tips[i]);
        }
        //Desencriptação dos nomes
        for(i=0;i<Cont_List_Tab;i++){
            strcpy(Auxiliar,a->tips[i]);
            Desencriptacao(Auxiliar);
            strcpy(a->tips[i],Auxiliar);
        }
    //Fechando o .txt
    fclose(Lista_Tab);
    //Abrindo o .txt com os nomes das tabelas em modo de escrita
    Lista_Tab = fopen(Aux11,"w");
    //Comparador com o nome da tabela que foi deletada
    //Cifragem dos nomes e impressão no .txt sem o nome da tabela deletada
    for(i=0;i<Cont_List_Tab;i++){
        if(strcmp(a->tips[i],Aux8)!=0)
            strcpy(Auxiliar,a->tips[i]);
            Cifra(a->tips[i]);
            strcpy(a->tips[i],Auxiliar);
            fprintf(Lista_Tab,"%s\n",a->tips[i]);
        }
    //Fechando o .txt
    fclose(Lista_Tab);
    //Contador de tabelas decrementado em 1
    Cont_List_Tab=Cont_List_Tab-1;
    //Abrindo o .txt com o contador de tabelas no modo de escrita
    Contador_Lista_Tab = fopen(Aux10, "w");
    //Imprimindo novo número de tabelas
    fprintf(Contador_Lista_Tab,"%d",Cont_List_Tab);
    //Fechando .txt
    fclose(Contador_Lista_Tab);
    //Se o contador de tabelas for 0
    //Remove tambem os .txt com a quantidade e nomes de tabelas
    if(Cont_List_Tab==0){
        remove(Aux10);
        remove(Aux11);

    }
    //Liberando array com os nomes das tabelas
    for(i=0;i<Cont_List_Tab+1;i++){
        free(a->tips[i]);
    }
    free(a->tips);
        }
    }


