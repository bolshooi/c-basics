#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "Portuguese");

	int numero;
	printf("Digite um n�mero: ");
	scanf("%d", &numero);
	
	if ((numero % 3 == 0) && (numero % 7 == 0)) {
		printf("Seu n�mero � divis�vel por 3 e 7.");
	}
	else {
		printf("Seu n�mero n�o � divis�vel por 3 e 7.");
	}
	return 0;
}

