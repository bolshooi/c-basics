#include <stdio.h>
#include <locale.h>

void soma(int a, int b){
	int s = a + b;
	printf("Soma: %d\n", s);
	system("pause");
}

void subtracao(int a, int b){
	int s = a - b;
	printf("Subtra��o: %d\n", s);
	system("pause");
}

void divisao(int a, int b){
	int s = a / b;
	printf("Divis�o: %d\n", s);
	system("pause");
}

void multiplicacao(int a, int b){
	int s = a * b;
	printf("Multiplica��o: %d\n", s);
	system("pause");
}
int main(){
setlocale(LC_ALL, "Portuguese");
	int op, x, y;
	
	do{
		system("cls");
		printf("****** Menu *******\n");
		printf("0 - Sair \n");
		printf("1 - Soma \n");
		printf("2 - Subtra��o \n");
		printf("3 - Divis�o \n");
		printf("4 - Multiplica��o \n");

		printf("Entre com a op��o desejada: ");
		scanf("%d", &op);
		
		
		switch(op){
			case 0:
				printf("Fim do programa!!");
				break;
			case 1:
				printf("Digite o primeiro n�mero: ");
				scanf("%d", &x);
				printf("Digite o segundo n�mero: ");
				scanf("%d", &y);
				soma(x, y);
				break;
			case 2:
				printf("Digite o primeiro n�mero: ");
				scanf("%d", &x);
				printf("Digite o segundo n�mero: ");
				scanf("%d", &y);
				subtracao(x, y);
				break;
			case 3:
				printf("Digite o primeiro n�mero: ");
				scanf("%d", &x);
				printf("Digite o segundo n�mero: ");
				scanf("%d", &y);
				divisao(x, y);
				break;
			case 4:
				printf("Digite o primeiro n�mero: ");
				scanf("%d", &x);
				printf("Digite o segundo n�mero: ");
				scanf("%d", &y);
				multiplicacao(x, y);
				break;
			default:
				printf("Op��o inv�lida!\n");
				system("pause");
		}
			
	}while(op != 0);
	
	return 0;
}
