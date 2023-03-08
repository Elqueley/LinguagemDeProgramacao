#include <stdio.h>

typedef struct p {
	char turno [30];
	int numero;
	int semestre;
	
}turma;

void menu();
void cadastrar (turma t[10], int i);
void listar (turma t[10], int i);

int main(){
	turma t[10];
	int i=0,op;
	do{
		menu();
		scanf("%i",&op);
		switch(op){
			case 1:
				cadastar(t,i);
				i++;
				break;
			case 2:
				imprimir(t,i);
				break;
			
		}
	
	}while(op!=0);

	return 0;
	
	
}

void cadastrar (turma t[10], int i){
		
	 	printf("Turno: \n");
	 	scanf("%[^\n]s",t[i].turno);
	 	
	 	printf("Numero: \n");
	 	scanf("%i", &t[i].numero);
	 	
		printf("Semestre: \n");
		scanf("%i",&t[i].semestre); 	
}

void listar (turma t[10], int i){
	 int j;
	 
	 for(j = 0; j < i; i++){
	 	printf("------------------\n");
	 	printf("Turno: %s \n", t[i].turno);
	 	printf("Numero: %i \n", &t[i].numero);
	 	printf("Semestre: %i \n", &t[i].semestre);
	 	
	 }		
}

void menu()
{
	printf("\n\n--------Menu--------\n");
	printf("1) Cadastar\n");
	printf("2) Listar\n");
	printf("0) Sair\n");

}



