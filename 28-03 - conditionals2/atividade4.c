#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "Portuguese");

	int num1, num2, opc, res;
	
	printf("MENU DE OP��ES \n 1 - Somar dois n�meros \n 2 - Multiplicar dois n�meros \n 3 - Subtrair dois n�meros \n 4 - Dividir dois n�meros. \n");
	printf("Digite sua op��o: ");
	scanf("%d", &opc);
	printf("Digite o primeiro n�mero: ");
	scanf("%d", &num1);
	printf("Digite o segundo n�mero: ");
	scanf("%d", &num2);
	if (opc == 1){
		res = num1 + num2;
		printf("Resultado: %d", res);
	}
	else {
		if (opc == 2){
			res = num1 * num2;
			printf("Resultado: %d", res);
		}
		else {
			if (opc == 3){
				res = num1 - num2;
				printf("Resultado: %d", res);
			}
			else {
				if (opc == 4){
					res = num1 / num2;
					printf("Resultado: %d", res);
				}
				else {
					printf("Op��o inv�lida.");
				}
			}
		}
	}
	return 0;
}
