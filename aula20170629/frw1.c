#include <stdio.h>
#include <stdlib.h>
#define MAXCHAR 256

void captura(char * nome, int * p_idade_em_anos, float * p_altura_em_metros){
	
	printf("Entre com o nome:");
	fgets(nome,MAXCHAR,stdin);
	printf("Entre com a idade [anos]: ");
	scanf("%d", &p_idade_em_anos); 
	printf("Entre com a altura [metros]: ");
	scanf("%f", &p_altura_em_metros); 
}

void mostra(char * nome, int idade_em_anos, float altura_em_metros){
	printf("%s, %d anos, %f metros. \n", nome, idade_em_anos, altura_em_metros);
}

void gravar(){
	char nome[MAXCHAR];
	int idade_em_anos;
	float altura_em_metros;
	FILE * arquivo = NULL;
	arquivo = fopen("info.txt", "w");
	
	if(arquivo == NULL){
		fprint(stderr, "Problema na gravacao\n");
		exit(EXIT_FAILURE);
	}
	
	captura(nome, &idade_em_anos, &altura_em_metros);
	
	fprintf(arquivo, "%s %d\n %f\n", nome, idade_em_anos, altura_em_metros);
	fclose(arquivo);
}

void recuperar(){
	char nome[MAXCHAR];
	int idade_em_anos;
	float altura_em_metros;
	FILE * arquivo = NULL;
	arquivo = fopen("info.txt", "r");
	
	if(arquivo == NULL){
		fprint(stderr, "Arquivo inexistente\n");
		exit(EXIT_FAILURE);
	}
	
	fgets(nome, MAXCHAR, arquivo);
	fscanf(arquivo,"%d", &idade_em_anos);
	fscanf(arquivo,"%f", &altura_em_metros);
	mostra(nome, idade_em_anos, altura_em_metros);
	fclose(arquivo);
}

void menu (){
	int opc; char c;
	printf("1 - Gravar\n");
	printf("2 - Recuperar\n");
	printf("\n Digite sua opcao: ");
	scanf("%d", &opc); while (!(c=getchar()));
	
	if(opc == 1) gravar();
	else recuperar();
}

int main (){
	
	menu();
	
	return EXIT_SUCCESS;
}
