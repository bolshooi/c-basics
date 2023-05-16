#include <stdio.h>
#include <locale.h>
#include <string.h>

void cadastro(char y[20][100], int z[20], float x[20]){
	int i;
	for (i = 0; i < 20; i++){
		fflush(stdin);
		printf("\nDigite o nome do funcion�rio[%d]: ", i + 1);
		gets(y[i]);
		printf("Digite a idade do funcion�rio[%d]: ", i + 1);
		scanf("%d", &z[i]);
		printf("Digite o sal�rio do funcion�rio[%d]: ", i + 1);
		scanf("%f", &x[i]);
	}
}

void exibir(char x[20][100], int y[20], float z[20]){
	int i;
	for (i = 0; i < 20; i++) {
		printf("\n==========================\nFUNCION�RIO[%d] \nNome: %s \nIdade: %d \nSal�rio: %.2f \n==========================", i + 1, x[i], y[i], z[i]);
	}
}

void doismil(char x[20][100], int y[20], float z[20]){
	int i;
	for (i = 0; i < 20; i++){
		if (z[i] > 2000){
			printf("\n==========================\nFUNCION�RIO[%d] \nNome: %s \nIdade: %d \nSal�rio: %.2f \n==========================", i + 1, x[i], y[i], z[i]);
		}
	}
}

float totalsalarios(float x[20]){
	int i, tot;
	for (i = 0; i < 20; i++){
		tot += x[i];
	}
	return tot;
}

void maiorsalario(char x[20][100], int y[20], float z[20]){
	int i, aux = 0, pos = 0;
	for (i = 0; i < 20; i++){
		if (z[i] > aux){
			aux = z[i];
			pos = i;
		} 
	}
	printf("\n==========================\nFUNCION�RIO DE MAIOR SAL�RIO: \nNome: %s \nIdade: %d \nSal�rio: %.2f \n==========================", x[pos], y[pos], z[pos]);
}

void pesquisa(char y[20][100], int z[20], float x[20]){
	int i, pos = 0;
	char name[100];
	fflush(stdin);
	printf("\nDigite o nome da pessoa a ser pesquisada: ");
	gets(name);
	fflush(stdin);
	for (i = 0; i < 20; i++){
		if (strcmp(y[i], name) == 0){
			pos = i;
		}
	}
	printf("\n==========================\nFUNCION�RIO: \nNome: %s \nIdade: %d \nSal�rio: %.2f \n==========================", y[pos], z[pos], x[pos]);
}


int main(){
setlocale(LC_ALL, "Portuguese");

	int op;
	int idade[20];
	float total, salario[20];
	char nome[20][100];
	
	do{
		system("cls");
		printf("****** Menu *******\n");
		printf("0 - Sair \n");
		printf("1 - Cadastrar os 20 funcion�rios \n");
		printf("2 - Exibir todos os funcion�rios \n");
		printf("3 - Exibir todos os funcion�rios que ganham mais de R$2000,00 \n");
		printf("4 - Exibir o total de sal�rios pagos a todos os funcion�rios \n");
		printf("5 - Exibir qual funcion�rio recebe o maior sal�rio \n");
		printf("6 - Pesquisar dados do funcion�rio pelo nome \n");
		
		printf("\nEntre com a op��o desejada: ");
		scanf("%d", &op);
		
		
		switch(op){
			case 0:
				printf("\nFim do programa!!");
				break;
			case 1:
				cadastro(nome, idade, salario);
				break;
			case 2:
				exibir(nome, idade, salario);
				system("pause");
				break;
			case 3:
				doismil(nome, idade, salario);
				system("pause");
				break;
			case 4:
				total = totalsalarios(salario);
				printf("\nO total de sal�rios pago foi de: R$%.2f \n", total);
				system("pause");
				break;
			case 5:
				maiorsalario(nome, idade, salario);
				system("pause");
				break;
			case 6:
				pesquisa(nome, idade, salario);
				system("pause");
				break;
				
			default:
				printf("\nOp��o inv�lida!\n");
				system("pause");
		}
			
	}while(op != 0);
	return 0;
}

