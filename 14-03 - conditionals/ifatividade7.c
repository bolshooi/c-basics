#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "Portuguese");

	int numero;
	
	printf("Digite um n�mero: ");
	scanf("%d", &numero);
	if (numero % 3 == 0) {
		printf("Seu n�mero � m�ltiplo de 3.");
	}
	else {
		printf("Seu n�mero n�o � m�ltiplo de 3.");
	}
	return 0;
}
