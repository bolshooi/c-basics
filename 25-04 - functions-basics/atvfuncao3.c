#include <stdio.h>
#include <locale.h>

int maior(int a, int b){
	if (a > b){
		return a;
	}
	else {
		return b;
	}
}

int main(){
setlocale(LC_ALL, "Portuguese");

	int x, y, z, m;
	printf("Digite o primeiro n�mero: ");
	scanf("%d", &x);
	printf("Digite o segundo n�mero: ");
	scanf("%d", &y);
	printf("Digite o terceiro n�mero: ");
	scanf("%d", &z);
	m = maior(x, y);
	m = maior(m, z);
	
	printf("O maior n�mero entre %d, %d e %d �: %d. \n", x, y, z, m);
	return 0;
}
