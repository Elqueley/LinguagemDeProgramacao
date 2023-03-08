#include <stdio.h>
typedef struct p
{
	char nome[25];
	int idade;
	float salario;
	char cargo[10];
}pessoa;

void menu();
void cadastar(pessoa p[10],int i);
void imprimir(pessoa p[10],int i);

int main(int argc, char const *argv[])
{
	pessoa p[10];
	int i=0,op;
	do{
		menu();
		scanf("%d",&op);
		switch(op){
			case 1:
				cadastar(p,i);
				i++;
				break;
			case 2:
				imprimir(p,i);
				break;
			
		}
	
	}while(op!=0);

	return 0;
}

void cadastar(pessoa p[10],int i)
{
	printf("Nome: ");
	scanf("%s",p[i].nome);
	printf("Idade: ");
	scanf("%d",&p[i].idade);
	printf("Salario: ");
	scanf("%f",&p[i].salario);
	printf("Cargo: ");
	scanf("%s",p[i].cargo);
}

void imprimir(pessoa p[10],int i){
	int j;
	for (j= 0; j < i; ++j)
	{
		printf("\n\n----------------\n");
		printf("Nome: %s\n", p[j].nome);
		printf("Idade: %d\n", p[j].idade);
		printf("Salario: %.2f\n", p[j].salario);
		printf("Cargo: %s\n", p[j].cargo);

	}
}

void menu()
{
	printf("\n\n--------Menu--------\n");
	printf("1) Cadastar\n");
	printf("2) Listar\n");
	printf("0) Sair\n");

}
