#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "Portuguese");

	int a, b, soma;
	
	printf("Digite um n�mero: ");
	scanf("%d", &a);
	printf("Digite outro n�mero: ");
	scanf("%d", &b);
	soma = a + b;
	if (soma > 10) {
		printf("Seu n�mero �: %d", soma);
	}
	return 0;
}
