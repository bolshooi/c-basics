#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "Portuguese");

	int a, b, aux;
	
	printf("Digite um n�mero: ");
	scanf("%d", &a);
	printf("Digite outro n�mero: ");
	scanf("%d", &b);
	if (a > b) {
		aux = a;
		a = b;
		b = aux;
		printf("%d %d", a, b);
	}
	return 0;
}

